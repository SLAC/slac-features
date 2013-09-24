<?php

/**
 * @file
 * User page callbacks for the openid module.
 */

/**
 * Menu callback; Process a Webauth authentication.
 */
function webauth_authentication_page() {
  $result = webauth_complete();
  switch ($result['status']) {
    case 'success':
      return webauth_authentication($result);
    case 'failed':
      drupal_set_message(t('Webauth login failed.'), 'error');
      break;
    case 'cancel':
      drupal_set_message(t('Webauth login cancelled.'));
      break;
  }
  drupal_goto();
}
