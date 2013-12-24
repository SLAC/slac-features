<?php
/**
 * @file
 * slac_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: create slac_faq content.
  $permissions['create slac_faq content'] = array(
    'name' => 'create slac_faq content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
