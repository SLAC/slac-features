<?php
/**
 * @file
 * Enables modules and site configuration for a minimal site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function slac_ext_org_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['update_notifications']['#access'] = FALSE;
  $form['update_notifications']['update_status_module']['#default_value'] = array ();
}

/**
* Implements hook_paranoia_hide_modules().
*/
function slac_ext_org_paranoia_hide_modules() {
  return array('update' => 'Core');
}

/**
 * Implementation of hook_demo_modules.
 * Returns an array with the list of modules with demo content.
 *
 * @return array of modules with demo content
 */
function slac_ext_org_demo_modules() {
  return array(
    'slac_blog_demo',
    'slac_faq_demo',
    'slac_news_demo',
    'slac_event_demo',
    'slac_service_catalog_demo',
    'slac_kb_demo',
    'slac_demo_accounts',
    'slac_demo_main_menu',
    'slac_demo_webform',
    'slac_demo_support_tickets',
//    'slac_newsletter_demo',
  );
}

/**
 * Uncomment to allow secondary logo.
 */
/**
  * Can't use module_exists() as we need to include file from theme.
  */
//if ($path_to_slac_theme = drupal_get_path('theme', 'slac')) {
//  $file = DRUPAL_ROOT . '/' . drupal_get_path('theme', 'slac') . '/theme-settings.php';
//  require_once $file;
//}

/**
 * Alter slac_configuration_form form.
 */
function slac_ext_org_form_slac_configuration_form_alter(&$form, &$form_state) {
  $form['site_url_address'] = array(
    '#type' => 'textfield',
    '#title' => t('Footer address'),
    '#default_value' => variable_get('site_url_address', ''),
    '#required' => TRUE,
  );
  $form['site_footer_address'] = array(
    '#type' => 'textfield',
    '#title' => t('Sub-footer address'),
    '#default_value' => variable_get('site_footer_address', ''),
    '#required' => TRUE,
  );
//  if (function_exists('slac_form_system_theme_settings_alter')) {
//    $form['var'] = array(
//      '#value' => 'theme_slac_settings',
//    );
//    slac_form_system_theme_settings_alter($form, $form_state);
//    $form['#submit'][] = 'slac_configuration_form_theme_submit';
//  }
}


/**
 * Uncomment to allow secondary logo.
 *
 * Submit handler to save theme variable.
 */
//function slac_configuration_form_theme_submit($form, &$form_state) {
//  $theme_settings_key = $form['var']['#value'];
//  $theme_settings = variable_get($theme_settings_key);
//  $theme_settings['site_logo_path'] = $form_state['values']['site_logo_path'];
//  variable_set($theme_settings_key, $theme_settings);
//}
