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
  'title' => ' What equipment and facilities are available in the recreation center?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '39288af8-b560-4c51-ad72-63e900f0c0b6',
  'type' => 'slac_faq',
  'language' => 'und',
  'created' => 1386839932,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '026fbb0b-31e0-4923-ae92-6c7683362251',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_faq_answer' => array(
    'und' => array(
      0 => array(
        'value' => 'The recreation center features:
6 basketball hoops on 1 basketball court, with the option of indoor volleyball and badminton
1 fitness room
6 treadmills
4 cross trainers
2 recumbent stationary bicycles
2 standard stationary bicycles
1 rowing machine
Free-weight area with 4 racks of dumbbells, 3 benches and a chin-up bar
Fixed-weight area with a 5-stack multi-jungle cable/pulley apparatus
10 variable-weight, muscle-specific machines: dip chin, shoulder press, leg press, leg curl, row/rear deltoid, pectoral fly/rear deltoid, pull down, leg extension, calf extension and chest press
Stretching area with stability balls and Bosu© training devices
Locker rooms and showers with daily-use lockers for rent (bring your own lock)
Lounge area and kitchenette',
        'format' => NULL,
        'safe_value' => 'The recreation center features:
6 basketball hoops on 1 basketball court, with the option of indoor volleyball and badminton
1 fitness room
6 treadmills
4 cross trainers
2 recumbent stationary bicycles
2 standard stationary bicycles
1 rowing machine
Free-weight area with 4 racks of dumbbells, 3 benches and a chin-up bar
Fixed-weight area with a 5-stack multi-jungle cable/pulley apparatus
10 variable-weight, muscle-specific machines: dip chin, shoulder press, leg press, leg curl, row/rear deltoid, pectoral fly/rear deltoid, pull down, leg extension, calf extension and chest press
Stretching area with stability balls and Bosu© training devices
Locker rooms and showers with daily-use lockers for rent (bring your own lock)
Lounge area and kitchenette',
      ),
    ),
  ),
  'field_slac_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 74,
        'uuid' => 'b9236867-2fed-4032-8c59-5a6076d8d2fa',
      ),
    ),
  ),
  'field_slac_faq_status' => array(
    'und' => array(
      0 => array(
        'value' => 'open',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-12-12 11:18:52 +0200',
  'author_uuid' => 'bbdf14d3-1287-4d08-8a22-f5390fff5113',
);
  $nodes[] = array(
  'title' => 'Where is the recreation center located?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6149be2e-a483-46c2-b5ff-f79e0e9551d4',
  'type' => 'slac_faq',
  'language' => 'und',
  'created' => 1386839527,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4d374e1f-257e-4848-8304-443a54f56400',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_faq_answer' => array(
    'und' => array(
      0 => array(
        'value' => ' Building 55 is on the eastern side of the SLAC National Accelerator Laboratory site, on Pep Ring Road north of Building 901. See map here.',
        'format' => NULL,
        'safe_value' => ' Building 55 is on the eastern side of the SLAC National Accelerator Laboratory site, on Pep Ring Road north of Building 901. See map here.',
      ),
    ),
  ),
  'field_slac_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 74,
        'uuid' => 'b9236867-2fed-4032-8c59-5a6076d8d2fa',
      ),
    ),
  ),
  'field_slac_faq_status' => array(
    'und' => array(
      0 => array(
        'value' => 'open',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-12-12 11:12:07 +0200',
  'author_uuid' => 'bbdf14d3-1287-4d08-8a22-f5390fff5113',
);
  $nodes[] = array(
  'title' => 'What about Stanford faculty, staff and students?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '97ecc8ce-2d10-44b7-858e-6981658368ea',
  'type' => 'slac_faq',
  'language' => 'und',
  'created' => 1386839747,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8b457a75-4d92-4c25-8a05-5a925cb6742e',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_faq_answer' => array(
    'und' => array(
      0 => array(
        'value' => 'Stanford Health Improvement Program (HIP) classes will continue to be held in Building 27 as well as the Arrillaga Recreation Center at SLAC beginning in the Fall quarter. People enrolled in HIP classes can participate after completing a liability waiver.',
        'format' => NULL,
        'safe_value' => 'Stanford Health Improvement Program (HIP) classes will continue to be held in Building 27 as well as the Arrillaga Recreation Center at SLAC beginning in the Fall quarter. People enrolled in HIP classes can participate after completing a liability waiver.',
      ),
    ),
  ),
  'field_slac_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 33,
        'uuid' => 'fbf57dca-3b7d-4dba-8987-96e4f276b91f',
      ),
    ),
  ),
  'field_slac_faq_status' => array(
    'und' => array(
      0 => array(
        'value' => 'open',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-12-12 11:15:47 +0200',
  'author_uuid' => 'bbdf14d3-1287-4d08-8a22-f5390fff5113',
);
  return $nodes;
}
