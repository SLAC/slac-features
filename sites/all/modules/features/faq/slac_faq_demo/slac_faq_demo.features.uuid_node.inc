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
  'title' => 'What about Stanford faculty, staff and students?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4b48b028-8744-4c49-b783-e294083abbae',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1393492985,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '08b67f1c-24c8-4f63-a21e-723240f771fc',
  'revision_uid' => 1,
  'question' => 'What about Stanford faculty, staff and students?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span class="field-content">Stanford Health Improvement Program (HIP) classes will continue to be held in Building 27 as well as the Arrillaga Recreation Center at SLAC beginning in the Fall quarter. People enrolled in HIP classes can participate after completing a liability waiver.</span></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p><span class="field-content">Stanford Health Improvement Program (HIP) classes will continue to be held in Building 27 as well as the Arrillaga Recreation Center at SLAC beginning in the Fall quarter. People enrolled in HIP classes can participate after completing a liability waiver.</span></p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 2,
        'uuid' => 'd3679f29-c528-4c4f-99ef-6aa7ca35a795',
      ),
      1 => array(
        'tid' => 3,
        'uuid' => 'db22e661-78c9-4acd-80df-cb53faaf5717',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 'open',
      ),
    ),
  ),
  'field_question_details' => array(),
  'metatags' => array(),
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
  'date' => '2014-02-27 11:23:05 +0200',
  'author_uuid' => '63fae3c0-f6a4-41cd-ac1c-919f109dfb32',
);
  $nodes[] = array(
  'title' => 'Where is the recreation center located?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f12bb3d2-4286-4d13-8f1c-5a393fbbeecc',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1393493020,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '430aea18-cd13-4f01-9363-05f01c5d1fd1',
  'revision_uid' => 1,
  'question' => 'Where is the recreation center located?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span class="field-content">Building 55 is on the eastern side of the SLAC National Accelerator Laboratory site, on Pep Ring Road north of Building 901. See map here.</span></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p><span class="field-content">Building 55 is on the eastern side of the SLAC National Accelerator Laboratory site, on Pep Ring Road north of Building 901. See map here.</span></p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 3,
        'uuid' => 'db22e661-78c9-4acd-80df-cb53faaf5717',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 'open',
      ),
    ),
  ),
  'field_question_details' => array(),
  'metatags' => array(),
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
  'date' => '2014-02-27 11:23:40 +0200',
  'author_uuid' => '63fae3c0-f6a4-41cd-ac1c-919f109dfb32',
);
  $nodes[] = array(
  'title' => 'What equipment and facilities are available in the recreation center?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6def3bbc-5140-4ac3-ad64-ee96797b8cb0',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1393492927,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cd6b4b3e-5eef-4edb-b7b1-8ff9ec5b4197',
  'revision_uid' => 1,
  'question' => 'What equipment and facilities are available in the recreation center?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span class="field-content">The recreation center features: 6 basketball hoops on 1 basketball court, with the option of indoor volleyball and badminton 1 fitness room 6 treadmills 4 cross trainers 2 recumbent stationary bicycles 2 standard stationary bicycles 1 rowing machine Free-weight area with 4 racks of dumbbells, 3 benches and a chin-up bar Fixed-weight area with a 5-stack multi-jungle cable/pulley apparatus 10 variable-weight, muscle-specific machines: dip chin, shoulder press, leg press, leg curl, row/rear deltoid, pectoral fly/rear deltoid, pull down, leg extension, calf extension and chest press Stretching area with stability balls and Bosu© training devices Locker rooms and showers with daily-use lockers for rent (bring your own lock) Lounge area and kitchenette</span></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p><span class="field-content">The recreation center features: 6 basketball hoops on 1 basketball court, with the option of indoor volleyball and badminton 1 fitness room 6 treadmills 4 cross trainers 2 recumbent stationary bicycles 2 standard stationary bicycles 1 rowing machine Free-weight area with 4 racks of dumbbells, 3 benches and a chin-up bar Fixed-weight area with a 5-stack multi-jungle cable/pulley apparatus 10 variable-weight, muscle-specific machines: dip chin, shoulder press, leg press, leg curl, row/rear deltoid, pectoral fly/rear deltoid, pull down, leg extension, calf extension and chest press Stretching area with stability balls and Bosu© training devices Locker rooms and showers with daily-use lockers for rent (bring your own lock) Lounge area and kitchenette</span></p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 2,
        'uuid' => 'd3679f29-c528-4c4f-99ef-6aa7ca35a795',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 'open',
      ),
    ),
  ),
  'field_question_details' => array(),
  'metatags' => array(),
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
  'date' => '2014-02-27 11:22:07 +0200',
  'author_uuid' => '63fae3c0-f6a4-41cd-ac1c-919f109dfb32',
);
  $nodes[] = array(
  'title' => 'What is SLAC?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '313de771-7611-401f-8bc5-40aaa6f3b150',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1393519848,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dba957eb-9f00-4f2a-96d5-35fe01dd79b5',
  'revision_uid' => 1,
  'question' => 'What is SLAC?',
  'detailed_question' => '',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>SLAC\'s full name is the SLAC National Accelerator Laboratory. SLAC is a US Department of Energy lab operated by Stanford University. SLAC was established in 1962 as a particle physics research center, and is now a multipurpose laboratory for astrophysics, photon science, accelerator and particle physics research. The main accelerator is 2 miles long—the longest linear accelerator in the world—and has been operational since 1966.<br>
	SLAC is home to two x-ray light source facilities: The Stanford Synchrotron Radiation Lightsource (SSRL) and the Linac Coherent Light Source (LCLS). The SSRL is primarily used for materials science and biology experiments which take advantage of the high-intensity, monochromatic synchrotron radiation emitted by the stored electron beam to study the structure of molecules. In the early 1990s, an independent electron injector was built for this storage ring, allowing it to operate independently of the main linear accelerator.<br>
	The LCLS is a free electron laser facility that utilizes the last 1/3 of the original linear accelerator at SLAC. The laser uses hard X-rays with wavelengths similar in width to an atom. This enables researchers to take "snapshots" of objects on the nearly atomic level before the samples are destroyed by the intensity of the beam itself. dfhgsdgh</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>SLAC\'s full name is the SLAC National Accelerator Laboratory. SLAC is a US Department of Energy lab operated by Stanford University. SLAC was established in 1962 as a particle physics research center, and is now a multipurpose laboratory for astrophysics, photon science, accelerator and particle physics research. The main accelerator is 2 miles long—the longest linear accelerator in the world—and has been operational since 1966.<br /><br />
	SLAC is home to two x-ray light source facilities: The Stanford Synchrotron Radiation Lightsource (SSRL) and the Linac Coherent Light Source (LCLS). The SSRL is primarily used for materials science and biology experiments which take advantage of the high-intensity, monochromatic synchrotron radiation emitted by the stored electron beam to study the structure of molecules. In the early 1990s, an independent electron injector was built for this storage ring, allowing it to operate independently of the main linear accelerator.<br /><br />
	The LCLS is a free electron laser facility that utilizes the last 1/3 of the original linear accelerator at SLAC. The laser uses hard X-rays with wavelengths similar in width to an atom. This enables researchers to take "snapshots" of objects on the nearly atomic level before the samples are destroyed by the intensity of the beam itself. dfhgsdgh</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
        'uuid' => '92dd70f6-ac28-4707-a6b6-13b2a94d6028',
      ),
    ),
  ),
  'field_status' => array(
    'und' => array(
      0 => array(
        'value' => 'open',
      ),
    ),
  ),
  'field_question_details' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Some details about SLAC.</p>
',
        'format' => 'full_html',
        'safe_value' => ' <p>Some details about SLAC.</p>
 ',
      ),
    ),
  ),
  'metatags' => array(),
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
  'date' => '2014-02-27 18:50:48 +0200',
  'author_uuid' => '63fae3c0-f6a4-41cd-ac1c-919f109dfb32',
);
  return $nodes;
}
