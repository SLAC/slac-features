<?php
/**
 * @file
 * slac_mini_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_mini_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function slac_mini_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: mini_slideshow_image_style.
  $styles['mini_slideshow_image_style'] = array(
    'label' => 'mini_slideshow_image_style',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 228,
          'height' => 160,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
