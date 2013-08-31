<?php
/**
 * @file
 * pp_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pp_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pp_crop_wysiwyg_settings';
  $strongarm->value = array(
    'crop_landscape' => 'crop_landscape',
    'crop_portrait' => 'crop_portrait',
    'crop_square' => 'crop_square',
  );
  $export['pp_crop_wysiwyg_settings'] = $strongarm;

  return $export;
}
