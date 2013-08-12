<?php
/**
 * @file
 * slac_wiki.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function slac_wiki_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-slac-wiki.
  $menus['menu-slac-wiki'] = array(
    'menu_name' => 'menu-slac-wiki',
    'title' => 'Wiki',
    'description' => 'Links to various wiki pages',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links to various wiki pages');
  t('Wiki');


  return $menus;
}
