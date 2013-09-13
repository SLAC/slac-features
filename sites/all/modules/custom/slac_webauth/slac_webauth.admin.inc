<?php
/**
 * @file
 * Admin menus for webauth module
 *
 */

/**
 * Base webauth settings form
 */
function slac_webauth_admin_settings($form, &$form_state) {

  $result = db_query('SELECT rid, name FROM {role} WHERE rid > :rid', array(':rid' => 2));
  $roles = array();
  while ($role = $result->fetchObject()) {
    $roles[$role->rid] = $role->name;
  }

  $form['slac_webauth_allow_local'] = array(
    '#type' => 'radios',
    '#title' => t('SLAC WebAuth options'),
    '#default_value' => variable_get('slac_webauth_allow_local', 1),
    '#options' => array(
      0 => t('Hide Local Drupal Login Block'),
      1 => t('Show Local Drupal Login Block'),
    ),
    '#description' => t('Hide the Local Drupal Login Block if it&rsquo;s not needed by local accounts to prevent users from entering their Unix/Windows ID and password there by mistake. This does not affect the <em>user/login</em> form which can still be used to log in as <em>user 1</em> when needed.'),
  );
  $form['slac_webauth_link_text'] = array(
    '#type' => 'textfield',
    '#title' => t('SLAC WebAuth Link Text'),
    '#size' => 80,
    '#maxlength' => 255,
    '#default_value' => variable_get('slac_webauth_link_text', 'Log in with WebAuth'),
    '#description' => t('The text for the WebAuth link. It&rsquo;s what users will click on to log in using WebAuth. (E.g.: "Log in with WebAuth")'),
  );
  $form['slac_webauth_destination'] = array(
    '#type' => 'textfield',
    '#title' => t('Post-Login Destination'),
    '#size' => 80,
    '#maxlength' => 255,
    '#default_value' => variable_get('slac_webauth_destination', ''),
    '#description' => t('Drupal node to which the browser redirects after successful weblogin. (E.g.: \'node/add/page\' will automatically redirect user to a new content page.) If unsure, just leave blank to keep Drupal\'s default behavior.'),
  );

  $form['lsac_webauth_restrict_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Restricted Access Message'),
    '#cols' => 80,
    '#rows' => 5,
    '#default_value' => variable_get('slac_webauth_restrict_message', 'This content has been restricted by the author or by the site administrator.'),
    '#description' => t('Message to be displayed to user when access to content is restricted.'),
  );

  return system_settings_form($form);
}