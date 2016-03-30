<?php
/**
 * @file
 * pp_lightbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pp_lightbox_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function pp_lightbox_image_default_styles() {
  $styles = array();

  // Exported image style: lightbox_image_popup.
  $styles['lightbox_image_popup'] = array(
    'label' => 'Lightbox image popup',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
