<?php
/**
 * @file
 * slac_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_event_image_default_styles() {
  $styles = array();

  // Exported image style: event-calendar.
  $styles['event-calendar'] = array(
    'label' => 'event-calendar',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 92,
          'height' => 136,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: slac_event_thumbnail.
  $styles['slac_event_thumbnail'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slac_event_thumbnail',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slac_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
