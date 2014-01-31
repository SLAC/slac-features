<?php
/**
 * @file
 * slac_profile_elements.features.inc
 */

/**
 * Implements hook_views_api().
 */
function slac_profile_elements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_profile_elements_image_default_styles() {
  $styles = array();

  // Exported image style: profile_home_blog_image.
  $styles['profile_home_blog_image'] = array(
    'name' => 'profile_home_blog_image',
    'effects' => array(
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
          'width' => 250,
          'height' => 150,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'profile_home_blog_image',
  );

  // Exported image style: profile_home_user_image.
  $styles['profile_home_user_image'] = array(
    'name' => 'profile_home_user_image',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 220,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'profile_home_user_image',
  );

  return $styles;
}
