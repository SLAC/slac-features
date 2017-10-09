<?php
/**
 * @file
 * f1_fixes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f1_fixes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function f1_fixes_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['full_html'])) {
    $data['full_html']['settings']['acf_allowed_content'] = ''; /* WAS: '' */
    $data['full_html']['settings']['acf_mode'] = 0; /* WAS: '' */
    $data['full_html']['settings']['add_to_summaries'] = 1; /* WAS: '' */
    $data['full_html']['settings']['advanced__active_tab'] = 'edit-basic'; /* WAS: 'edit-css' */
    $data['full_html']['settings']['buttons']['default']['HorizontalRule'] = 1; /* WAS: '' */
    $data['full_html']['settings']['buttons']['default']['Maximize'] = 1; /* WAS: '' */
    $data['full_html']['settings']['buttons']['default']['Redo'] = 1; /* WAS: '' */
    $data['full_html']['settings']['buttons']['default']['Source'] = 1; /* WAS: '' */
    $data['full_html']['settings']['buttons']['default']['Subscript'] = 1; /* WAS: '' */
    $data['full_html']['settings']['buttons']['linkit'] = array(
      'linkit' => 1,
    ); /* WAS: '' */
    unset($data['full_html']['settings']['buttons']['default']['BidiLtr']);
    unset($data['full_html']['settings']['buttons']['default']['BidiRtl']);
    unset($data['full_html']['settings']['buttons']['default']['SelectAll']);
    unset($data['full_html']['settings']['buttons']['default']['Smiley']);
    unset($data['full_html']['settings']['buttons']['default']['Styles']);
  }
}
