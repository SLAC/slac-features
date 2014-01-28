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

  // Exported menu link: main-menu_faq:faq
  $menu_links['main-menu_faq:faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQ',
    'options' => array(
      'identifier' => 'main-menu_faq:faq',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');


  return $menu_links;
}
