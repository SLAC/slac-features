<?php
/**
 * @file
 * slac_profile_pages.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_profile_pages_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'title' => 'Profile frontpage',
    'log' => '',
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
    'sticky' => 0,
    'vuuid' => '4a32704d-262a-437b-ad37-63d8ae54c586',
    'type' => 'landing_page',
    'language' => 'und',
    'created' => 1384765109,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => '0b1f7606-c367-49fc-b5ef-7fe79b26becf',
    'revision_uid' => 0,
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
    'panelizer' => array(
      'page_manager' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:landing_page:default',
        'title' => 'Default',
        'panelizer_type' => 'node',
        'panelizer_key' => 'landing_page',
        'no_blocks' => FALSE,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'ipe',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(),
        'view_mode' => 'page_manager',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => TRUE,
        'extra' => array(),
        'display' => array(
          'args' => array(),
          'content' => array(),
          'panels' => array(),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'two_col',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'center' => NULL,
              'left' => NULL,
              'right' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '',
          'hide_title' => 0,
          'title_pane' => 0,
        ),
        'export_module' => 'landing_page',
        'type' => 'Overridden',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
      ),
    ),
    'cid' => 0,
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'comment_count' => 0,
    'name' => 'admin',
    'picture' => 0,
    'date' => '2013-11-18 15:50:54 +0200',
    'author_uuid' => 'b4ee2dc8-8223-44fa-b342-fae35debec0d',
  );
  $nodes[] = array(
    'title' => 'Profile',
    'log' => '',
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
    'sticky' => 0,
    'vuuid' => '6da4c3bd-da1f-47a8-9ec9-ec5c9a922ec8',
    'type' => 'landing_page',
    'language' => 'und',
    'created' => 1384765904,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => '107ad001-64ca-408c-baa0-72702e930598',
    'revision_uid' => 0,
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
    'panelizer' => array(
      'page_manager' => array(
        'disabled' => FALSE,
        'api_version' => 1,
        'name' => 'node:landing_page:default',
        'title' => 'Default',
        'panelizer_type' => 'node',
        'panelizer_key' => 'landing_page',
        'no_blocks' => FALSE,
        'css_id' => '',
        'css' => '',
        'pipeline' => 'ipe',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(),
        'view_mode' => 'page_manager',
        'css_class' => '',
        'title_element' => 'H2',
        'link_to_entity' => TRUE,
        'extra' => array(),
        'display' => array(
          'args' => array(),
          'content' => array(),
          'panels' => array(),
          'incoming_content' => NULL,
          'css_id' => NULL,
          'context' => array(),
          'did' => 'new',
          'renderer' => 'standard',
          'layout' => 'two_col',
          'layout_settings' => array(),
          'panel_settings' => array(
            'style_settings' => array(
              'default' => NULL,
              'center' => NULL,
              'left' => NULL,
              'right' => NULL,
            ),
          ),
          'cache' => array(),
          'title' => '',
          'hide_title' => 0,
          'title_pane' => 0,
        ),
        'export_module' => 'landing_page',
        'type' => 'Overridden',
        'export_type' => 2,
        'in_code_only' => TRUE,
        'table' => 'panelizer_defaults',
        'did' => NULL,
      ),
    ),
    'cid' => 0,
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'comment_count' => 0,
    'name' => 'admin',
    'picture' => 0,
    'date' => '2013-11-18 15:50:54 +0200',
    'author_uuid' => 'b4ee2dc8-8223-44fa-b342-fae35debec0d',
  );
  return $nodes;
}