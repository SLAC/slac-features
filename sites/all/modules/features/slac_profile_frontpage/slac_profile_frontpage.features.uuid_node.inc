<?php
/**
 * @file
 * slac_profile_frontpage.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_profile_frontpage_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Profile frontpage',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88eacd57-a406-467e-8df0-b05db29fe3ac',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1384508449,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a15e3bd9-9368-4536-82df-9dacfc09235a',
  'revision_uid' => 1,
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
      'entity_type' => 'node',
      'entity_id' => 17,
      'revision_id' => 17,
      'name' => 'node:landing_page:profile_page',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          7 => array(
            'pid' => 7,
            'did' => 3,
            'panel' => 'left',
            'type' => 'fieldable_panels_pane',
            'subtype' => 'uuid:bf1ccf7f-9345-4259-b6b5-6bacfaab0589',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'view_mode' => 'full',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          8 => array(
            'pid' => 8,
            'did' => 3,
            'panel' => 'left',
            'type' => 'views_panes',
            'subtype' => 'profile_user_elements-panel_pane_3',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'exposed' => array(
                'uid' => 'siteowner',
              ),
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
          9 => array(
            'pid' => 9,
            'did' => 3,
            'panel' => 'left',
            'type' => 'views_panes',
            'subtype' => 'profile_elements-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'items_per_page' => 10,
              'exposed' => array(
                'uid_1' => 'siteowner',
                'field_slac_blog_tags_tid' => '',
              ),
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
          ),
          10 => array(
            'pid' => 10,
            'did' => 3,
            'panel' => 'right',
            'type' => 'views_panes',
            'subtype' => 'profile_user_elements-panel_pane_1',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'exposed' => array(
                'uid' => 'siteowner',
              ),
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
          ),
          11 => array(
            'pid' => 11,
            'did' => 3,
            'panel' => 'right',
            'type' => 'views_panes',
            'subtype' => 'profile_user_elements-panel_pane_2',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'exposed' => array(
                'uid' => 'siteowner',
              ),
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
          ),
        ),
        'panels' => array(
          'left' => array(
            0 => 7,
            1 => 8,
            2 => 9,
          ),
          'right' => array(
            0 => 10,
            1 => 11,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 3,
        'renderer' => 'standard',
        'layout' => 'two_col',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'left' => NULL,
            'right' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '',
        'hide_title' => 0,
        'title_pane' => 6,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 5,
  'comment_count' => 0,
  'name' => 'siteowner',
  'picture' => 0,
  'subscriptions_notify' => TRUE,
  'date' => '2013-11-15 11:40:49 +0200',
  'author_uuid' => '9599660c-dc14-4061-af85-d2349aa2b49d',
);
  return $nodes;
}
