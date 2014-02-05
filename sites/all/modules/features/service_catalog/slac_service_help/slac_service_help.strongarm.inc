<?php
/**
 * @file
 * slac_service_help.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_service_help_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_support_ticket_pattern';
  $strongarm->value = 'services/support/[node:title]';
  $export['pathauto_node_support_ticket_pattern'] = $strongarm;

  return $export;
}
