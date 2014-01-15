<?php
/**
 * @file
 * slac_faq.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_faq_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:faq
  $menu_links['main-menu:faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,

  );
  // Exported menu link: menu-faq:admin/content/faq
  $menu_links['menu-faq:admin/content/faq'] = array(
    'menu_name' => 'menu-faq',
    'link_path' => 'admin/content/faq',
    'router_path' => 'admin/content/faq',
    'link_title' => 'Manage FAQs',
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
  // Exported menu link: menu-faq:node/add/slac-faq
  $menu_links['menu-faq:node/add/slac-faq'] = array(
    'menu_name' => 'menu-faq',
    'link_path' => 'node/add/slac-faq',
    'router_path' => 'node/add/slac-faq',
    'link_title' => 'Ask a new question',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'destination' => 'faq/all',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ask a new question');
  t('FAQ');
  t('Manage FAQs');


  return $menu_links;
}
