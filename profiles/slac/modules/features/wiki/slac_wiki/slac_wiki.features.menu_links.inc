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

  // Exported menu link: menu-slac-wiki:node/add/slac-wiki-page
  $menu_links['menu-slac-wiki:node/add/slac-wiki-page'] = array(
    'menu_name' => 'menu-slac-wiki',
    'link_path' => 'node/add/slac-wiki-page',
    'router_path' => 'node/add/slac-wiki-page',
    'link_title' => 'Add new wiki page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-slac-wiki:wiki/a-z
  $menu_links['menu-slac-wiki:wiki/a-z'] = array(
    'menu_name' => 'menu-slac-wiki',
    'link_path' => 'wiki/a-z',
    'router_path' => 'wiki/a-z',
    'link_title' => 'Wiki pages A-Z',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-slac-wiki:wiki/search
  $menu_links['menu-slac-wiki:wiki/search'] = array(
    'menu_name' => 'menu-slac-wiki',
    'link_path' => 'wiki/search',
    'router_path' => 'wiki/search',
    'link_title' => 'Search wiki pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add new wiki page');
  t('Search wiki pages');
  t('Wiki pages A-Z');


  return $menu_links;
}
