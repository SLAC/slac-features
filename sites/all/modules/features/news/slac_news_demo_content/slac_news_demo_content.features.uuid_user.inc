<?php
/**
 * @file
 * slac_news_demo_content.features.uuid_user.inc
 */

/**
 * Implements hook_uuid_features_default_users().
 */
function slac_news_demo_content_uuid_features_default_users() {
  $users = array();

  $users[] = array(
  'name' => 'proppl',
  'pass' => '62BT8MHU68',
  'mail' => 'test@test.com',
  'theme' => '',
  'signature' => '',
  'signature_format' => 'filtered_html',
  'created' => 1375967719,
  'access' => 1375968895,
  'login' => 1375968994,
  'status' => 1,
  'timezone' => 'Europe/Helsinki',
  'language' => '',
  'picture' => NULL,
  'init' => 'test@test.com',
  'data' => FALSE,
  'uuid' => '581f322e-5144-4010-be93-b47f1e6c7bdb',
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
  'date' => '2013-08-08 16:15:19 +0300',
);
  return $users;
}
