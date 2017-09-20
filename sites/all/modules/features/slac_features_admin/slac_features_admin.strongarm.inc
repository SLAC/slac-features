<?php
/**
 * @file
 * slac_features_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_features_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_adminimal_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'site_url_address' => 0,
    'site_footer_address' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'style_checkboxes' => 1,
    'display_icons_config' => 1,
    'rounded_buttons' => 1,
    'sticky_actions' => 0,
    'avoid_custom_font' => 0,
    'adminimal_ckeditor' => 1,
    'use_custom_media_queries' => 0,
    'media_query_mobile' => 'only screen and (max-width: 480px)',
    'media_query_tablet' => 'only screen and (min-width : 481px) and (max-width : 1024px)',
    'custom_css' => 0,
    'adminimal_theme_skin' => 'material',
  );
  $export['theme_adminimal_settings'] = $strongarm;

  return $export;
}
