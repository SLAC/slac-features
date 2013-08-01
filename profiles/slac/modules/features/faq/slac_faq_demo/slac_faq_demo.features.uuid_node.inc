<?php
/**
 * @file
 * slac_faq_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_faq_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'John Doe',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a2dd8fde-2ca7-4039-961e-d2ce7321f8e2',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375259179,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '261e5f21-f025-4fc0-9a89-05a3784d51c7',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'What equipment and facilities are available in the recreation center?',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'What equipment and facilities are available in the recreation center?',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:26:19 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Mike',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '65925842-8e15-4a79-bbd5-4a3ecbf12d8f',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375258777,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3b3a0989-4b3b-4010-8080-4dcb598d5565',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'What is SLAC?',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'What is SLAC?',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(
    'und' => array(
      0 => array(
        'value' => 'The SLAC National Accelerator Laboratory, originally named Stanford Linear Accelerator Center, is a United States Department of Energy National Laboratory operated by Stanford University under the programmatic direction of the U.S. Department of Energy Office of Science.',
        'format' => NULL,
        'safe_value' => 'The SLAC National Accelerator Laboratory, originally named Stanford Linear Accelerator Center, is a United States Department of Energy National Laboratory operated by Stanford University under the programmatic direction of the U.S. Department of Energy Office of Science.',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:19:37 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Mary',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e17eb61a-775a-4a69-9e8e-a263fef2003d',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375259123,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '68d13a01-3e80-4c9e-921e-3b8ad40b8f23',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Where is the recreation center located?',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'Where is the recreation center located?',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:25:23 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Michael',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3d518cc4-11b9-47ac-a623-5be1a12beb7c',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375259157,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '721ea272-2359-4d0d-81b0-dd7bd035bf83',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Who can use the recreation center?',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'Who can use the recreation center?',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:25:57 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Jane Roe',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9016a875-be22-476d-a69a-3b975377390d',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375257799,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9c7e2f09-fd59-45ea-8d7f-f4434a540ebe',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'What will I see on the tour? ',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'What will I see on the tour? ',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(
    'und' => array(
      0 => array(
        'value' => 'Though there may be some variations in tour itineraries, every tour begins with a brief overview of SLAC\'s history and science and features a stop at the lab\'s Klystron Gallery, one of the world\'s longest buildings. This stop gives visitors a clear view down the lab\'s 2-mile linear accelerator. Tours conclude at the SLAC Visitor Center, where participants will have the opportunity to learn more about the lab and to ask questions about any SLAC facilities not visited during the tour. ',
        'format' => NULL,
        'safe_value' => 'Though there may be some variations in tour itineraries, every tour begins with a brief overview of SLAC&#039;s history and science and features a stop at the lab&#039;s Klystron Gallery, one of the world&#039;s longest buildings. This stop gives visitors a clear view down the lab&#039;s 2-mile linear accelerator. Tours conclude at the SLAC Visitor Center, where participants will have the opportunity to learn more about the lab and to ask questions about any SLAC facilities not visited during the tour. ',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:03:19 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'John Doe',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f57ac8f1-ee0d-495b-be2e-b7cd0ef4948b',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375257736,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b6040b3c-e24c-4782-9963-8b7f7872fc5a',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Who can take a tour of SLAC? ',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'Who can take a tour of SLAC? ',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:02:16 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'John Doe',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '630f3a0f-955c-4fe9-86a5-347af60c1f8d',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375257751,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ccbe1c0c-32b0-4de0-97d2-e00a876ede99',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'When are tours available? ',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'When are tours available? ',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:02:31 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'John Doe',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0e6cbc2a-63fd-4c16-ab53-2951b1422e62',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375257827,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f4174791-f32c-4a85-9312-67932ad205d0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'What should I bring with me? ',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'What should I bring with me? ',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(
    'und' => array(
      0 => array(
        'value' => 'Your camera (photography is encouraged!) and comfortable walking shoes, although most transportation around the site will be via bus. Restrooms and drinking water are available at the SLAC Visitor Center. ',
        'format' => NULL,
        'safe_value' => 'Your camera (photography is encouraged!) and comfortable walking shoes, although most transportation around the site will be via bus. Restrooms and drinking water are available at the SLAC Visitor Center. ',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:03:47 +0300',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Jane Roe',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5b674acb-721d-4507-bb71-7d26c95428ca',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1375257814,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f4c9b0cf-42e9-4801-bd90-75d06e50665a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Who will my tour guide be? ',
        'summary' => '',
        'format' => NULL,
        'safe_value' => 'Who will my tour guide be? ',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_answer' => array(
    'und' => array(
      0 => array(
        'value' => 'All of our guides are knowledgeable about SLAC and its science. Many are SLAC graduate students and scientists who are happy to give visitors an insider\'s perspective on the cutting-edge science under way at the lab. ',
        'format' => NULL,
        'safe_value' => 'All of our guides are knowledgeable about SLAC and its science. Many are SLAC graduate students and scientists who are happy to give visitors an insider&#039;s perspective on the cutting-edge science under way at the lab. ',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-31 11:03:34 +0300',
);
  return $nodes;
}
