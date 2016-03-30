<?php
/**
 * @file
 * slac_people_listing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_people_listing_ctools_plugin_api($module = NULL, $api = NULL) {
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
function slac_people_listing_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_people_listing_image_default_styles() {
  $styles = array();

  // Exported image style: people-listing-photo.
  $styles['people-listing-photo'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'people-listing-photo',
  );

  // Exported image style: profile_home_user_image_eo.
  $styles['profile_home_user_image_eo'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 220,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'profile_home_user_image_eo',
  );

  return $styles;
}
