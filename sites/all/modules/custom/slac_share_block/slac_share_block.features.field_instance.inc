<?php
/**
 * @file
 * slac_share_block.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slac_share_block_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-share_block-field_share_options'
  $field_instances['fieldable_panels_pane-share_block-field_share_options'] = array(
    'bundle' => 'share_block',
    'default_value' => array(
      0 => array(
        'value' => 'facebook',
      ),
      1 => array(
        'value' => 'twitter',
      ),
      2 => array(
        'value' => 'googleplus',
      ),
      3 => array(
        'value' => 'reddit',
      ),
      4 => array(
        'value' => 'delicious',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_share_options',
    'label' => 'Share Options',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Share Options');

  return $field_instances;
}
