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
  $strongarm->name = 'diff_enable_revisions_page_node_support_ticket';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_support_ticket'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_support_ticket';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_support_ticket'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_support_ticket';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_support_ticket'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_support_ticket_pattern';
  $strongarm->value = 'services/support/[node:title]';
  $export['pathauto_node_support_ticket_pattern'] = $strongarm;

  return $export;
}
