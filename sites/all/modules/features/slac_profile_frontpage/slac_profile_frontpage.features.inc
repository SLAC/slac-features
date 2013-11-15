<?php
/**
 * @file
 * slac_profile_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_profile_frontpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
