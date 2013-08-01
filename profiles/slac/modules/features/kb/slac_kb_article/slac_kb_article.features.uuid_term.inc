<?php
/**
 * @file
 * slac_kb_article.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_kb_article_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Departments',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '14cbd056-588d-4bad-9fea-8acc6d5a51fa',
    'vocabulary_machine_name' => 'kb_categories',
    'parent' => array(
      0 => 'c93e5bd5-36ed-4ea5-ab38-e8fda9f59bf5',
    ),
  );
  $terms[] = array(
    'name' => 'X-ray',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '1a7a73b4-f14b-497f-bd59-d81f31a84a8c',
    'vocabulary_machine_name' => 'kb_categories',
    'parent' => array(
      0 => 'd29a2787-29ae-40c3-ac85-32275d43d9e4',
    ),
  );
  $terms[] = array(
    'name' => 'Technology',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2b69b62c-6e4d-45e1-98d6-d3eda92ac28f',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Accelerator',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '524c312c-d68a-4c84-8637-e434f27027f0',
    'vocabulary_machine_name' => 'kb_categories',
    'parent' => array(
      0 => 'd29a2787-29ae-40c3-ac85-32275d43d9e4',
    ),
  );
  $terms[] = array(
    'name' => 'Science',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '70ca933c-1895-49fd-b0ce-0301025607a9',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'People',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '71dcffce-5b5c-43c4-ba17-478ce36ca679',
    'vocabulary_machine_name' => 'kb_categories',
    'parent' => array(
      0 => '14cbd056-588d-4bad-9fea-8acc6d5a51fa',
    ),
  );
  $terms[] = array(
    'name' => 'Physics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9fa28374-e64d-43b6-8896-1e15092e4467',
    'vocabulary_machine_name' => 'kb_categories',
    'parent' => array(
      0 => 'd29a2787-29ae-40c3-ac85-32275d43d9e4',
    ),
  );
  $terms[] = array(
    'name' => 'Structure',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c64493d8-93b8-4e57-8eaa-9a904f5ae6c6',
    'vocabulary_machine_name' => 'kb_categories',
    'parent' => array(
      0 => 'c93e5bd5-36ed-4ea5-ab38-e8fda9f59bf5',
    ),
  );
  $terms[] = array(
    'name' => 'SLAC',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => 'c93e5bd5-36ed-4ea5-ab38-e8fda9f59bf5',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'd29a2787-29ae-40c3-ac85-32275d43d9e4',
    'vocabulary_machine_name' => 'kb_categories',
  );
  $terms[] = array(
    'name' => 'Society',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => 'fb0f2c16-a45c-4706-9c78-0bb30910a43f',
    'vocabulary_machine_name' => 'kb_categories',
  );
  return $terms;
}
