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

  // Exported menu link: menu-footer-menu-1_about:node/11
  $menu_links['menu-footer-menu-1_about:node/11'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_about:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-1_blog:node/28
  $menu_links['menu-footer-menu-1_blog:node/28'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Blog',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_blog:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-1_faq:faq
  $menu_links['menu-footer-menu-1_faq:faq'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'Faq',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_faq:faq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-1_news:node/45
  $menu_links['menu-footer-menu-1_news:node/45'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_news:node/45',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Blog');
  t('Faq');
  t('News');


  return $menu_links;
}
