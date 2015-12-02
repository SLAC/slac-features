<?php
/**
 * @file
 * landing_page_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function landing_page_features_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing page'),
      'base' => 'node_content',
      'description' => t('The content type to create landing pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
