<?php
/**
 * @file
 * slac_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create slac_news content.
  $permissions['create slac_news content'] = array(
    'name' => 'create slac_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any slac_news content.
  $permissions['delete any slac_news content'] = array(
    'name' => 'delete any slac_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own slac_news content.
  $permissions['delete own slac_news content'] = array(
    'name' => 'delete own slac_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any slac_news content.
  $permissions['edit any slac_news content'] = array(
    'name' => 'edit any slac_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own slac_news content.
  $permissions['edit own slac_news content'] = array(
    'name' => 'edit own slac_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
