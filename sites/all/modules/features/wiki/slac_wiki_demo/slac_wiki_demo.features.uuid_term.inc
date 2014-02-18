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
    'name' => 'slac',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '251bc38b-888f-4b13-9e19-e25c0d389cfa',
    'vocabulary_machine_name' => 'slac_wiki_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'kipac',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e3e21c1-6218-4fd6-ba95-c0ba2261f447',
    'vocabulary_machine_name' => 'slac_wiki_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'pulse',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5126cb7c-69eb-4895-a0e6-a3aba3eda83a',
    'vocabulary_machine_name' => 'slac_wiki_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'demo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '79b2e381-eb13-4e93-9ff8-77a7568ff802',
    'vocabulary_machine_name' => 'slac_wiki_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'sample',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a4f4d562-1da3-4d8e-8ed7-b621b919ea9e',
    'vocabulary_machine_name' => 'slac_wiki_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'about',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd24c8773-a95e-4ce7-b89e-e95d5071b504',
    'vocabulary_machine_name' => 'slac_wiki_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'lcls',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ed74c4da-8dc1-4c4a-a0e0-237fe1f4c657',
    'vocabulary_machine_name' => 'slac_wiki_tags',
    'metatags' => array(),
  );
  return $terms;
}
