<?php
/**
 * @file
 * slac_wiki_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_wiki_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'demo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '79b2e381-eb13-4e93-9ff8-77a7568ff802',
    'vocabulary_machine_name' => 'slac_wiki_tags',
  );
  $terms[] = array(
    'name' => 'sample',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a4f4d562-1da3-4d8e-8ed7-b621b919ea9e',
    'vocabulary_machine_name' => 'slac_wiki_tags',
  );
  return $terms;
}
