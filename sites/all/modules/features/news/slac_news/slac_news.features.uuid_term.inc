<?php
/**
 * @file
 * slac_news.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_news_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'News Article',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '05339b25-6cf8-4e75-b4ea-f91d490f5b04',
    'vocabulary_machine_name' => 'news_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Press Release',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '47c46adc-4bf5-41cc-91a2-96c057b16297',
    'vocabulary_machine_name' => 'news_types',
    'metatags' => array(),
  );
  return $terms;
}
