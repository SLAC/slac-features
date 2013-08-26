<?php
/**
 * @file
 * slac_service_help.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function slac_service_help_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-service-catalog-support.
  $menus['menu-service-catalog-support'] = array(
    'menu_name' => 'menu-service-catalog-support',
    'title' => 'Service Catalog Support',
    'description' => 'Support links for service catalog',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Service Catalog Support');
  t('Support links for service catalog');


  return $menus;
}
