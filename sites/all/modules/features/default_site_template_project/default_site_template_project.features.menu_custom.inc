<?php
/**
 * @file
 * default_site_template_project.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function default_site_template_project_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Exported menu: menu-footer-menu-project.
  $menus['menu-footer-menu-project'] = array(
    'menu_name' => 'menu-footer-menu-project',
    'title' => 'Footer Menu Project',
    'description' => '',
  );
  // Exported menu: menu-header-menu.
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu Project');
  t('Footer menu');
  t('Header menu');


  return $menus;
}
