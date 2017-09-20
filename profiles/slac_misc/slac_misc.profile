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
function slac_misc_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['update_notifications']['#access'] = FALSE;
  $form['update_notifications']['update_status_module']['#default_value'] = array ();
}

/**
 * Implements hook_paranoia_hide_modules().
 */
function slac_misc_paranoia_hide_modules() {
  return array('update' => 'Core');
}

/**
 * Implementation of hook_demo_modules.
 * Returns an array with the list of modules with demo content.
 *
 * @return array of modules with demo content
 */
function slac_misc_demo_modules() {
  return array(
    'slac_blog_demo',
    'slac_demo_accounts',
    'slac_demo_main_menu',
  );
}

/**
 * Alter slac_configuration_form form.
 */
function slac_misc_form_slac_configuration_form_alter(&$form, &$form_state) {
  $form['site_url_address'] = array(
    '#type' => 'textfield',
    '#title' => t('Address'),
    '#default_value' => variable_get('site_url_address', ''),
    '#required' => TRUE,
  );
  $form['site_footer_address'] = array(
    '#type' => 'textfield',
    '#title' => t('Secondary Footer Address'),
    '#default_value' => variable_get('site_footer_address', ''),
    '#required' => TRUE,
  );
}

