<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function slac_people_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['update_notifications']['#access'] = FALSE;
  $form['update_notifications']['update_status_module']['#default_value'] = array ();
}

/**
* Implements hook_paranoia_hide_modules().
*/
function slac_people_paranoia_hide_modules() {
  return array('update' => 'Core');
}

/**
 * Implementation of hook_demo_modules.
 * Returns an array with the list of modules with demo content.
 *
 * @return array of modules with demo content
 */
function slac_people_demo_modules() {
  return array(
    'slac_blog_demo',
  );
}
