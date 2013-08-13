<?php
/**
 * @file
 * slac_event_demo_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_event_demo_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Science and Engineering of Solid-state Thermoelectric Energy Conversion',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b65aabdd-5dd6-42bf-a403-8777df4a6c7e',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145356,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '138d43a6-3ee6-45fa-b295-420bfa469195',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 28,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/science-and-engineering-solid-state-thermoelectric-energy-conversion',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-04T05:00:00',
        'value2' => '2013-08-04T09:00:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=1;COUNT=5;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      1 => array(
        'value' => '2013-08-05T05:00:00',
        'value2' => '2013-08-05T09:00:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=1;COUNT=5;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      2 => array(
        'value' => '2013-08-06T05:00:00',
        'value2' => '2013-08-06T09:00:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=1;COUNT=5;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      3 => array(
        'value' => '2013-08-07T05:00:00',
        'value2' => '2013-08-07T09:00:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=1;COUNT=5;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      4 => array(
        'value' => '2013-08-08T05:00:00',
        'value2' => '2013-08-08T09:00:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=1;COUNT=5;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:35:56 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'FACET & Test Facilities User Meeting and SAREC Review',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '912ae9e3-56de-4882-ac88-e53747630237',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145305,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2164cab5-1e7f-4ff7-9470-b1ec9fa76b52',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 33,
        'uuid' => 'f0644a12-d7ad-4bce-b9fd-84ec84a94f7e',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/facet-test-facilities-user-meeting-and-sarec-review-0',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-15T09:30:00',
        'value2' => '2013-08-15T19:30:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=3;UNTIL=20130830T205959Z;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      1 => array(
        'value' => '2013-08-18T09:30:00',
        'value2' => '2013-08-18T19:30:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=3;UNTIL=20130830T205959Z;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      2 => array(
        'value' => '2013-08-21T09:30:00',
        'value2' => '2013-08-21T19:30:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=3;UNTIL=20130830T205959Z;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      3 => array(
        'value' => '2013-08-24T09:30:00',
        'value2' => '2013-08-24T19:30:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=3;UNTIL=20130830T205959Z;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      4 => array(
        'value' => '2013-08-27T09:30:00',
        'value2' => '2013-08-27T19:30:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=3;UNTIL=20130830T205959Z;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
      5 => array(
        'value' => '2013-08-30T09:30:00',
        'value2' => '2013-08-30T19:30:00',
        'rrule' => 'RRULE:FREQ=DAILY;INTERVAL=3;UNTIL=20130830T205959Z;WKST=SU',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:35:05 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Organic and Carbon Nanostructures for Energy Conversion and Energy Storage Devices',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '348f4d8d-7953-46ee-a5c0-9216a80403d6',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145269,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '36897199-c3a1-4c6e-bee9-0fc1f155f814',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 28,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/organic-and-carbon-nanostructures-energy-conversion-and-energy-storage-devices',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-20T06:45:00',
        'value2' => '2013-08-20T13:30:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:34:29 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'SLAC Colloquium: \'A Walk on the Dark Side\'',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6d8d3ddb-b700-4148-93ef-51cf5e96ad3e',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376144160,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5d5c713d-0b6d-4737-a7c6-56a3d530aeea',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 33,
        'uuid' => 'f0644a12-d7ad-4bce-b9fd-84ec84a94f7e',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/slac-colloquium-walk-dark-side',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-31T12:30:00',
        'value2' => '2013-08-31T18:45:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:16:00 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '8th International Conference on Inelastic X-ray Scattering',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8d24b5c6-007d-493b-8e5c-f0fe7e053eab',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145517,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '62b7dd3c-ab5d-4569-be28-62efda4c3eb1',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
        'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/8th-international-conference-inelastic-x-ray-scattering',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-04T15:30:00',
        'value2' => '2013-08-04T20:45:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:38:37 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'July 8, 9 SLAC Colloquia Postponed for One Week',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ec0a0adf-c4c2-4580-a2a7-c87ede80518c',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145423,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8a45b255-165b-4d61-9303-82b8218eba16',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Due to unforeseen circumstances, both the July 8 and July 9 SLAC Colloquia have been postponed until July 17 and July 18, locations to be determined.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Due to unforeseen circumstances, both the July 8 and July 9 SLAC Colloquia have been postponed until July 17 and July 18, locations to be determined.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
        'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
      ),
    ),
  ),
  'field_slac_event_link' => array(),
  'field_slac_event_organization' => array(
    'und' => array(
      0 => array(
        'value' => 'SLAC events',
        'format' => NULL,
        'safe_value' => 'SLAC events',
      ),
    ),
  ),
  'field_slac_event_scientific_area' => array(
    'und' => array(
      0 => array(
        'value' => 'Particle Physics',
        'format' => NULL,
        'safe_value' => 'Particle Physics',
      ),
    ),
  ),
  'field_slac_event_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 29,
        'uuid' => '9914b3dc-1371-45c4-970d-93a26ca5fba9',
      ),
    ),
  ),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-08T07:45:00',
        'value2' => '2013-08-08T19:45:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:37:03 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Electroweak Production: The Path to SUSY?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6e51af32-d68a-457c-9eb8-585da2bab30b',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145223,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a9f2976c-2174-4e45-99d1-f25d3244a4a1',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
        'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/electroweak-production-path-susy',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-22T21:45:00',
        'value2' => '2013-08-23T14:45:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:33:43 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Photon Science Seminar Today: Shedding Light into Rapidly Changing, Opaque Plasmas',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '0bab8674-ce8e-470a-b686-e0ef38e1e951',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145475,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'abbd250b-0d34-438e-90e7-9d4a5cd575df',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>At today\'s Photon Science Seminar, Marta Fajardo of IST in Portugal will discuss how matter behaves under conditions of extreme temperature, pressure, density and electromagnetic fields. IST (Instituto Superior Técnico) is a Technical University of Lisbon engineering school.</p>
<p>Her talk, "4D-HD for high-energy-density plasmas: shedding light into rapidly changing, opaque plasmas," begins at 3 p.m. in Building 901\'s Redtail Hawk conference room.</p>
<p>The talk will highlight how high-energy-density states of matter occur in astrophysical scenarios and also during every high-intensity laser-solid interaction, when a solid is heated to the plasma state. Although such states are easy to produce, the high densities last only briefly, and since visible radiation cannot penetrate them, traditional diagnostics leave an incomplete picture of these plasmas.</p>
<p>Fajardo will discuss how high-harmonic radiation from laser-gas interactions, with photon energies in the extreme ultraviolet spectrum, is capable of probing solid density matter. This source, she will explain, has many unique qualities:</p>
<ul>
<li>
		It holds the record for the shortest pulses ever produced, in the attosecond range.</li>
<li>
		It essentially behaves like a laser, with linear polarization, small divergence and full spatio-temporal coherence.</li>
<li>
		It has a "bonus" feature: a multicolored discrete spectrum.</li>
</ul>
<p>These characteristics allow for applications such as nanometer-scale coherent imaging. Different techniques, such as diffraction imaging and 3-D holography, have been demonstrated by Fajardo\'s research groups and other researchers. Recent improvements have allowed single-shot imaging and opened the way for attosecond time resolution.</p>
<p>Fajardo will describe the use of high-harmonic generation (HHG) for opacity measurements and the development of an extreme ultraviolet (XUV) plasma refractive index diagnostic equipped with a wave-front sensor, as well as recent advances in XUV holography and plans to measure warm dense plasmas produced at SLAC\'s Linac Coherent Light Source (LCLS) with these techniques.</p>
<p>Tapping into the potential of HHG sources as a probe, one goal, according to Fajardo, is to shine some light into matter under extreme conditions through ultrafast imaging of dense plasmas.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>At today\'s Photon Science Seminar, Marta Fajardo of IST in Portugal will discuss how matter behaves under conditions of extreme temperature, pressure, density and electromagnetic fields. IST (Instituto Superior Técnico) is a Technical University of Lisbon engineering school.</p>
<p>Her talk, "4D-HD for high-energy-density plasmas: shedding light into rapidly changing, opaque plasmas," begins at 3 p.m. in Building 901\'s Redtail Hawk conference room.</p>
<p>The talk will highlight how high-energy-density states of matter occur in astrophysical scenarios and also during every high-intensity laser-solid interaction, when a solid is heated to the plasma state. Although such states are easy to produce, the high densities last only briefly, and since visible radiation cannot penetrate them, traditional diagnostics leave an incomplete picture of these plasmas.</p>
<p>Fajardo will discuss how high-harmonic radiation from laser-gas interactions, with photon energies in the extreme ultraviolet spectrum, is capable of probing solid density matter. This source, she will explain, has many unique qualities:</p>
<ul><li>
		It holds the record for the shortest pulses ever produced, in the attosecond range.</li>
<li>
		It essentially behaves like a laser, with linear polarization, small divergence and full spatio-temporal coherence.</li>
<li>
		It has a "bonus" feature: a multicolored discrete spectrum.</li>
</ul><p>These characteristics allow for applications such as nanometer-scale coherent imaging. Different techniques, such as diffraction imaging and 3-D holography, have been demonstrated by Fajardo\'s research groups and other researchers. Recent improvements have allowed single-shot imaging and opened the way for attosecond time resolution.</p>
<p>Fajardo will describe the use of high-harmonic generation (HHG) for opacity measurements and the development of an extreme ultraviolet (XUV) plasma refractive index diagnostic equipped with a wave-front sensor, as well as recent advances in XUV holography and plans to measure warm dense plasmas produced at SLAC\'s Linac Coherent Light Source (LCLS) with these techniques.</p>
<p>Tapping into the potential of HHG sources as a probe, one goal, according to Fajardo, is to shine some light into matter under extreme conditions through ultrafast imaging of dense plasmas.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 28,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_link' => array(),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 27,
        'uuid' => '887e35db-2734-405e-a001-daad4a60daa7',
      ),
    ),
  ),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-25T06:45:00',
        'value2' => '2013-08-25T15:45:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:37:55 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'SLAC Colloquium: \'LZ and the future of WIMPs\'',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '06317be6-3ad7-4142-9231-5c0528552c58',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145149,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c9e5b13e-e0e9-4a14-acd9-404f43836024',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 28,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/slac-colloquium-lz-and-future-wimps',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-20T10:45:00',
        'value2' => '2013-08-20T13:30:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:32:29 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'SLAC Colloquium: \'Do WIMPs Rule? The LUX Experiment and the Search for Cosmic Dark Matter\'',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c306355c-9fa9-4e6a-bbe3-6e2b0c53a3b5',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145184,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e218684b-adf0-4b39-a29d-52e6d07583b9',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 28,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/slac-colloquium-do-wimps-rule-lux-experiment-and-search-cosmic-dark-matter',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-02T05:45:00',
        'value2' => '2013-08-02T13:45:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:33:04 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Photon Science Seminar: Commissioning the New LCLS \'XTCAV\'',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '963af5cb-a506-43d8-be6c-500296486a35',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145104,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e8b52dfa-625e-454b-ab59-e7fe0d68a866',
  'revision_uid' => 1,
  'body' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
        'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
      ),
    ),
  ),
  'field_slac_event_link' => array(
    'und' => array(
      0 => array(
        'url' => 'https://news.slac.stanford.edu/announcement/photon-science-seminar-commissioning-new-lcls-xtcav',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_event_organization' => array(),
  'field_slac_event_scientific_area' => array(),
  'field_slac_event_tags' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-08-13T10:45:00',
        'value2' => '2013-08-13T13:45:00',
        'rrule' => NULL,
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-10 17:31:44 +0300',
  'author_uuid' => '306f8481-4295-413f-a765-f4d5acee30d3',
);
  return $nodes;
}
