<?php
/**
 * @file
 * slac_news.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function slac_news_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-news-menu.
  $menus['menu-news-menu'] = array(
    'menu_name' => 'menu-news-menu',
    'title' => 'News menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News menu');


  return $menus;
}
