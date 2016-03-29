<?php
/**
 * @file
 * slac_solr_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_solr_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
