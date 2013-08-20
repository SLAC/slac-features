<?php
/**
 * @file
 * slac_event_demo_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_event_demo_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
