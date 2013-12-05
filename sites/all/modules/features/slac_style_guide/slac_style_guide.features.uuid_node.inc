<?php
/**
 * @file
 * slac_style_guide.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_style_guide_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Style Guide',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3c966e05-e572-4bc5-a2ac-37f7fb662ffe',
  'type' => 'page',
  'language' => 'und',
  'created' => 1386277632,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '81ac3950-1f98-4037-8883-f437f9a50e53',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>Add html markup and styles for style guide.</div>',
        'summary' => '',
        'format' => 'unfiltered_html',
        'safe_value' => '<div>Add html markup and styles for style guide.</div>',
        'safe_summary' => '',
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
  'date' => '2013-12-05 14:07:12 -0700',
  'author_uuid' => 'defe334f-4993-4431-b88a-3d6d6339c96e',
);
  return $nodes;
}
