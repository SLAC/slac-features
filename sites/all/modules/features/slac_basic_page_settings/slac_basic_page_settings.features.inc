<?php
/**
 * @file
 * slac_basic_page_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_basic_page_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}