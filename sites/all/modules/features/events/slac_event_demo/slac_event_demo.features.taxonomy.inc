<?php
/**
 * @file
 * slac_event_demo.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slac_event_demo_taxonomy_default_vocabularies() {
  return array(
    'category_colors' => array(
      'name' => 'Category colors',
      'machine_name' => 'category_colors',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'event_categories' => array(
      'name' => 'Event Categories',
      'machine_name' => 'event_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'events_tags' => array(
      'name' => 'Events Tags',
      'machine_name' => 'events_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
