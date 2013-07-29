<?php
/**
 * @file
 * blog_test_content.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function blog_test_content_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'Mari Silbey',
  'pass' => 'e7W2pTJU42',
  'mail' => 'mari@email.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1375127513,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'America/Los_Angeles',
  'language' => '',
  'picture' => NULL,
  'init' => 'mari@email.com',
  'data' => FALSE,
  'uuid' => 'a27d079e-16d0-4444-b21b-0eaa1cb9ddd2',
  'roles' => array(
    2 => 'authenticated user',
  ),
  'field_first_name' => array(),
  'field_last_name' => array(),
  'date' => '2013-07-29 12:51:53 -0700',
);
  return $users;
}
