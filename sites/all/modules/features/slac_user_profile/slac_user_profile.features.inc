<?php
/**
 * @file
 * slac_user_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_user_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
