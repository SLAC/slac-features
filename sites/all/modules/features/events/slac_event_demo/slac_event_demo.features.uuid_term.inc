<?php
/**
 * @file
 * slac_event_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_event_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Accelerator and Instrumentation Seminars',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
    'vocabulary_machine_name' => 'event_categories',
    'field_field_slac_event_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#3ca331',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cosmology Seminars',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
    'vocabulary_machine_name' => 'event_categories',
    'field_field_slac_event_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#d75436',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'SLAC Public Lectures',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f0644a12-d7ad-4bce-b9fd-84ec84a94f7e',
    'vocabulary_machine_name' => 'event_categories',
    'field_field_slac_event_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#2c96c8',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
