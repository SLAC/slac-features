<?php
/**
 * @file
 * slac_demo_accounts.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function slac_demo_accounts_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'usertest4',
  'mail' => 'usertest4@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1389861613,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'Europe/Helsinki',
  'language' => '',
  'picture' => NULL,
  'init' => 'usertest4@example.com',
  'data' => FALSE,
  'uuid' => '8b7ae525-e06d-435f-8a8e-b37e21fe4403',
  'roles' => array(
    2 => 'authenticated user',
  ),
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
  'date' => '2014-01-16 10:40:13 +0200',
);
  $users[] = array(
  'name' => 'usertest5',
  'mail' => 'usertest5@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1389861637,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'Europe/Helsinki',
  'language' => '',
  'picture' => NULL,
  'init' => 'usertest5@example.com',
  'data' => FALSE,
  'uuid' => 'adeece4d-b3d3-4619-96b5-dd20b87ebc49',
  'roles' => array(
    2 => 'authenticated user',
  ),
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
  'date' => '2014-01-16 10:40:37 +0200',
);
  $users[] = array(
  'name' => 'usertest6',
  'mail' => 'usertest6@example.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1389861687,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'Europe/Helsinki',
  'language' => '',
  'picture' => NULL,
  'init' => 'usertest6@example.com',
  'data' => FALSE,
  'uuid' => 'e063835a-d277-44a2-94a1-86ea45e9012b',
  'roles' => array(
    2 => 'authenticated user',
  ),
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
  'date' => '2014-01-16 10:41:27 +0200',
);
  return $users;
}
