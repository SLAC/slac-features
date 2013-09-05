<?php
/**
 * @file
 * pp_lightbox.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pp_lightbox_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pp_lightbox_style_name';
  $strongarm->value = 'lightbox_image_popup';
  $export['pp_lightbox_style_name'] = $strongarm;

  return $export;
}
