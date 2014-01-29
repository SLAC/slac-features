<?php
/**
 * @file
 * slac_news_demo.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function slac_news_demo_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'James Smith',
  'mail' => 'newsauthor@slac.stanford.edu',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1391017176,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'America/Denver',
  'language' => '',
  'picture' => 0,
  'init' => 'newsauthor@slac.stanford.edu',
  'data' => FALSE,
  'uuid' => '7588442f-2b14-42b8-b4f2-cb90accaad0d',
  'roles' => array(
    2 => 'authenticated user',
  ),
  'metatags' => array(),
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
  'date' => '2014-01-29 10:39:36 -0700',
);
  return $users;
}
