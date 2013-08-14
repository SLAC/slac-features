<?php
/**
 * @file
 * slac_profile_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function slac_profile_base_user_default_roles() {
  $roles = array();

  // Exported role: author.
  $roles['author'] = array(
    'name' => 'author',
    'weight' => 4,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  return $roles;
}
