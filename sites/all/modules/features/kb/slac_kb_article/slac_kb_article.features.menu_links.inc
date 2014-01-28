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

  // Exported menu link: main-menu_knowledge-base:kb
  $menu_links['main-menu_knowledge-base:kb'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kb',
    'router_path' => 'kb',
    'link_title' => 'Knowledge base',
    'options' => array(
      'identifier' => 'main-menu_knowledge-base:kb',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Knowledge base');


  return $menu_links;
}
