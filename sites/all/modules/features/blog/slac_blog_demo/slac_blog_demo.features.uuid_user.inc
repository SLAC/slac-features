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
  'name' => 'usertest1',
  'mail' => 'usertest1@slac.stanford.edu',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1383992204,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'Europe/Helsinki',
  'language' => '',
  'picture' => NULL,
  'init' => 'dsa@uyg.com',
  'data' => FALSE,
  'uuid' => '3b92ccfc-e7f7-4599-84d5-71e3e35c6981',
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
  'date' => '2013-11-09 12:16:44 +0200',
);
  $users[] = array(
  'name' => 'usertest2',
  'mail' => 'usertest2@slac.stanford.edu',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1383992338,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'Europe/Helsinki',
  'language' => '',
  'picture' => NULL,
  'init' => 'sdfsaf@csfgs.com',
  'data' => FALSE,
  'uuid' => '4edce278-5dc3-4e83-b62e-9f3b5556007e',
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
  'date' => '2013-11-09 12:18:58 +0200',
);
  $users[] = array(
  'name' => 'usertest3',
  'mail' => 'usertest3@slac.stanford.edu',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'full_html',
  'created' => 1383992370,
  'access' => 0,
  'login' => 0,
  'status' => 1,
  'timezone' => 'Europe/Helsinki',
  'language' => '',
  'picture' => NULL,
  'init' => 'sdgsdfg@dsfgs.com',
  'data' => FALSE,
  'uuid' => 'af70240a-9f15-49fa-a854-27c6f484ebc9',
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
  'date' => '2013-11-09 12:19:30 +0200',
);
  return $users;
}
