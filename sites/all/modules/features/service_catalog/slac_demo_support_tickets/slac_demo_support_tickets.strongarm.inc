<?php
/**
 * @file
 * slac_demo_support_tickets.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_demo_support_tickets_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_support_ticket';
  $strongarm->value = 1;
  $export['comment_default_mode_support_ticket'] = $strongarm;

  return $export;
}
