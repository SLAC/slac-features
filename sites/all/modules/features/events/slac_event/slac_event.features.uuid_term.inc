<?php
/**
 * @file
 * slac_event.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_event_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Photon Science Seminars',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '887e35db-2734-405e-a001-daad4a60daa7',
    'vocabulary_machine_name' => 'events_tags',
  );
  $terms[] = array(
    'name' => 'Accelerator and Instrumentation Seminars',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
    'vocabulary_machine_name' => 'event_categories',
    'field_slac_event_color_reference' => array(),
  );
  $terms[] = array(
    'name' => 'Particle Physics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9914b3dc-1371-45c4-970d-93a26ca5fba9',
    'vocabulary_machine_name' => 'events_tags',
  );
  $terms[] = array(
    'name' => 'Cosmology Seminars',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
    'vocabulary_machine_name' => 'event_categories',
    'field_slac_event_color_reference' => array(),
  );
  $terms[] = array(
    'name' => 'Red',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd01d5031-6a61-4e11-9be5-478d34f59e2a',
    'vocabulary_machine_name' => 'category_colors',
    'field_slac_event_color' => array(),
  );
  $terms[] = array(
    'name' => 'Blue',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e9de47f4-620d-4bd4-853f-cee296f6e5aa',
    'vocabulary_machine_name' => 'category_colors',
    'field_slac_event_color' => array(),
  );
  $terms[] = array(
    'name' => 'SLAC Public Lectures',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f0644a12-d7ad-4bce-b9fd-84ec84a94f7e',
    'vocabulary_machine_name' => 'event_categories',
    'field_slac_event_color_reference' => array(),
  );
  $terms[] = array(
    'name' => 'Green',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'faab5f7d-ef22-4b05-a4f8-f590ecbedbb9',
    'vocabulary_machine_name' => 'category_colors',
    'field_slac_event_color' => array(),
  );
  return $terms;
}
