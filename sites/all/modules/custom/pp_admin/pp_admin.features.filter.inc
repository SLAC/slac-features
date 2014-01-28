<?php
/**
 * @file
 * pp_admin.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pp_admin_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -20,
    'filters' => array(
      'media_filter' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -38,
        'status' => 1,
        'settings' => array(),
      ),
      'bean_wysiwyg_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
