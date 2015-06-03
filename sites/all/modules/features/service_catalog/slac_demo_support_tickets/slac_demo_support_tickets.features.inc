<?php
/**
 * @file
 * slac_demo_support_tickets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_demo_support_tickets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
