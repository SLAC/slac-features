<?php
/**
 * @file
 * slac_configurations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_configurations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
