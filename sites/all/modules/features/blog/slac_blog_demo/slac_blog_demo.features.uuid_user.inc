<?php
/**
 * @file
 * slac_blog_demo.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function slac_blog_demo_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'test_user',
  'mail' => 'test_user@email.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1379581584,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'America/Los_Angeles',
  'language' => '',
  'picture' => NULL,
  'init' => 'test_user@email.com',
  'data' => FALSE,
  'uuid' => '3611a5b8-d5b1-4e51-bbc9-f6035bf13fdc',
  'roles' => array(
    2 => 'authenticated user',
  ),
  'field_first_name' => array(),
  'field_last_name' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  ),
  'date' => '2013-09-19 02:06:24 -0700',
);
  return $users;
}
