<?php
/**
 * @file
 * slac_people_slideshow.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function slac_people_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow_image_description_bottom.
  $styles['slideshow_image_description_bottom'] = array(
    'name' => 'slideshow_image_description_bottom',
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
          'width' => 894,
          'height' => 268,
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
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 894,
          'height' => 268,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'slideshow_image_description_bottom',
  );

  return $styles;
}
