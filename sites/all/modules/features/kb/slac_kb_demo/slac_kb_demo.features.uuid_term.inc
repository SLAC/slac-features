<?php
/**
 * @file
 * slac_kb_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_kb_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'SLAC',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '0c8a1df9-c687-4ded-b8eb-dcea6e4b0c9f',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'X-ray',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0d53e215-e34f-4097-a835-0870eaa81a0c',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Physics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2e456207-aeca-43f3-b29c-0da0834feeac',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Society',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '35cbc66a-e794-4cac-bb15-e55d40106cfb',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'People',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5441f982-c41e-47f9-a076-ba312679f181',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Accelerator',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8007cf90-674c-4ff0-a0f2-25a0466cabec',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Structure',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8d607e80-fa1f-4fba-b812-35b84cf02f42',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Technology',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8efc6df4-8289-4403-a87e-540e0d355e31',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Departments',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9090165b-26d9-4584-8960-0556e596c3dc',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'af009c65-8760-454b-a942-c2424ed3c1c8',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Science',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e4f02dd2-5fea-4f78-9932-78de63198263',
    'vocabulary_machine_name' => 'kb_categories',
  );
  return $terms;
}
