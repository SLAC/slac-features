<?php
/**
 * @file
 * slac_features_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_features_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_adminimal-menu:admin/config/administration/adminimal_menu.
  $menu_links['management_adminimal-menu:admin/config/administration/adminimal_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/adminimal_menu',
    'router_path' => 'admin/config/administration/adminimal_menu',
    'link_title' => 'Adminimal menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust adminimal menu settings.',
      ),
      'identifier' => 'management_adminimal-menu:admin/config/administration/adminimal_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adminimal menu');

  return $menu_links;
}
