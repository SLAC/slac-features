<?php
/**
 * @file
 * slac_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slac_news_taxonomy_default_vocabularies() {
  return array(
    'slac_news_tags' => array(
      'name' => 'Tags (SLAC News)',
      'machine_name' => 'slac_news_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
