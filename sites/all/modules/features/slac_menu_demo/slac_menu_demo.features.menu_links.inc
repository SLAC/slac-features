<?php
/**
 * @file
 * slac_menu_demo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_menu_demo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu:<front>
  $menu_links['menu-footer-menu:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sample link',
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
    'weight' => 0,
  );
  // Exported menu link: menu-footer-menu:blog
  $menu_links['menu-footer-menu:blog'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Sample link 2',
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
  // Exported menu link: menu-footer-menu:calendar
  $menu_links['menu-footer-menu:calendar'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Sample link 3',
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
  // Exported menu link: menu-header-menu:<front>
  $menu_links['menu-header-menu:<front>'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'DOE',
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
  // Exported menu link: menu-header-menu:blog
  $menu_links['menu-header-menu:blog'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'LCLS',
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
  // Exported menu link: menu-header-menu:calendar
  $menu_links['menu-header-menu:calendar'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Stanford',
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
  // Exported menu link: menu-header-menu:node
  $menu_links['menu-header-menu:node'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'AD',
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
  // Exported menu link: menu-header-menu:node/add/blog
  $menu_links['menu-header-menu:node/add/blog'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'PPA',
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
  // Exported menu link: menu-header-menu:node/add/newsletter
  $menu_links['menu-header-menu:node/add/newsletter'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/add/newsletter',
    'router_path' => 'node/add',
    'link_title' => 'Photon science',
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
  // Exported menu link: menu-header-menu:user
  $menu_links['menu-header-menu:user'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'SSRL',
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
  t('AD');
  t('DOE');
  t('LCLS');
  t('PPA');
  t('Photon science');
  t('SSRL');
  t('Sample link');
  t('Sample link 2');
  t('Sample link 3');
  t('Stanford');


  return $menu_links;
}
