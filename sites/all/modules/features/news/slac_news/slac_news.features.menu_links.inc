<?php
/**
 * @file
 * slac_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-news-archives:news/2013
  $menu_links['menu-news-archives:news/2013'] = array(
    'menu_name' => 'menu-news-archives',
    'link_path' => 'news/2013',
    'router_path' => 'news/%',
    'link_title' => '2013 Archives',
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
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('2013 Archives');


  return $menu_links;
}
