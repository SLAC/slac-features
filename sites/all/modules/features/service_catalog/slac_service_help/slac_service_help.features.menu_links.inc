<?php
/**
 * @file
 * slac_service_help.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_service_help_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-services-support:node/add/support-ticket
  $menu_links['menu-services-support:node/add/support-ticket'] = array(
    'menu_name' => 'menu-services-support',
    'link_path' => 'node/add/support-ticket',
    'router_path' => 'node/add/support-ticket',
    'link_title' => 'Submit support request',
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
  // Exported menu link: menu-services-support:support
  $menu_links['menu-services-support:support'] = array(
    'menu_name' => 'menu-services-support',
    'link_path' => 'support',
    'router_path' => 'support',
    'link_title' => 'View support queue',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Submit support request');
  t('View support queue');


  return $menu_links;
}
