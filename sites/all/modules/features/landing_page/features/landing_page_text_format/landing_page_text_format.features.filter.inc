<?php
/**
 * @file
 * landing_page_text_format.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function landing_page_text_format_filter_default_formats() {
  $formats = array();

  // Exported format: landing_page.
  $formats['landing_page'] = array(
    'format' => 'landing_page',
    'name' => 'Landing Page',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
