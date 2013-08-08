<?php
/**
 * @file
 * slac_news_demo_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_news_demo_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Press releases',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2b63fdee-aa9f-4a8e-818c-c4b808fe6731',
    'vocabulary_machine_name' => 'news_categories',
  );
  $terms[] = array(
    'name' => 'News articles',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'eebfd8ab-8943-4b70-aeb1-a6ed3ba11e3d',
    'vocabulary_machine_name' => 'news_categories',
  );
  return $terms;
}
