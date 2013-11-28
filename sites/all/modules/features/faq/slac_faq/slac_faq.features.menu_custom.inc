<?php
/**
 * @file
 * slac_faq.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function slac_faq_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-faq.
  $menus['menu-faq'] = array(
    'menu_name' => 'menu-faq',
    'title' => 'FAQ',
    'description' => 'List of items appearing in the FAQ section.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');
  t('List of items appearing in the FAQ section.');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
