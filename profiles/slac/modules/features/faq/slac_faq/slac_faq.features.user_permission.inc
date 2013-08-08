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

  // Exported permission: create salc_faq content.
  $permissions['create salc_faq content'] = array(
    'name' => 'create salc_faq content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
