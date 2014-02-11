<?php
/**
 * @file
 * slac_feedback_webform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_feedback_webform_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
