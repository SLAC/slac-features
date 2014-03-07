<?php
/**
 * @file
 * slac_share_block.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function slac_share_block_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_share_options'
  $field_bases['field_share_options'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_share_options',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'facebook' => 'Facebook',
        'twitter' => 'Twitter',
        'googleplus' => 'GooglePlus',
        'reddit' => 'Reddit',
        'delicious' => 'Delicious',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
