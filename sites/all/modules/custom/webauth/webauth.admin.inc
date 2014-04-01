<?php

/**
 * @file
 * Functions that are only called on the admin pages.
 */

/**
 * Settings form to set up webauth
 */
function webauth_admin_settings_form($form) {
  
  //We need to set the WebAuthLoginURL - although it is possible
  //this should be set at the Apache level with the other module settings
  //see http://webauth.stanford.edu/manual/mod/mod_webauth.htm
  $form['webauth_link_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Webauth link wording'),
      '#multiple' => FALSE,
      '#description' => t('This link is shown on the login form.'),
      '#default_value' => variable_get('webauth_link_text', 'Click here to login with WEBAUTH'),
  );
  $form['webauth_allow_drupal_login'] = array(
      '#type' => 'radios',
      '#title' => t('Allow Drupal login'),
      '#multiple' => TRUE,
      '#options' => array('0' => 'No', '1' => 'Yes'),
      '#description' => t('Set to no if only WEBAUTH can be used'),
      '#default_value' => variable_get('webauth_allow_drupal_login', 1),
    );
  $form['webauth_allow_user_creation'] = array(
    '#type' => 'radios',
    '#title' => t('Allow users to be created in the site'),
    '#multiple' => TRUE,
    '#options' => array('0' => 'No', '1' => 'Yes'),
    '#description' => t('Set to no if users can only be created by logging in with webauth (and NOT at /admin/people/create).'),
    '#default_value' => variable_get('webauth_allow_user_creation', 0),
  );
  $form['webauth_restrict_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Restricted Access Message'),
    '#cols' => 80,
    '#rows' => 5,
    '#default_value' => variable_get('webauth_restrict_message', 'This content has been restricted by the author or by the site administrator.'),
    '#description' => t('Message to be displayed to user when access to content is restricted.'),
  );
  
  return system_settings_form($form);
}

/**
 * Implements hook_validate().
 */
function webauth_admin_settings_validate($form, &$form_state) {
  $directory = file_directory_path() .'/'. $form_state['values']['webauth_link_text'];
  if (!trim($form_state['values']['webauth_link_text'])) {
    form_set_error('webauth_link_text', t('The text for the login link cannot be empty.'));
  }  
}
