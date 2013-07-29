<?php
/**
 * @file
 * slac_kb_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_kb_article_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
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
function slac_kb_article_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function slac_kb_article_node_info() {
  $items = array(
    'kb_article' => array(
      'name' => t('KB Article'),
      'base' => 'node_content',
      'description' => t('Knowledge base article content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
