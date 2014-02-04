<?php
/**
 * @file
 * slac_workbench_settings_eo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_workbench_settings_eo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
