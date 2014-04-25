<?php
/**
 * @file
 * default_site_template_io.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function default_site_template_io_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
