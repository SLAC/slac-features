<?php
/**
 * @file
 * blog_test_content.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slac_blog_demo_taxonomy_default_vocabularies() {
  return array(
    'slac_blog_tags' => array(
      'name' => 'Blog Tags',
      'machine_name' => 'slac_blog_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'slac_blog_category' => array(
      'name' => 'Blog Category',
      'machine_name' => 'slac_blog_category',
      'description' => 'Blog Category',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
