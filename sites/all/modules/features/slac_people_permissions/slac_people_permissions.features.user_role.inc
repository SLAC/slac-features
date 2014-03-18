<?php
/**
 * @file
 * slac_people_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function slac_people_permissions_user_default_roles() {
  $roles = array();

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 2,
  );

  return $roles;
}
