<?php
/**
 * @file
 * default_site_template_project.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function default_site_template_project_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu-1_about:node/17
  $menu_links['menu-footer-menu-1_about:node/17'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_about:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-1_blog:node/40
  $menu_links['menu-footer-menu-1_blog:node/40'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Blog',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_blog:node/40',
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
  // Exported menu link: menu-footer-menu-1_news:node/57
  $menu_links['menu-footer-menu-1_news:node/57'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'node/57',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-1_news:node/57',
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
