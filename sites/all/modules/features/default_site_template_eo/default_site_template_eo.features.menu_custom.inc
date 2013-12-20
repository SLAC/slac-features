<?php
/**
 * @file
 * default_site_template_eo.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function default_site_template_eo_menu_default_menu_custom() {
  $menus = array();

  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Exported menu: menu-header-menu.
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header menu',
    'description' => '',
  );

  // Exported menu: menu-footer-menu-1.
  $menus['menu-footer-menu-1'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'title' => 'Footer Menu 1',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Header menu');
  t('Footer Menu 1');


  return $menus;
}
