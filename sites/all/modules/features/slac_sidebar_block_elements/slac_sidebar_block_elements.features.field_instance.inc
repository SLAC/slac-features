<?php
/**
 * @file
 * slac_sidebar_block_elements.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slac_sidebar_block_elements_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-slac_sidebar_block-field_subtitle'
  $field_instances['fieldable_panels_pane-slac_sidebar_block-field_subtitle'] = array(
    'bundle' => 'slac_sidebar_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Subtitle');

  return $field_instances;
}
