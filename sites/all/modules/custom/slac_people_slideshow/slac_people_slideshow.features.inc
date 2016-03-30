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
    'effects' => array(
      1 => array(
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
