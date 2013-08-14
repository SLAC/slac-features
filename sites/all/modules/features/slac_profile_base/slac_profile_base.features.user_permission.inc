<?php
/**
 * @file
 * slac_profile_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_profile_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
