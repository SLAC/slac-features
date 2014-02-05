<?php
/**
 * @file
 * slac_service_catalog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_service_catalog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_slac_sc_catalog_item';
  $strongarm->value = 0;
  $export['comment_anonymous_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_slac_sc_catalog_item';
  $strongarm->value = 1;
  $export['comment_default_mode_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_slac_sc_catalog_item';
  $strongarm->value = '50';
  $export['comment_default_per_page_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_slac_sc_catalog_item';
  $strongarm->value = 1;
  $export['comment_form_location_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_slac_sc_catalog_item';
  $strongarm->value = '1';
  $export['comment_preview_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_slac_sc_catalog_item';
  $strongarm->value = '1';
  $export['comment_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_slac_sc_catalog_item';
  $strongarm->value = 1;
  $export['comment_subject_field_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__slac_sc_catalog_item';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_slac_sc_catalog_item';
  $strongarm->value = array();
  $export['menu_options_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_slac_sc_catalog_item';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slac_sc_catalog_item';
  $strongarm->value = array(
    0 => 'status',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_slac_sc_catalog_item';
  $strongarm->value = '1';
  $export['node_preview_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_slac_sc_catalog_item';
  $strongarm->value = 0;
  $export['node_submitted_slac_sc_catalog_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slac_sc_catalog_item_pattern';
  $strongarm->value = 'services/service/[node:title]';
  $export['pathauto_node_slac_sc_catalog_item_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_slac_sc_category_pattern';
  $strongarm->value = 'services/category/[term:name]';
  $export['pathauto_taxonomy_term_slac_sc_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_slac_sc_eligibility_pattern';
  $strongarm->value = 'services/eligibility/[term:name]';
  $export['pathauto_taxonomy_term_slac_sc_eligibility_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_slac_sc_self_help_pattern';
  $strongarm->value = 'services/self-help/[term:name]';
  $export['pathauto_taxonomy_term_slac_sc_self_help_pattern'] = $strongarm;

  return $export;
}
