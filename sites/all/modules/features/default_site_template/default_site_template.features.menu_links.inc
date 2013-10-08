<?php
/**
 * @file
 * default_site_template.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function default_site_template_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu-1:http://slac-www.wearepropeople.md/about
  $menu_links['menu-footer-menu-1:http://slac-www.wearepropeople.md/about'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'http://slac-www.wearepropeople.md/about',
    'router_path' => '',
    'link_title' => 'Sample link 2',
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
  // Exported menu link: menu-footer-menu-1:http://slac-www.wearepropeople.md/research
  $menu_links['menu-footer-menu-1:http://slac-www.wearepropeople.md/research'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'http://slac-www.wearepropeople.md/research',
    'router_path' => '',
    'link_title' => 'Sample link 1',
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
  // Exported menu link: menu-footer-menu-1:http://slac-www.wearepropeople.md/visiting-slac
  $menu_links['menu-footer-menu-1:http://slac-www.wearepropeople.md/visiting-slac'] = array(
    'menu_name' => 'menu-footer-menu-1',
    'link_path' => 'http://slac-www.wearepropeople.md/visiting-slac',
    'router_path' => '',
    'link_title' => 'Sample link 3',
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
  // Exported menu link: menu-footer-menu:http://slac-www.wearepropeople.md/content/safety-slac
  $menu_links['menu-footer-menu:http://slac-www.wearepropeople.md/content/safety-slac'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://slac-www.wearepropeople.md/content/safety-slac',
    'router_path' => '',
    'link_title' => 'Safety',
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
    'weight' => -47,
  );
  // Exported menu link: menu-footer-menu:http://slac-www.wearepropeople.md/general/careers.aspx
  $menu_links['menu-footer-menu:http://slac-www.wearepropeople.md/general/careers.aspx'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://slac-www.wearepropeople.md/general/careers.aspx',
    'router_path' => '',
    'link_title' => 'Careers',
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
  // Exported menu link: menu-footer-menu:http://slac-www.wearepropeople.md/general/feedback.aspx
  $menu_links['menu-footer-menu:http://slac-www.wearepropeople.md/general/feedback.aspx'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://slac-www.wearepropeople.md/general/feedback.aspx',
    'router_path' => '',
    'link_title' => 'Site Feedback',
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
    'weight' => -48,
  );
  // Exported menu link: menu-footer-menu:http://slac-www.wearepropeople.md/general/privacy.aspx
  $menu_links['menu-footer-menu:http://slac-www.wearepropeople.md/general/privacy.aspx'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://slac-www.wearepropeople.md/general/privacy.aspx',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
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
    'weight' => -46,
  );
  // Exported menu link: menu-footer-menu:http://slac-www.wearepropeople.md/general/site-index.aspx
  $menu_links['menu-footer-menu:http://slac-www.wearepropeople.md/general/site-index.aspx'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://slac-www.wearepropeople.md/general/site-index.aspx',
    'router_path' => '',
    'link_title' => 'Site Index',
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
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Careers');
  t('Privacy Policy');
  t('Safety');
  t('Sample link 1');
  t('Sample link 2');
  t('Sample link 3');
  t('Site Feedback');
  t('Site Index');


  return $menu_links;
}