<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Site logo'),
  'description' => t('SLAC site logo.'),
  'category' => t('SLAC'),
  'render callback' => 'slac_configuration_site_logo_render',
  'defaults' => array(),
);

/**
 * Render callback.
 */
function slac_configuration_site_logo_render($subtype, $conf, $contexts) {
  $block = new stdClass;
  $block->title = '';
  $block->content = '';

  $site_logo_path = theme_get_setting('site_logo_path');

  if (empty($site_logo_path)) {
    return $block;
  }

  if (strpos($site_logo_path, 'public://') === 0) {
    $filepath = $site_logo_path;
  }
  else {
    $filepath = base_path() . drupal_get_path('theme', 'slac') . '/' . $site_logo_path;
  }

  $block->content = theme('image', array('path' => $filepath));

  return $block;
}