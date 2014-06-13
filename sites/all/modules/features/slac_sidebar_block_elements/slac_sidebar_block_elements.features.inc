<?php
/**
 * @file
 * slac_sidebar_block_elements.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function slac_sidebar_block_elements_image_default_styles() {
  $styles = array();

  // Exported image style: crop_slac_sidebar_block.
  $styles['crop_slac_sidebar_block'] = array(
    'name' => 'crop_slac_sidebar_block',
    'label' => 'crop_slac_sidebar_block',
    'effects' => array(
      1 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 165,
          'height' => 125,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 165,
          'height' => 125,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
