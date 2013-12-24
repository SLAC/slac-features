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

  // Exported permission: create field_slac_faq_answer.
  $permissions['create field_slac_faq_answer'] = array(
    'name' => 'create field_slac_faq_answer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create slac_faq content.
  $permissions['create slac_faq content'] = array(
    'name' => 'create slac_faq content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_slac_faq_answer.
  $permissions['edit field_slac_faq_answer'] = array(
    'name' => 'edit field_slac_faq_answer',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_slac_faq_answer.
  $permissions['edit own field_slac_faq_answer'] = array(
    'name' => 'edit own field_slac_faq_answer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_slac_faq_answer.
  $permissions['view field_slac_faq_answer'] = array(
    'name' => 'view field_slac_faq_answer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_slac_faq_answer.
  $permissions['view own field_slac_faq_answer'] = array(
    'name' => 'view own field_slac_faq_answer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
