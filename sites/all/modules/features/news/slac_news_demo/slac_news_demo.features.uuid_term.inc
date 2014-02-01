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
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'green living',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1aa88d95-a2ea-4001-978d-fcacdf96213e',
    'vocabulary_machine_name' => 'slac_news_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'social phobia',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4538f295-cc43-4d99-ba1d-6a7f23e86663',
    'vocabulary_machine_name' => 'slac_news_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'antiviral drug',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '971c94e1-0a7e-474c-96ca-9e1a4da2d6a5',
    'vocabulary_machine_name' => 'slac_news_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'laser',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '98be32f4-4f1a-4cbc-98be-01c4fc935bf8',
    'vocabulary_machine_name' => 'slac_news_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'cells',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'aaa4a1c8-fb65-4eeb-9bfe-909031f5e18b',
    'vocabulary_machine_name' => 'slac_news_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'stanford',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'dad41187-6745-43bc-b95a-7851a7b2c825',
    'vocabulary_machine_name' => 'slac_news_tags',
    'metatags' => array(),
  );
  return $terms;
}
