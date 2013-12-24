<?php
/**
 * @file
 * pp_demo_beans.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pp_demo_beans_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bean_wysiwyg_types_enabled';
  $strongarm->value = array(
    'block_with_brochures' => 'block_with_brochures',
    'content_block' => 'content_block',
    'content_block_with_links' => 'content_block_with_links',
    'content_block_large_image' => 'content_block_large_image',
  );
  $export['bean_wysiwyg_types_enabled'] = $strongarm;

  return $export;
}
