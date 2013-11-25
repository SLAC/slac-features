<?php
/**
 * @file
 * slac_header_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_header_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-header-menu:http://science.energy.gov/
  $menu_links['menu-header-menu:http://science.energy.gov/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://science.energy.gov/',
    'router_path' => '',
    'link_title' => 'DOE Office of Science',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-header-menu:http://stanford.edu/
  $menu_links['menu-header-menu:http://stanford.edu/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://stanford.edu/',
    'router_path' => '',
    'link_title' => 'Stanford University',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-header-menu:https://www6.slac.stanford.edu/
  $menu_links['menu-header-menu:https://www6.slac.stanford.edu/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'https://www6.slac.stanford.edu/',
    'router_path' => '',
    'link_title' => 'SLAC Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('DOE Office of Science');
  t('SLAC Home');
  t('Stanford University');


  return $menu_links;
}
