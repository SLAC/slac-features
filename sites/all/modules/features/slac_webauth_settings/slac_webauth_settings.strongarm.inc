<?php
/**
 * @file
 * slac_webauth_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_webauth_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webauth_allow_drupal_login';
  $strongarm->value = '0';
  $export['webauth_allow_drupal_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webauth_link_text';
  $strongarm->value = 'Click here to login with WEBAUTH';
  $export['webauth_link_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webauth_restrict_message';
  $strongarm->value = 'This content has been restricted by the author or by the site administrator.';
  $export['webauth_restrict_message'] = $strongarm;

  return $export;
}
