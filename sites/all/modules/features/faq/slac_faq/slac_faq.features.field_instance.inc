<?php
/**
 * @file
 * slac_faq.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slac_faq_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-salc_faq-body'
  $field_instances['node-salc_faq-body'] = array(
    'bundle' => 'salc_faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the long form of the question here including all the details',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Question detail',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-salc_faq-field_slac_faq_answer'
  $field_instances['node-salc_faq-field_slac_faq_answer'] = array(
    'bundle' => 'salc_faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Answer to the question, this is to be fulfilled by administrative users',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slac_faq_answer',
    'label' => 'Question Answer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-salc_faq-field_slac_faq_category'
  $field_instances['node-salc_faq-field_slac_faq_category'] = array(
    'bundle' => 'salc_faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please select the category this question/answer set belongs to',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slac_faq_category',
    'label' => 'Category',
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

  // Exported field_instance: 'node-salc_faq-field_slac_faq_status'
  $field_instances['node-salc_faq-field_slac_faq_status'] = array(
    'bundle' => 'salc_faq',
    'default_value' => array(
      0 => array(
        'value' => 'open',
      ),
    ),
    'deleted' => 0,
    'description' => 'Please indicate if the FAQ set is open or closed, only open FAQ will appear in the queue',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_slac_faq_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Answer to the question, this is to be fulfilled by administrative users');
  t('Category');
  t('Please enter the long form of the question here including all the details');
  t('Please indicate if the FAQ set is open or closed, only open FAQ will appear in the queue');
  t('Please select the category this question/answer set belongs to');
  t('Question Answer');
  t('Question detail');
  t('Status');

  return $field_instances;
}
