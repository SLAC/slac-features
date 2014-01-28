<?php
/**
 * @file
 * slac_social_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_social_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable social_media'.
  $permissions['create fieldable social_media'] = array(
    'name' => 'create fieldable social_media',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable social_media'.
  $permissions['delete fieldable social_media'] = array(
    'name' => 'delete fieldable social_media',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable social_media'.
  $permissions['edit fieldable social_media'] = array(
    'name' => 'edit fieldable social_media',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
