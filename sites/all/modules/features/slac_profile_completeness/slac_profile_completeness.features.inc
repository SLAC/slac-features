<?php
/**
 * @file
 * slac_profile_completeness.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_profile_completeness_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
