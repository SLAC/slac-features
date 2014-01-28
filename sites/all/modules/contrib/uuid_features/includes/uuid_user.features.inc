<?php
/**
 * @file
 * Features hooks for the uuid_user features component.
 */

/**
 * Implements hook_features_export_options().
 */
function uuid_user_features_export_options() {
  $options = array();

  $query = 'SELECT u.uid, u.name, u.mail, u.uuid
    FROM {users} u WHERE uid > 0 ORDER BY u.name ASC';
  $results = db_query($query);
  foreach ($results as $user) {
    $options[$user->uuid] = t('@name: @mail', array(
      '@name' => $user->name,
      '@mail' => $user->mail,
    ));
  }

  return $options;
}

/**
 * Implements hook_features_export().
 */
function uuid_user_features_export($data, &$export, $module_name = '') {
  $pipe = array();

  $export['dependencies']['uuid_features'] = 'uuid_features';

  uuid_features_load_module_includes();

  $uids = entity_get_id_by_uuid('user', $data);
  foreach ($uids as $uuid => $uid) {
    // Load the existing user, with a fresh cache.
    $node = node_load($uid, TRUE);

    $export['features']['uuid_user'][$uuid] = $uuid;

    $data = &$export;
    drupal_alter('uuid_user_features_export', $data, $user);
  }

  return $pipe;
}

/**
 * Implements hook_features_export_render().
 */
function uuid_user_features_export_render($module, $data) {
  $translatables = $code = array();

  uuid_features_load_module_includes();

  $code[] = '  $users = array();';
  $code[] = '';
  $uids = entity_get_id_by_uuid('user', $data);
  foreach ($uids as $uuid => $uid) {
    // Only export the user if it exists.
    if ($uid === FALSE) {
      continue;
    }
    // Attempt to load the user, using a fresh cache.
    $account = user_load($uid, TRUE);
    if (empty($account)) {
      continue;
    }
    $export = clone $account;

    // Use date instead of created, in the same format used by node_object_prepare.
    $export->date = format_date($export->created, 'custom', 'Y-m-d H:i:s O');
    $export->pass = user_password(10);
    unset($export->uid);

    // The hook_alter signature is:
    // hook_uuid_node_features_export_render_alter(&$export, $user, $module);
    drupal_alter('uuid_user_features_export_render', $export, $user, $module);

    $code[] = '  $users[] = ' . features_var_export($export) . ';';
  }

  if (!empty($translatables)) {
    $code[] = features_translatables_export($translatables, '  ');
  }

  $code[] = '  return $users;';
  $code = implode("\n", $code);
  return array('uuid_features_default_users' => $code);
}

/**
 * Implements hook_features_revert().
 */
function uuid_user_features_revert($module) {
  uuid_user_features_rebuild($module);
}

/**
 * Implements hook_features_rebuild().
 * Rebuilds users based on UUID from code defaults.
 */
function uuid_user_features_rebuild($module) {
  variable_set('menu_rebuild_needed', FALSE);
  lock_acquire('menu_rebuild');

  $users = module_invoke($module, 'uuid_features_default_users');
  if (!empty($users)) {
    module_load_include('inc', 'user', 'user.pages');

    foreach ($users as $data) {
      $account = (object) $data;

      // Find the matching user by name with a fresh cache
      $existing = user_load_by_name($account->name);
      if (isset($existing->uid)) {
          $account->uid = $existing->uid;
      }
      else {
        $account->uid = NULL;
      }
      // The hook_alter signature is:
      // hook_uuid_user_features_rebuild_alter(&user, $module);
      drupal_alter('uuid_user_features_rebuild', $account, $module);
      if($account->uid === NULL) {
        $account = user_save(NULL, (array) $account);
      }
      else {
        $account = user_save($existing, (array) $account);
      }
      // Clear out previously loaded user account if one was found
      unset($existing);
    }
  }

  lock_release('menu_rebuild');
}
