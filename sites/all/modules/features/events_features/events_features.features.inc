<?php
/**
 * @file
 * events_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function events_features_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function events_features_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
