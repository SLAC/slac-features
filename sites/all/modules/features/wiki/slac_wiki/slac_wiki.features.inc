<?php
/**
 * @file
 * slac_wiki.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_wiki_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_wiki_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function slac_wiki_node_info() {
  $items = array(
    'wiki_page' => array(
      'name' => t('Wiki Page'),
      'base' => 'node_content',
      'description' => t('A editable page that can be changed by any authenticated user. It also retains a list of editing history.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
