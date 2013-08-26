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
    'name' => 'Research',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '87d7b13a-8553-4a92-b430-ef5554d1ff90',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => 'a64188a5-2a0a-4af7-88db-d3b675833e76',
    ),
  );
  $terms[] = array(
    'name' => 'Science',
    'description' => '',
    'format' => NULL,
    'weight' => 2,
    'uuid' => '89c74d2b-8dff-42bd-ba6d-c57b4a595bec',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => 'a64188a5-2a0a-4af7-88db-d3b675833e76',
    ),
  );
  $terms[] = array(
    'name' => 'SLAC',
    'description' => '',
    'format' => NULL,
    'weight' => 3,
    'uuid' => 'a64188a5-2a0a-4af7-88db-d3b675833e76',
    'vocabulary_machine_name' => 'forums',
  );
  $terms[] = array(
    'name' => 'Visiting SLAC',
    'description' => '',
    'format' => NULL,
    'weight' => 1,
    'uuid' => 'b83dc369-c408-4ce6-9ef0-b9311f8d49b8',
    'vocabulary_machine_name' => 'forums',
    'parent' => array(
      0 => 'a64188a5-2a0a-4af7-88db-d3b675833e76',
    ),
  );
  $terms[] = array(
    'name' => 'General discussion',
    'description' => '',
    'format' => NULL,
    'weight' => 4,
    'uuid' => 'c7c817b0-fb5b-4266-bc0e-4609674f8519',
    'vocabulary_machine_name' => 'forums',
  );
  return $terms;
}
