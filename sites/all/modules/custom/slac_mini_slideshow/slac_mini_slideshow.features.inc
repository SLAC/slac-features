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
    'name' => 'mini_slideshow_image_style',
    'label' => 'mini_slideshow_image_style',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 228,
          'height' => 160,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'mini_slideshow_image_style',
  );

  return $styles;
}
