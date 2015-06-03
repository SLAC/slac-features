<?php
/**
 * @file
 * slac_forum_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_forum_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => '7th Extremely Large Databases Conference',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '18f1cad7-47c1-4aac-a4b3-367e63a89e7a',
  'type' => 'forum',
  'language' => 'und',
  'created' => 1377765228,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '422ee515-8c5a-4f79-9af6-ece5d38c166d',
  'revision_uid' => 1,
  'taxonomy_forums' => array(
    'und' => array(
      0 => array(
        'tid' => 65,
        'uuid' => 'd05a89c1-2f65-4dc0-8158-ca658bdabc0e',
      ),
    ),
  ),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'September 9-12, 2013
Stanford University, California, USA

Dates and locations:

*   main program: Sept 10-11 CEMEX Auditorium
*   tutorials: Sept 9 Gunn & McClelland
*   invitational workshop: Sept 12 Gunn Bldg, Room 101


All rooms are part of the Knight Management Center, for directions see: directions.
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>September 9-12, 2013<br />
Stanford University, California, USA</p>
<p>Dates and locations:</p>
<p>*   main program: Sept 10-11 CEMEX Auditorium<br />
*   tutorials: Sept 9 Gunn &amp; McClelland<br />
*   invitational workshop: Sept 12 Gunn Bldg, Room 101</p>
<p>All rooms are part of the Knight Management Center, for directions see: directions.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BoardPost',
    ),
    'taxonomy_forums' => array(
      'predicates' => array(
        0 => 'sioc:has_container',
      ),
      'type' => 'rel',
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
  'forum_tid' => 65,
  'subscriptions_notify' => TRUE,
  'date' => '2013-08-29 08:33:48 +0000',
  'author_uuid' => '8de174c7-3191-4a83-abfe-743a2585da90',
);
  $nodes[] = array(
  'title' => 'Why Does Particle Physics Matter?',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd32c6fdc-2f5a-4150-840e-7dfc182389d1',
  'type' => 'forum',
  'language' => 'und',
  'created' => 1377765395,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6c76269d-8905-443b-9205-491cefda8a4d',
  'revision_uid' => 1,
  'taxonomy_forums' => array(
    'und' => array(
      0 => array(
        'tid' => 66,
        'uuid' => 'f1fdd65a-9b52-4f38-9374-769d377943b6',
      ),
    ),
  ),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Is there any more esoteric, almost mystical-sounding scientific field than particle physics? To the layperson, the discipline is shrouded in impenetrable particle names like anti-down quarks and neutralinos, and the counterintuitive rules of quantum mechanics. In an effort to make their field more concrete and meaningful to the rest of the world, a group of particle physicists has produced a series of videos on "Why Particle Physics Matters."',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Is there any more esoteric, almost mystical-sounding scientific field than particle physics? To the layperson, the discipline is shrouded in impenetrable particle names like anti-down quarks and neutralinos, and the counterintuitive rules of quantum mechanics. In an effort to make their field more concrete and meaningful to the rest of the world, a group of particle physicists has produced a series of videos on "Why Particle Physics Matters."</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BoardPost',
    ),
    'taxonomy_forums' => array(
      'predicates' => array(
        0 => 'sioc:has_container',
      ),
      'type' => 'rel',
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
  'forum_tid' => 66,
  'subscriptions_notify' => TRUE,
  'date' => '2013-08-29 08:36:35 +0000',
  'author_uuid' => '8de174c7-3191-4a83-abfe-743a2585da90',
);
  return $nodes;
}
