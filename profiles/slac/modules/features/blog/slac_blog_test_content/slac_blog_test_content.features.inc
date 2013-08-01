<?php
/**
 * @file
 * blog_test_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_blog_test_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
