<?php
/**
 * @file
 * slac_forum.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_forum_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer advanced forum.
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: administer forums.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'forum',
  );

  // Exported permission: administer user subscriptions.
  $permissions['administer user subscriptions'] = array(
    'name' => 'administer user subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: bulk-administer user subscriptions.
  $permissions['bulk-administer user subscriptions'] = array(
    'name' => 'bulk-administer user subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: create forum content.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any forum content.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own forum content.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any forum content.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own forum content.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: subscribe to all content types.
  $permissions['subscribe to all content types'] = array(
    'name' => 'subscribe to all content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: subscribe to content.
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: subscribe to content types.
  $permissions['subscribe to content types'] = array(
    'name' => 'subscribe to content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: subscribe to taxonomy terms.
  $permissions['subscribe to taxonomy terms'] = array(
    'name' => 'subscribe to taxonomy terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: suspend own subscriptions.
  $permissions['suspend own subscriptions'] = array(
    'name' => 'suspend own subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'subscriptions',
  );

  // Exported permission: view forum statistics.
  $permissions['view forum statistics'] = array(
    'name' => 'view forum statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: view last edited notice.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  return $permissions;
}
