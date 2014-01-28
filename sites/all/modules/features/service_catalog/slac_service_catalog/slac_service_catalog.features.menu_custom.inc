<?php
/**
 * @file
 * slac_service_catalog.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function slac_service_catalog_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-services-admin.
  $menus['menu-services-admin'] = array(
    'menu_name' => 'menu-services-admin',
    'title' => 'Service Catalog Admin',
    'description' => 'For managing service catalogs',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('For managing service catalogs');
  t('Service Catalog Admin');


  return $menus;
}
