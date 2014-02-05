<?php
/**
 * @file
 * slac_service_catalog.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slac_service_catalog_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-slac_sc_catalog_item-body'
  $field_instances['node-slac_sc_catalog_item-body'] = array(
    'bundle' => 'slac_sc_catalog_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
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
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-slac_sc_catalog_item-field_slac_sc_category'
  $field_instances['node-slac_sc_catalog_item-field_slac_sc_category'] = array(
    'bundle' => 'slac_sc_catalog_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please choose the category for this service is associated with',
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
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slac_sc_category',
    'label' => 'Service Category',
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

  // Exported field_instance: 'node-slac_sc_catalog_item-field_slac_sc_eligibility'
  $field_instances['node-slac_sc_catalog_item-field_slac_sc_eligibility'] = array(
    'bundle' => 'slac_sc_catalog_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please check all the groups of people that are eligible for this service',
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
    'field_name' => 'field_slac_sc_eligibility',
    'label' => 'Eligibility ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-slac_sc_catalog_item-field_slac_sc_rate'
  $field_instances['node-slac_sc_catalog_item-field_slac_sc_rate'] = array(
    'bundle' => 'slac_sc_catalog_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this is not a free service, please enter the rate at this service is offered.',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slac_sc_rate',
    'label' => 'Rate',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-slac_sc_catalog_item-field_slac_sc_request_link'
  $field_instances['node-slac_sc_catalog_item-field_slac_sc_request_link'] = array(
    'bundle' => 'slac_sc_catalog_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the link to where this service can be requested, ordered.',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slac_sc_request_link',
    'label' => 'Request Service link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-slac_sc_catalog_item-field_slac_sc_requirements'
  $field_instances['node-slac_sc_catalog_item-field_slac_sc_requirements'] = array(
    'bundle' => 'slac_sc_catalog_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the requirements for this service, you can enter multiple if needed.',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_slac_sc_requirements',
    'label' => 'Requirements',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-slac_sc_catalog_item-field_slac_sc_service_overview'
  $field_instances['node-slac_sc_catalog_item-field_slac_sc_service_overview'] = array(
    'bundle' => 'slac_sc_catalog_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter a short service overview that describes what this service offers.',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_slac_sc_service_overview',
    'label' => 'Service Overview',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-slac_sc_catalog_item-field_slac_sc_support'
  $field_instances['node-slac_sc_catalog_item-field_slac_sc_support'] = array(
    'bundle' => 'slac_sc_catalog_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter method and ways in which support are provided to this service. For example, submit a helpline ticket.',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slac_sc_support',
    'label' => 'Support',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'taxonomy_term-slac_sc_category-field_slac_sc_category_logo'
  $field_instances['taxonomy_term-slac_sc_category-field_slac_sc_category_logo'] = array(
    'bundle' => 'slac_sc_category',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_slac_sc_category_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-slac_sc_self_help-field_sc_catalog_item_extlink'
  $field_instances['taxonomy_term-slac_sc_self_help-field_sc_catalog_item_extlink'] = array(
    'bundle' => 'slac_sc_self_help',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the url of the self help article, it can be both on the site or on an external site',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_sc_catalog_item_extlink',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Eligibility ');
  t('If this is not a free service, please enter the rate at this service is offered.');
  t('Link');
  t('Logo');
  t('Please check all the groups of people that are eligible for this service');
  t('Please choose the category for this service is associated with');
  t('Please enter a short service overview that describes what this service offers.');
  t('Please enter method and ways in which support are provided to this service. For example, submit a helpline ticket.');
  t('Please enter the link to where this service can be requested, ordered.');
  t('Please enter the requirements for this service, you can enter multiple if needed.');
  t('Please enter the url of the self help article, it can be both on the site or on an external site');
  t('Rate');
  t('Request Service link');
  t('Requirements');
  t('Service Category');
  t('Service Overview');
  t('Support');

  return $field_instances;
}
