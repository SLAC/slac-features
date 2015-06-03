<?php
/**
 * @file
 * slac_event_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_event_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Science and Engineering of Solid-state Thermoelectric Energy Conversion',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c00be81d-b32d-464a-b9d5-345a7a113c8f',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145356,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '138d43a6-3ee6-45fa-b295-420bfa469195',
  'revision_uid' => 0,
  'body' => array(),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-08-20T05:00:00',
        'value2' => '2014-08-20T09:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 99,
    'source' => 'node/30',
    'alias' => 'events/science-and-engineering-solid-state-thermoelectric-energy-conversion',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 216,
      'vid' => 248,
      'nid' => 30,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Science and Engineering of Solid-state Thermoelectric Energy Conversion',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 216,
      'vid' => 248,
      'nid' => 30,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Science and Engineering of Solid-state Thermoelectric Energy Conversion',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 216,
      'vid' => 248,
      'nid' => 30,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Science and Engineering of Solid-state Thermoelectric Energy Conversion',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:35:56 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'FACET & Test Facilities User Meeting and SAREC Review',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'cc76ad96-e162-49b3-8c63-413e3a7ecb47',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145305,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2164cab5-1e7f-4ff7-9470-b1ec9fa76b52',
  'revision_uid' => 0,
  'body' => array(),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 56,
        'uuid' => 'f0644a12-d7ad-4bce-b9fd-84ec84a94f7e',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-04-28T10:30:00',
        'value2' => '2014-04-28T20:30:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 100,
    'source' => 'node/31',
    'alias' => 'events/facet-test-facilities-user-meeting-and-sarec-review',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 217,
      'vid' => 249,
      'nid' => 31,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'FACET & Test Facilities User Meeting and SAREC Review',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 217,
      'vid' => 249,
      'nid' => 31,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'FACET & Test Facilities User Meeting and SAREC Review',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 217,
      'vid' => 249,
      'nid' => 31,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'FACET & Test Facilities User Meeting and SAREC Review',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:35:05 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'Organic and Carbon Nanostructures for Energy Conversion and Energy Storage Devices',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '0fb53a4c-301c-41cc-88fe-b59260586a22',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145269,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '36897199-c3a1-4c6e-bee9-0fc1f155f814',
  'revision_uid' => 0,
  'body' => array(),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-08-20T06:45:00',
        'value2' => '2014-08-20T13:30:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 101,
    'source' => 'node/32',
    'alias' => 'events/organic-and-carbon-nanostructures-for-energy-conversion-and-energy-storage-devices',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 218,
      'vid' => 250,
      'nid' => 32,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Organic and Carbon Nanostructures for Energy Conversion and Energy Storage Devices',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 218,
      'vid' => 250,
      'nid' => 32,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Organic and Carbon Nanostructures for Energy Conversion and Energy Storage Devices',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 218,
      'vid' => 250,
      'nid' => 32,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Organic and Carbon Nanostructures for Energy Conversion and Energy Storage Devices',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:34:29 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'SLAC Colloquium: \'A Walk on the Dark Side\'',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '4c181aa8-f6bc-44f6-994a-ff6710c803c9',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376144160,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5d5c713d-0b6d-4737-a7c6-56a3d530aeea',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, At accusam aliquyam diam diam dolore dolores duo eirmod eos erat, et nonumy sed tempor et et invidunt justo labore Stet clita ea et gubergren, kasd magna no rebum. Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer possim assum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.</p>

<p>Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. Stet clita kasd gubergren, no sea takimata sanctus est. Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.</p>

<p>At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis. At vero eos et accusam et justo duo dolores et ea rebum.. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.</p>

<p>Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. Stet clita kasd gubergren, no sea takimata sanctus est. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, At accusam aliquyam diam diam dolore dolores duo eirmod eos erat, et nonumy sed tempor et et invidunt justo labore Stet clita ea et gubergren, kasd magna no rebum. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, At accusam aliquyam diam diam dolore dolores duo eirmod eos erat, et nonumy sed tempor et et invidunt justo labore Stet clita ea et gubergren, kasd magna no rebum. Nam liber tempor cum soluta nobis eleifend option congue nihil imperdiet doming id quod mazim placerat facer possim assum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.</p>
<p>Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. Stet clita kasd gubergren, no sea takimata sanctus est. Excepteur sint obcaecat cupiditat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat.</p>
<p>At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis. At vero eos et accusam et justo duo dolores et ea rebum.. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetuer adipiscing elit, sed diam nonummy nibh euismod tincidunt ut laoreet dolore magna aliquam erat volutpat. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.</p>
<p>Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. Stet clita kasd gubergren, no sea takimata sanctus est. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, At accusam aliquyam diam diam dolore dolores duo eirmod eos erat, et nonumy sed tempor et et invidunt justo labore Stet clita ea et gubergren, kasd magna no rebum. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(
    'und' => array(
      0 => array(
        'lid' => 19,
        'name' => 'Kavli Auditorium, SLAC',
        'street' => '',
        'additional' => '',
        'city' => '',
        'province' => '',
        'postal_code' => '',
        'country' => 'us',
        'latitude' => '0.000000',
        'longitude' => '0.000000',
        'source' => 0,
        'is_primary' => 0,
        'province_name' => '',
        'country_name' => 'United States',
      ),
    ),
  ),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 56,
        'uuid' => 'f0644a12-d7ad-4bce-b9fd-84ec84a94f7e',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-06-15T17:30:00',
        'value2' => '2014-06-15T19:45:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_slac_event_link' => array(),
  'field_slac_event_organization' => array(),
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 102,
    'source' => 'node/33',
    'alias' => 'events/slac-colloquium-walk-the-dark-side',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 219,
      'vid' => 251,
      'nid' => 33,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'A Walk on the Dark Side\'',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 219,
      'vid' => 251,
      'nid' => 33,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'A Walk on the Dark Side\'',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 219,
      'vid' => 251,
      'nid' => 33,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'A Walk on the Dark Side\'',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:16:00 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => '8th International Conference on Inelastic X-ray Scattering',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '9be1f2a0-ff20-4f20-aff0-40d791c75bde',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145517,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '62b7dd3c-ab5d-4569-be28-62efda4c3eb1',
  'revision_uid' => 0,
  'body' => array(),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(
    'und' => array(
      0 => array(
        'lid' => 20,
        'name' => 'Kavli Auditorium',
        'street' => '',
        'additional' => '',
        'city' => '',
        'province' => '',
        'postal_code' => '',
        'country' => 'us',
        'latitude' => '0.000000',
        'longitude' => '0.000000',
        'source' => 0,
        'is_primary' => 0,
        'province_name' => '',
        'country_name' => 'United States',
      ),
    ),
  ),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 55,
        'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-04-06T16:30:00',
        'value2' => '2014-04-06T21:45:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 103,
    'source' => 'node/34',
    'alias' => 'events/8th-international-conference-inelastic-x-ray-scattering',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 220,
      'vid' => 252,
      'nid' => 34,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => '8th International Conference on Inelastic X-ray Scattering',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 220,
      'vid' => 252,
      'nid' => 34,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => '8th International Conference on Inelastic X-ray Scattering',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 220,
      'vid' => 252,
      'nid' => 34,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => '8th International Conference on Inelastic X-ray Scattering',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:38:37 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'July 8, 9 SLAC Colloquia Postponed for One Week',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '67620c8c-1515-4c22-bf57-7f2473fad523',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145423,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8a45b255-165b-4d61-9303-82b8218eba16',
  'revision_uid' => 0,
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
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 55,
        'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-04-22T08:45:00',
        'value2' => '2014-04-22T20:45:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(
    'und' => array(
      0 => array(
        'value' => 'Particle Physics',
        'format' => NULL,
        'safe_value' => 'Particle Physics',
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
  'path' => array(
    'pid' => 104,
    'source' => 'node/35',
    'alias' => 'events/july-8-9-slac-colloquia-postponed-for-one-week',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 221,
      'vid' => 253,
      'nid' => 35,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'July 8, 9 SLAC Colloquia Postponed for One Week',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 221,
      'vid' => 253,
      'nid' => 35,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'July 8, 9 SLAC Colloquia Postponed for One Week',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 221,
      'vid' => 253,
      'nid' => 35,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'July 8, 9 SLAC Colloquia Postponed for One Week',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:37:03 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'Electroweak Production: The Path to SUSY?',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e70220f5-5622-4559-b7f1-31a4ce2a0b14',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145223,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a9f2976c-2174-4e45-99d1-f25d3244a4a1',
  'revision_uid' => 0,
  'body' => array(),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 55,
        'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-11-22T22:45:00',
        'value2' => '2014-11-23T15:45:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 105,
    'source' => 'node/36',
    'alias' => 'events/electroweak-production-the-path-susy',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 222,
      'vid' => 254,
      'nid' => 36,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Electroweak Production: The Path to SUSY?',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 222,
      'vid' => 254,
      'nid' => 36,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Electroweak Production: The Path to SUSY?',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 222,
      'vid' => 254,
      'nid' => 36,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Electroweak Production: The Path to SUSY?',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:33:43 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'Photon Science Seminar Today: Shedding Light into Rapidly Changing, Opaque Plasmas',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd222be65-2ae8-41f9-8319-c8e99e8e133c',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145475,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'abbd250b-0d34-438e-90e7-9d4a5cd575df',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>At today&#39;s Photon Science Seminar, Marta Fajardo of IST in Portugal will discuss how matter behaves under conditions of extreme temperature, pressure, density and electromagnetic fields. IST (Instituto Superior Técnico) is a Technical University of Lisbon engineering school.</p>

<p>Her talk, &quot;4D-HD for high-energy-density plasmas: shedding light into rapidly changing, opaque plasmas,&quot; begins at 3 p.m. in Building 901&#39;s Redtail Hawk conference room.</p>

<p>The talk will highlight how high-energy-density states of matter occur in astrophysical scenarios and also during every high-intensity laser-solid interaction, when a solid is heated to the plasma state. Although such states are easy to produce, the high densities last only briefly, and since visible radiation cannot penetrate them, traditional diagnostics leave an incomplete picture of these plasmas.</p>

<p>Fajardo will discuss how high-harmonic radiation from laser-gas interactions, with photon energies in the extreme ultraviolet spectrum, is capable of probing solid density matter. This source, she will explain, has many unique qualities:</p>

<ul>
	<li>It holds the record for the shortest pulses ever produced, in the attosecond range.</li>
	<li>It essentially behaves like a laser, with linear polarization, small divergence and full spatio-temporal coherence.</li>
	<li>It has a &quot;bonus&quot; feature: a multicolored discrete spectrum.</li>
</ul>

<p>These characteristics allow for applications such as nanometer-scale coherent imaging. Different techniques, such as diffraction imaging and 3-D holography, have been demonstrated by Fajardo&#39;s research groups and other researchers. Recent improvements have allowed single-shot imaging and opened the way for attosecond time resolution.</p>

<p>Fajardo will describe the use of high-harmonic generation (HHG) for opacity measurements and the development of an extreme ultraviolet (XUV) plasma refractive index diagnostic equipped with a wave-front sensor, as well as recent advances in XUV holography and plans to measure warm dense plasmas produced at SLAC&#39;s Linac Coherent Light Source (LCLS) with these techniques.</p>

<p>Tapping into the potential of HHG sources as a probe, one goal, according to Fajardo, is to shine some light into matter under extreme conditions through ultrafast imaging of dense plasmas.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>At today\'s Photon Science Seminar, Marta Fajardo of IST in Portugal will discuss how matter behaves under conditions of extreme temperature, pressure, density and electromagnetic fields. IST (Instituto Superior Técnico) is a Technical University of Lisbon engineering school.</p>
<p>Her talk, "4D-HD for high-energy-density plasmas: shedding light into rapidly changing, opaque plasmas," begins at 3 p.m. in Building 901\'s Redtail Hawk conference room.</p>
<p>The talk will highlight how high-energy-density states of matter occur in astrophysical scenarios and also during every high-intensity laser-solid interaction, when a solid is heated to the plasma state. Although such states are easy to produce, the high densities last only briefly, and since visible radiation cannot penetrate them, traditional diagnostics leave an incomplete picture of these plasmas.</p>
<p>Fajardo will discuss how high-harmonic radiation from laser-gas interactions, with photon energies in the extreme ultraviolet spectrum, is capable of probing solid density matter. This source, she will explain, has many unique qualities:</p>
<ul><li>It holds the record for the shortest pulses ever produced, in the attosecond range.</li>
<li>It essentially behaves like a laser, with linear polarization, small divergence and full spatio-temporal coherence.</li>
<li>It has a "bonus" feature: a multicolored discrete spectrum.</li>
</ul><p>These characteristics allow for applications such as nanometer-scale coherent imaging. Different techniques, such as diffraction imaging and 3-D holography, have been demonstrated by Fajardo\'s research groups and other researchers. Recent improvements have allowed single-shot imaging and opened the way for attosecond time resolution.</p>
<p>Fajardo will describe the use of high-harmonic generation (HHG) for opacity measurements and the development of an extreme ultraviolet (XUV) plasma refractive index diagnostic equipped with a wave-front sensor, as well as recent advances in XUV holography and plans to measure warm dense plasmas produced at SLAC\'s Linac Coherent Light Source (LCLS) with these techniques.</p>
<p>Tapping into the potential of HHG sources as a probe, one goal, according to Fajardo, is to shine some light into matter under extreme conditions through ultrafast imaging of dense plasmas.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(
    'und' => array(
      0 => array(
        'lid' => 21,
        'name' => 'Kavli Auditorium',
        'street' => '',
        'additional' => '',
        'city' => '',
        'province' => '',
        'postal_code' => '',
        'country' => 'us',
        'latitude' => '0.000000',
        'longitude' => '0.000000',
        'source' => 0,
        'is_primary' => 0,
        'province_name' => '',
        'country_name' => 'United States',
      ),
    ),
  ),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-05-15T22:00:00',
        'value2' => '2014-05-15T22:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_slac_event_link' => array(),
  'field_slac_event_organization' => array(),
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 106,
    'source' => 'node/37',
    'alias' => 'events/photon-science-seminar-today-shedding-light-rapidly-changing-opaque-plasmas',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 223,
      'vid' => 255,
      'nid' => 37,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Photon Science Seminar Today: Shedding Light into Rapidly Changing, Opaque Plasmas',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 223,
      'vid' => 255,
      'nid' => 37,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Photon Science Seminar Today: Shedding Light into Rapidly Changing, Opaque Plasmas',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 223,
      'vid' => 255,
      'nid' => 37,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Photon Science Seminar Today: Shedding Light into Rapidly Changing, Opaque Plasmas',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:37:55 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'SLAC Colloquium: \'LZ and the future of WIMPs\'',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8f556d4a-99bc-442a-aedf-06a52d750b71',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145149,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c9e5b13e-e0e9-4a14-acd9-404f43836024',
  'revision_uid' => 0,
  'body' => array(),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-05-25T11:45:00',
        'value2' => '2014-05-25T14:30:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 107,
    'source' => 'node/38',
    'alias' => 'events/slac-colloquium-lz-and-the-future-wimps',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 224,
      'vid' => 256,
      'nid' => 38,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'LZ and the future of WIMPs\'',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 224,
      'vid' => 256,
      'nid' => 38,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'LZ and the future of WIMPs\'',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 224,
      'vid' => 256,
      'nid' => 38,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'LZ and the future of WIMPs\'',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:32:29 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'SLAC Colloquium: \'Do WIMPs Rule? The LUX Experiment and the Search for Cosmic Dark Matter\'',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '571e0eef-b5a9-4d2c-aa10-b06e9d45bfab',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145184,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e218684b-adf0-4b39-a29d-52e6d07583b9',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>At vero eos et accusam et justo duo dolores et ea rebum. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetur adipisici elit, sed eiusmod tempor incidunt ut labore et dolore magna aliqua.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>At vero eos et accusam et justo duo dolores et ea rebum. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. At vero eos et accusam et justo duo dolores et ea rebum. Lorem ipsum dolor sit amet, consectetur adipisici elit, sed eiusmod tempor incidunt ut labore et dolore magna aliqua.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(),
  'field_slac_event_audience' => array(),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '89e0ecf3-9e9f-476b-a920-392077f1e1eb',
      ),
    ),
  ),
  'field_slac_event_contact' => array(),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-06-22T06:45:00',
        'value2' => '2014-06-22T14:45:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
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
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 108,
    'source' => 'node/39',
    'alias' => 'events/slac-colloquium-do-wimps-rule-the-lux-experiment-and-the-search-for-cosmic-dark-matter',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 225,
      'vid' => 257,
      'nid' => 39,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'Do WIMPs Rule? The LUX Experiment and the Search for Cosmic Dark Matter\'',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 225,
      'vid' => 257,
      'nid' => 39,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'Do WIMPs Rule? The LUX Experiment and the Search for Cosmic Dark Matter\'',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 225,
      'vid' => 257,
      'nid' => 39,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'SLAC Colloquium: \'Do WIMPs Rule? The LUX Experiment and the Search for Cosmic Dark Matter\'',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:33:04 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  $nodes[] = array(
  'title' => 'Photon Science Seminar: Commissioning the New LCLS \'XTCAV\'',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'af7aad2f-6bae-4b20-a2b3-3ee0eab121c3',
  'type' => 'event',
  'language' => 'und',
  'created' => 1376145104,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e8b52dfa-625e-454b-ab59-e7fe0d68a866',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum.</p>

<p>Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum.</p>

<p>Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum.</p>
<p>Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum.</p>
<p>Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat. Duis autem vel eum iriure dolor in hendrerit in vulputate velit esse molestie consequat, vel illum dolore eu feugiat nulla facilisis at vero eros et accumsan et iusto odio dignissim qui blandit praesent luptatum zzril delenit augue duis dolore te feugait nulla facilisi. At vero eos et accusam et justo duo dolores et ea rebum. At vero eos et accusam et justo duo dolores et ea rebum.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_event_image' => array(),
  'field_event_tags' => array(),
  'field_location' => array(
    'und' => array(
      0 => array(
        'lid' => 22,
        'name' => 'Kalvi Auditorium',
        'street' => '',
        'additional' => '',
        'city' => '',
        'province' => '',
        'postal_code' => '',
        'country' => 'us',
        'latitude' => '0.000000',
        'longitude' => '0.000000',
        'source' => 0,
        'is_primary' => 0,
        'province_name' => '',
        'country_name' => 'United States',
      ),
    ),
  ),
  'field_slac_event_audience' => array(
    'und' => array(
      0 => array(
        'value' => 'General Public, Stanford, SLAC',
        'format' => NULL,
        'safe_value' => 'General Public, Stanford, SLAC',
      ),
    ),
  ),
  'field_slac_event_category' => array(
    'und' => array(
      0 => array(
        'tid' => 55,
        'uuid' => 'a7aa9fdf-cada-4543-a91a-b3c8e4fe8681',
      ),
    ),
  ),
  'field_slac_event_contact' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Jeff Reece, <a href="mailto:jreece@slac.stanford.edu">jreece@slac.stanford.edu</a></p>
',
        'format' => 'full_html',
        'safe_value' => ' <p>Jeff Reece, <a href="mailto:jreece@slac.stanford.edu">jreece@slac.stanford.edu</a></p>
 ',
      ),
    ),
  ),
  'field_slac_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-06-15T08:15:00',
        'value2' => '2014-06-15T08:15:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_slac_event_link' => array(),
  'field_slac_event_organization' => array(),
  'field_slac_event_related_links' => array(),
  'field_slac_event_scientific_area' => array(),
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
  'path' => array(
    'pid' => 109,
    'source' => 'node/40',
    'alias' => 'events/photon-science-seminar-commissioning-the-new-lcls-xtcav',
    'language' => 'und',
  ),
  'workbench_moderation' => array(
    'current' => array(
      'hid' => 226,
      'vid' => 258,
      'nid' => 40,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Photon Science Seminar: Commissioning the New LCLS \'XTCAV\'',
      'timestamp' => 1433347464,
    ),
    'published' => array(
      'hid' => 226,
      'vid' => 258,
      'nid' => 40,
      'from_state' => 'draft',
      'state' => 'published',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Photon Science Seminar: Commissioning the New LCLS \'XTCAV\'',
      'timestamp' => 1433347464,
    ),
    'my_revision' => array(
      'hid' => 226,
      'vid' => 258,
      'nid' => 40,
      'from_state' => 'draft',
      'state' => 'draft',
      'uid' => 0,
      'stamp' => 1433347464,
      'published' => 0,
      'current' => 1,
      'title' => 'Photon Science Seminar: Commissioning the New LCLS \'XTCAV\'',
      'timestamp' => 1433347464,
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-10 14:31:44 +0000',
  'author_uuid' => '5415e044-85b9-4381-b98a-afcc89f264a1',
);
  return $nodes;
}
