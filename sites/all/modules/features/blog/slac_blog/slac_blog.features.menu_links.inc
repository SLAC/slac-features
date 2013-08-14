<?php
/**
 * @file
 * blog_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:blog
  $menu_links['navigation:blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:blog/%
  $menu_links['navigation:blog/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog/%',
    'router_path' => 'blog/%',
    'link_title' => 'My blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'blog',
  );
  // Exported menu link: navigation:node/add/blog
  $menu_links['navigation:node/add/blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog entry',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for multi-user blogs. Every user gets a personal blog.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog entry');
  t('Blogs');
  t('My blog');


  return $menu_links;
}
