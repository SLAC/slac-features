<?php
/**
 * @file
 * slac_people_listing.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_people_listing_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:people/all
  $menu_links['main-menu:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/%',
    'link_title' => 'People',
    'options' => array(
      'cami' => array(
        'pages' => 'profile/*',
      ),
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 13,
    'customized' => 1,
  );

  // Included for use with string extractors like potx.
  t('People');


  return $menu_links;
}
