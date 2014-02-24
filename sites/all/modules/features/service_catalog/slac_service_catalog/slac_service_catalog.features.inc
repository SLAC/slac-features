<?php
/**
 * @file
 * slac_service_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_service_catalog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_service_catalog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_service_catalog_image_default_styles() {
  $styles = array();

  // Exported image style: slac_sc_service_catalog.
  $styles['slac_sc_service_catalog'] = array(
    'name' => 'slac_sc_service_catalog',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 64,
          'height' => 64,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slac_sc_service_catalog',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slac_service_catalog_node_info() {
  $items = array(
    'slac_sc_catalog_item' => array(
      'name' => t('Catalog item'),
      'base' => 'node_content',
      'description' => t('A service catalog item.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
