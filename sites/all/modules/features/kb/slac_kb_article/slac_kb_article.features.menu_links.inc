<?php
/**
 * @file
 * slac_kb_article.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_kb_article_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:kb
  $menu_links['main-menu:kb'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kb',
    'router_path' => 'kb',
    'link_title' => 'Knowledge Base',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'weight' => 12,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Knowledge Base');


  return $menu_links;
}
