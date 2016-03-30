<?php
/**
 * @file
 * slac_basic_page_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_basic_page_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function slac_basic_page_settings_image_default_styles() {
  $styles = array();

  // Exported image style: basic_page_large_image.
  $styles['basic_page_large_image'] = array(
    'label' => 'basic_page_large_image',
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 755,
          'height' => 244,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 755,
          'height' => 244,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
