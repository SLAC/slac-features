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
    'field_field_slac_event_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#3ca331',
        ),
      ),
    ),
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
    'field_field_slac_event_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#d75436',
        ),
      ),
    ),
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
  );
  return $terms;
}
