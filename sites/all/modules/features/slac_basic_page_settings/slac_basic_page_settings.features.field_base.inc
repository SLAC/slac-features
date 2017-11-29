<?php
/**
 * @file
 * slac_basic_page_settings.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function slac_basic_page_settings_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_bp_image'.
  $field_bases['field_bp_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bp_image',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'profile2_private' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
