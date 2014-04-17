<?php
/**
 * @file
 * slac_google_analytics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_google_analytics_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
