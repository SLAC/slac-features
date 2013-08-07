<?php
/**
 * @file
 * slac_wiki.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: access ajax markup.
  $permissions['access ajax markup'] = array(
    'name' => 'access ajax markup',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ajax_markup',
  );

  // Exported permission: create slac_wiki_page content.
  $permissions['create slac_wiki_page content'] = array(
    'name' => 'create slac_wiki_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own slac_wiki_page content.
  $permissions['delete own slac_wiki_page content'] = array(
    'name' => 'delete own slac_wiki_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any slac_wiki_page content.
  $permissions['edit any slac_wiki_page content'] = array(
    'name' => 'edit any slac_wiki_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
