<?php
/**
 * @file
 * slac_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function slac_profile_default_profile2_type() {
  $items = array();
  $items['bio'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "bio",
    "label" : "Bio",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['contact'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "contact",
    "label" : "Contact",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['social_media'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "social_media",
    "label" : "Social Media",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
