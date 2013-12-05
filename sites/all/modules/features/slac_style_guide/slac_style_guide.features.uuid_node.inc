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
  'title' => 'SLAC Style Guide',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b665e9e0-a13a-462f-8f36-df7c6f5ae098',
  'type' => 'page',
  'language' => 'und',
  'created' => 1386282341,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7d6d9c32-2e9d-4aba-b85c-10db90df4d81',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>Html markup and style for style guide.</div>',
        'summary' => '',
        'format' => 'unfiltered_html',
        'safe_value' => '<div>Html markup and style for style guide.</div>',
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
  'date' => '2013-12-05 15:25:41 -0700',
  'author_uuid' => '090e2091-3309-4088-8e95-5cd6a274ad31',
);
  return $nodes;
}
