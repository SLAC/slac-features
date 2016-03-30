<?php
/**
 * @file
 * slac_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_news_image_default_styles() {
  $styles = array();

  // Exported image style: crop_news_landscape.
  $styles['crop_news_landscape'] = array(
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 294,
          'height' => 239,
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
          'width' => 294,
          'height' => 239,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'crop_news_landscape',
  );

  // Exported image style: slac_news_image_details.
  $styles['slac_news_image_details'] = array(
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 760,
          'height' => 330,
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
    'label' => 'slac_news_image_details',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slac_news_node_info() {
  $items = array(
    'slac_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Provide the ability to create news articles, RSS feeds and other features.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
