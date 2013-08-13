<?php
/**
 * @file
 * slac_events_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_events_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:calendar
  $menu_links['main-menu:calendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Calendar',
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
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar');


  return $menu_links;
}
