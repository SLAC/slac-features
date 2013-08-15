<?php
/**
 * @file
 * slac_news_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_news_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'X-ray',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0ce6dd19-dde1-4daa-ae83-1879947970ac',
    'vocabulary_machine_name' => 'slac_news_tags',
  );
  $terms[] = array(
    'name' => 'laser',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '98be32f4-4f1a-4cbc-98be-01c4fc935bf8',
    'vocabulary_machine_name' => 'slac_news_tags',
  );
  $terms[] = array(
    'name' => 'cells',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'aaa4a1c8-fb65-4eeb-9bfe-909031f5e18b',
    'vocabulary_machine_name' => 'slac_news_tags',
  );
  $terms[] = array(
    'name' => 'stanford',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'dad41187-6745-43bc-b95a-7851a7b2c825',
    'vocabulary_machine_name' => 'slac_news_tags',
  );
  return $terms;
}
