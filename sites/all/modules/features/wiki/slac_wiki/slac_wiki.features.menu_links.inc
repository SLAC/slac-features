<?php
/**
 * @file
 * slac_wiki.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-slac-wiki_wiki-pages-a-z:wiki
  $menu_links['menu-slac-wiki_wiki-pages-a-z:wiki'] = array(
    'menu_name' => 'menu-slac-wiki',
    'link_path' => 'wiki',
    'router_path' => 'wiki',
    'link_title' => 'Wiki pages A-Z',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-slac-wiki_wiki-pages-a-z:wiki',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Wiki pages A-Z');


  return $menu_links;
}
