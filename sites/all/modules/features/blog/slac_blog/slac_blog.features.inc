<?php
/**
 * @file
 * slac_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_blog_image_default_styles() {
  $styles = array();

  // Exported image style: blog_thumbnail.
  $styles['blog_thumbnail'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'blog_thumbnail',
  );

  // Exported image style: profile-image-blog-icon.
  $styles['profile-image-blog-icon'] = array(
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 30,
          'height' => 30,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'profile-image-blog-icon',
  );

  // Exported image style: slac_blog_image.
  $styles['slac_blog_image'] = array(
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 215,
          'height' => 127,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 410,
          'height' => 242,
        ),
        'weight' => -9,
      ),
    ),
    'label' => 'slac_blog_image',
  );

  // Exported image style: slac_blog_image_details.
  $styles['slac_blog_image_details'] = array(
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 760,
          'height' => 449,
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
          'width' => 760,
          'height' => 330,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'slac_blog_image_details',
  );

  return $styles;
}
