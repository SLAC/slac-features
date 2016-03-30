<?php
/**
 * @file
 * pp_demo_beans.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pp_demo_beans_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function pp_demo_beans_image_default_styles() {
  $styles = array();

  // Exported image style: block_brochures_thumbnail.
  $styles['block_brochures_thumbnail'] = array(
    'label' => 'block_brochures_thumbnail',
    'effects' => array(
      6 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 127,
          'height' => 127,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => -10,
      ),
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 127,
          'height' => 127,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: block_content_block_thumbnail.
  $styles['block_content_block_thumbnail'] = array(
    'label' => 'block_content_block_thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 143,
          'height' => 132,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => -10,
      ),
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 143,
          'height' => 132,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: block_content_large_image.
  $styles['block_content_large_image'] = array(
    'label' => 'block_content_large_image',
    'effects' => array(
      4 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 650,
          'height' => 200,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => -10,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 650,
          'height' => 200,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
