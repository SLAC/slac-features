<?php
/**
 * @file
 * slac_style_guide.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function slac_style_guide_filter_default_formats() {
  $formats = array();

  // Exported format: Unfiltered HTML.
  $formats['unfiltered_html'] = array(
    'format' => 'unfiltered_html',
    'name' => 'Unfiltered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
