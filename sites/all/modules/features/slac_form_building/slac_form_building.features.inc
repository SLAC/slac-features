<?php
/**
 * @file
 * slac_form_building.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_form_building_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

