<?php
/**
 * @file
 * slac_search_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_search_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    'file_entity' => 0,
    'support' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  return $export;
}
