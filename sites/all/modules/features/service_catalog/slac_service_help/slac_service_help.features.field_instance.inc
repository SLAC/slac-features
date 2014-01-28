<?php
/**
 * @file
 * slac_service_help.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slac_service_help_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-support_ticket-field_support_category'
  $field_instances['node-support_ticket-field_support_category'] = array(
    'bundle' => 'support_ticket',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please select one of the support category',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_support_category',
    'label' => 'Support category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Please select one of the support category');
  t('Support category');

  return $field_instances;
}
