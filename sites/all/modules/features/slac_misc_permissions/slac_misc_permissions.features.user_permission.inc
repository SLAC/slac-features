<?php
/**
 * @file
 * slac_misc_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_misc_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer demo modules'.
  $permissions['administer demo modules'] = array(
    'name' => 'administer demo modules',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'slac_admin_modules',
  );

  // Exported permission: 'slac administer configuration'.
  $permissions['slac administer configuration'] = array(
    'name' => 'slac administer configuration',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'slac_configuration',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}
