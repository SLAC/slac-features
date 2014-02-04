<?php
/**
 * @file
 * slac_service_help.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_service_help_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access Internal tickets'.
  $permissions['access Internal tickets'] = array(
    'name' => 'access Internal tickets',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'support',
  );

  // Exported permission: 'administer support'.
  $permissions['administer support'] = array(
    'name' => 'administer support',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'can administer state'.
  $permissions['can administer state'] = array(
    'name' => 'can administer state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'can assign tickets to any user'.
  $permissions['can assign tickets to any user'] = array(
    'name' => 'can assign tickets to any user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'can assign tickets to self'.
  $permissions['can assign tickets to self'] = array(
    'name' => 'can assign tickets to self',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'can select client'.
  $permissions['can select client'] = array(
    'name' => 'can select client',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'can select priority'.
  $permissions['can select priority'] = array(
    'name' => 'can select priority',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'can select state'.
  $permissions['can select state'] = array(
    'name' => 'can select state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'can subscribe other users to notifications'.
  $permissions['can subscribe other users to notifications'] = array(
    'name' => 'can subscribe other users to notifications',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'can suppress notification'.
  $permissions['can suppress notification'] = array(
    'name' => 'can suppress notification',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'create support_ticket content'.
  $permissions['create support_ticket content'] = array(
    'name' => 'create support_ticket content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any support_ticket content'.
  $permissions['delete any support_ticket content'] = array(
    'name' => 'delete any support_ticket content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own support_ticket content'.
  $permissions['delete own support_ticket content'] = array(
    'name' => 'delete own support_ticket content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'download mail via support/fetch'.
  $permissions['download mail via support/fetch'] = array(
    'name' => 'download mail via support/fetch',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'edit any support_ticket content'.
  $permissions['edit any support_ticket content'] = array(
    'name' => 'edit any support_ticket content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own support_ticket content'.
  $permissions['edit own support_ticket content'] = array(
    'name' => 'edit own support_ticket content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'move ticket'.
  $permissions['move ticket'] = array(
    'name' => 'move ticket',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  // Exported permission: 'view other users tickets'.
  $permissions['view other users tickets'] = array(
    'name' => 'view other users tickets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'support',
  );

  return $permissions;
}
