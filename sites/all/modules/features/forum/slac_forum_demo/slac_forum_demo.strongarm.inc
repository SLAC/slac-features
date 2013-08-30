<?php
/**
 * @file
 * slac_forum_demo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_forum_demo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_forum';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_forum'] = $strongarm;

  return $export;
}
