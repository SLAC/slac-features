<?php
/**
 * @file
 * pp_admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pp_admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function pp_admin_image_default_styles() {
  $styles = array();

  // Exported image style: crop_landscape.
  $styles['crop_landscape'] = array(
    'label' => 'Landscape',
    'effects' => array(
      2 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
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
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: crop_portrait.
  $styles['crop_portrait'] = array(
    'label' => 'Portrait',
    'effects' => array(
      4 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 200,
          'height' => 300,
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
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: crop_square.
  $styles['crop_square'] = array(
    'label' => 'Square',
    'effects' => array(
      6 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
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
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
