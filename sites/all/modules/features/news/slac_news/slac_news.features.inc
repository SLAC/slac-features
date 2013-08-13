<?php
/**
 * @file
 * slac_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_news_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function slac_news_node_info() {
  $items = array(
    'slac_news' => array(
      'name' => t('SLAC News'),
      'base' => 'node_content',
      'description' => t('Provide the ability to create news articles, RSS feeds and other features.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
