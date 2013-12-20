<?php
/**
 * @file
 * default_site_template_eo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function default_site_template_eo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu-1:https://www6.slac.stanford.edu/news
  $menu_links['menu-footer-menu-1:https://www6.slac.stanford.edu/news'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'https://www6.slac.stanford.edu/news',
    'router_path' => '',
    'link_title' => 'SLAC News',
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
  // Exported menu link: menu-footer-menu-1:https://www6.slac.stanford.edu/research
  $menu_links['menu-footer-menu-1:https://www6.slac.stanford.edu/research'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'https://www6.slac.stanford.edu/research',
    'router_path' => '',
    'link_title' => 'Research',
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
  // Exported menu link: menu-footer-menu-1:https://www6.slac.stanford.edu/visiting-slac
  $menu_links['menu-footer-menu-1:https://www6.slac.stanford.edu/visiting-slac'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'https://www6.slac.stanford.edu/visiting-slac',
    'router_path' => '',
    'link_title' => 'Visiting SLAC',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Research');
  t('SLAC News');
  t('Visiting SLAC');


  return $menu_links;
}
