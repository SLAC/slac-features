<?php
/**
 * @file
 * slac_service_catalog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_service_catalog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-services-admin:admin/structure/taxonomy/slac_sc_category
  $menu_links['menu-services-admin:admin/structure/taxonomy/slac_sc_category'] = array(
    'menu_name' => 'menu-services-admin',
    'link_path' => 'admin/structure/taxonomy/slac_sc_category',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage service category',
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
  // Exported menu link: menu-services-admin:admin/structure/taxonomy/slac_sc_self_help
  $menu_links['menu-services-admin:admin/structure/taxonomy/slac_sc_self_help'] = array(
    'menu_name' => 'menu-services-admin',
    'link_path' => 'admin/structure/taxonomy/slac_sc_self_help',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage self help topics',
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
  // Exported menu link: menu-services-admin:node/add/slac-sc-catalog-item
  $menu_links['menu-services-admin:node/add/slac-sc-catalog-item'] = array(
    'menu_name' => 'menu-services-admin',
    'link_path' => 'node/add/slac-sc-catalog-item',
    'router_path' => 'node/add/slac-sc-catalog-item',
    'link_title' => 'Add a new service',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'destination' => 'services',
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
  t('Add a new service');
  t('Manage self help topics');
  t('Manage service category');


  return $menu_links;
}
