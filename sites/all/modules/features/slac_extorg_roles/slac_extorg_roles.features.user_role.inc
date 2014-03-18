<?php
/**
 * @file
 * slac_extorg_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function slac_extorg_roles_user_default_roles() {
  $roles = array();

  // Exported role: author.
  $roles['author'] = array(
    'name' => 'author',
    'weight' => 6,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 7,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 5,
  );

  return $roles;
}
