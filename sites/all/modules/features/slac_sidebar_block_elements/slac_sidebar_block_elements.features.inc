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
    'label' => 'crop_slac_sidebar_block',
    'effects' => array(
      1 => array(
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
