<?php
/**
 * @file
 * slac_mini_slideshow.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function slac_mini_slideshow_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_mini_slideshow_slide'
  $field_bases['field_mini_slideshow_slide'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mini_slideshow_slide',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
