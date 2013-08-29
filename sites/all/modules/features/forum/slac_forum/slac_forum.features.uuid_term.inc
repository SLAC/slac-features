<?php
/**
 * @file
 * slac_forum.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_forum_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'General',
    'description' => '',
    'format' => NULL,
    'weight' => 6,
    'uuid' => '107fbf23-887e-4665-a899-93416d878d55',
    'vocabulary_machine_name' => 'forums',
  );
  $terms[] = array(
    'name' => 'Biology',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '85ec2863-d03e-4280-8bc6-353cf0fb9bf6',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => '87d7b13a-8553-4a92-b430-ef5554d1ff90',
    ),
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '',
    'format' => NULL,
    'weight' => 2,
    'uuid' => '87d7b13a-8553-4a92-b430-ef5554d1ff90',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => '99b7f4ee-e7af-473a-9037-eb2f3b1d53d5',
    ),
  );
  $terms[] = array(
    'name' => 'Science',
    'description' => '',
    'format' => NULL,
    'weight' => 1,
    'uuid' => '89c74d2b-8dff-42bd-ba6d-c57b4a595bec',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => '99b7f4ee-e7af-473a-9037-eb2f3b1d53d5',
    ),
  );
  $terms[] = array(
    'name' => 'SLAC',
    'description' => '',
    'format' => NULL,
    'weight' => 7,
    'uuid' => '99b7f4ee-e7af-473a-9037-eb2f3b1d53d5',
    'vocabulary_machine_name' => 'forums',
  );
  $terms[] = array(
    'name' => 'Visiting SLAC',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b83dc369-c408-4ce6-9ef0-b9311f8d49b8',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => '99b7f4ee-e7af-473a-9037-eb2f3b1d53d5',
    ),
  );
  $terms[] = array(
    'name' => 'Announcements',
    'description' => 'Get updates and announcements from SLAC.',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd05a89c1-2f65-4dc0-8158-ca658bdabc0e',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => '107fbf23-887e-4665-a899-93416d878d55',
    ),
  );
  $terms[] = array(
    'name' => 'Physics',
    'description' => '',
    'format' => NULL,
    'weight' => 1,
    'uuid' => 'f1fdd65a-9b52-4f38-9374-769d377943b6',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => '87d7b13a-8553-4a92-b430-ef5554d1ff90',
    ),
  );
  return $terms;
}
