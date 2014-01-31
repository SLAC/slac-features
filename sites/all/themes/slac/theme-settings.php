<?php

/**
 * Commented code below is to allow secondary logo. At the moment it is not
 * clear whether it will be needed or not.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
//function slac_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL)  {
//  // Work-around for a core bug affecting admin themes. See issue #943212.
//  if (isset($form_id)) {
//    return;
//  }
//  $key = substr($form['var']['#value'], strlen('theme_'), strlen($form['var']['#value']) - strlen('theme_') - strlen('_settings'));
//
//  $form['site_logo'] = array(
//    '#type' => 'fieldset',
//    '#title' => t('Sites (department) logo'),
//  );
//  $form['site_logo']['site_logo_path'] = array(
//    '#type' => 'textfield',
//    '#title' => t('Path to site logo'),
//    '#default_value' => theme_get_setting('site_logo_path', $key),
//  );
//
//  $form['site_logo']['site_logo_upload'] = array(
//    '#type' => 'file',
//    '#title' => t('Upload site logo'),
//    '#default_value' => theme_get_setting('site_logo_upload', $key),
//  );
//
//  $form['#validate'][] = 'slac_form_system_theme_settings_validate';
//  $form['#submit'][] = 'slac_form_system_theme_settings_submit';
//}
//
///**
// * Custom validate handler.
// */
//function slac_form_system_theme_settings_validate($form, &$form_state) {
//  // Handle file uploads.
//  $validators = array(
//    'file_validate_is_image' => array(),
//    'file_validate_image_resolution' => array('52x280'),
//  );
//
//  // Check for a new uploaded logo.
//  $file = file_save_upload('site_logo_upload', $validators);
//  if (isset($file)) {
//    // File upload was attempted.
//    if ($file) {
//      // Put the temporary file in form_values so we can save it on submit.
//      $form_state['values']['site_logo_upload'] = $file;
//    }
//    else {
//      // File upload failed.
//      form_set_error('site_logo_upload', t('The logo could not be uploaded.'));
//    }
//  }
//}
//
///**
// * Submit handler for theme settings.
// */
//function slac_form_system_theme_settings_submit($form, &$form_state) {
//  // Exclude unnecessary elements before saving.
//  form_state_values_clean($form_state);
//
//  $values = &$form_state['values'];
//
//  if ($file = $values['site_logo_upload']) {
//    unset($values['site_logo_upload']);
//    $filename = file_unmanaged_copy($file->uri);
//    $values['site_logo_path'] = $filename;
//  }
//}
