<?php
/**
 * @file
 * slac_demo_main_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_demo_main_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
