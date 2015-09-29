<?php
/**
 * @file
 * slac_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_event_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'SLAC Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col_events';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'left_title' => NULL,
      'right' => NULL,
      'inner_left' => NULL,
      'inner_right' => NULL,
      'inner_title' => NULL,
      'social_media' => NULL,
      'right_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Event calendar';
  $display->uuid = '03545cfb-236c-43ee-984d-b14d5395106c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86c71efe-4d16-486e-8ec1-d0cd2680f2be';
    $pane->panel = 'inner_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'slac_event_thumbnail',
        'image_link' => '',
        'text' => 'Download [file:name]',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86c71efe-4d16-486e-8ec1-d0cd2680f2be';
    $display->content['new-86c71efe-4d16-486e-8ec1-d0cd2680f2be'] = $pane;
    $display->panels['inner_left'][0] = 'new-86c71efe-4d16-486e-8ec1-d0cd2680f2be';
    $pane = new stdClass();
    $pane->pid = 'new-e37c2a71-d576-4952-9d21-ca9c49fe8f94';
    $pane->panel = 'inner_left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:d9c207a3-9ec9-4820-9f21-5539006b9215';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e37c2a71-d576-4952-9d21-ca9c49fe8f94';
    $display->content['new-e37c2a71-d576-4952-9d21-ca9c49fe8f94'] = $pane;
    $display->panels['inner_left'][1] = 'new-e37c2a71-d576-4952-9d21-ca9c49fe8f94';
    $pane = new stdClass();
    $pane->pid = 'new-174f009f-b004-4907-8070-b65bb834cc0b';
    $pane->panel = 'inner_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add to calendar icon',
      'title' => '',
      'body' => '<p><a href="/event/%node:nid/calendar.ics">add to calendar</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'add-to-calendar',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '174f009f-b004-4907-8070-b65bb834cc0b';
    $display->content['new-174f009f-b004-4907-8070-b65bb834cc0b'] = $pane;
    $display->panels['inner_left'][2] = 'new-174f009f-b004-4907-8070-b65bb834cc0b';
    $pane = new stdClass();
    $pane->pid = 'new-0dc65137-5575-4101-b4aa-69a34e32067c';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0dc65137-5575-4101-b4aa-69a34e32067c';
    $display->content['new-0dc65137-5575-4101-b4aa-69a34e32067c'] = $pane;
    $display->panels['inner_right'][0] = 'new-0dc65137-5575-4101-b4aa-69a34e32067c';
    $pane = new stdClass();
    $pane->pid = 'new-8a555a61-fb68-403e-8002-3254866d18a8';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'calendar_date',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'When',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a555a61-fb68-403e-8002-3254866d18a8';
    $display->content['new-8a555a61-fb68-403e-8002-3254866d18a8'] = $pane;
    $display->panels['inner_right'][1] = 'new-8a555a61-fb68-403e-8002-3254866d18a8';
    $pane = new stdClass();
    $pane->pid = 'new-b2a0b9a3-d6f7-4f6f-9e32-6f1ca2ecaa48';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'location_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Where',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b2a0b9a3-d6f7-4f6f-9e32-6f1ca2ecaa48';
    $display->content['new-b2a0b9a3-d6f7-4f6f-9e32-6f1ca2ecaa48'] = $pane;
    $display->panels['inner_right'][2] = 'new-b2a0b9a3-d6f7-4f6f-9e32-6f1ca2ecaa48';
    $pane = new stdClass();
    $pane->pid = 'new-e2f72356-1086-43a8-9638-8b84f10ad722';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Contact',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e2f72356-1086-43a8-9638-8b84f10ad722';
    $display->content['new-e2f72356-1086-43a8-9638-8b84f10ad722'] = $pane;
    $display->panels['inner_right'][3] = 'new-e2f72356-1086-43a8-9638-8b84f10ad722';
    $pane = new stdClass();
    $pane->pid = 'new-cbc5a409-7875-4268-86e2-f4ba26115416';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_audience';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Audience',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'cbc5a409-7875-4268-86e2-f4ba26115416';
    $display->content['new-cbc5a409-7875-4268-86e2-f4ba26115416'] = $pane;
    $display->panels['inner_right'][4] = 'new-cbc5a409-7875-4268-86e2-f4ba26115416';
    $pane = new stdClass();
    $pane->pid = 'new-d512b83f-b42d-402b-a134-405cb2e6adec';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'textformatter_list',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'textformatter_type' => 'ul',
        'textformatter_class' => 'textformatter-list',
        'textformatter_comma_full_stop' => 0,
        'textformatter_comma_and' => 0,
        'textformatter_comma_tag' => 'div',
        'textformatter_term_plain' => 1,
        'textformatter_comma_override' => 0,
        'textformatter_separator_custom' => '',
        'textformatter_separator_custom_tag' => 'span',
        'textformatter_separator_custom_class' => 'textformatter-separator',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd512b83f-b42d-402b-a134-405cb2e6adec';
    $display->content['new-d512b83f-b42d-402b-a134-405cb2e6adec'] = $pane;
    $display->panels['inner_right'][5] = 'new-d512b83f-b42d-402b-a134-405cb2e6adec';
    $pane = new stdClass();
    $pane->pid = 'new-9e1183b7-64dd-49e1-a171-29a35bfe5a1f';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9e1183b7-64dd-49e1-a171-29a35bfe5a1f';
    $display->content['new-9e1183b7-64dd-49e1-a171-29a35bfe5a1f'] = $pane;
    $display->panels['inner_right'][6] = 'new-9e1183b7-64dd-49e1-a171-29a35bfe5a1f';
    $pane = new stdClass();
    $pane->pid = 'new-f2db5845-ed36-43e5-8d56-9f216b727400';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attachment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'direct_download_icon',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'RELATED FILES',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f2db5845-ed36-43e5-8d56-9f216b727400';
    $display->content['new-f2db5845-ed36-43e5-8d56-9f216b727400'] = $pane;
    $display->panels['inner_right'][7] = 'new-f2db5845-ed36-43e5-8d56-9f216b727400';
    $pane = new stdClass();
    $pane->pid = 'new-0ab36a28-b19e-4baf-9fb9-da08dab35757';
    $pane->panel = 'inner_title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h3',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ab36a28-b19e-4baf-9fb9-da08dab35757';
    $display->content['new-0ab36a28-b19e-4baf-9fb9-da08dab35757'] = $pane;
    $display->panels['inner_title'][0] = 'new-0ab36a28-b19e-4baf-9fb9-da08dab35757';
    $pane = new stdClass();
    $pane->pid = 'new-703b99cf-f269-4282-9c78-05e8d54b9257';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '703b99cf-f269-4282-9c78-05e8d54b9257';
    $display->content['new-703b99cf-f269-4282-9c78-05e8d54b9257'] = $pane;
    $display->panels['left'][0] = 'new-703b99cf-f269-4282-9c78-05e8d54b9257';
    $pane = new stdClass();
    $pane->pid = 'new-52fdf8d7-d3d0-4069-9d34-64196daff721';
    $pane->panel = 'left_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => 'pane-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52fdf8d7-d3d0-4069-9d34-64196daff721';
    $display->content['new-52fdf8d7-d3d0-4069-9d34-64196daff721'] = $pane;
    $display->panels['left_title'][0] = 'new-52fdf8d7-d3d0-4069-9d34-64196daff721';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-52fdf8d7-d3d0-4069-9d34-64196daff721';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Event Categories',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'event_categories' => 'event_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'calendar_two_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media' => NULL,
      'title' => NULL,
      'center' => NULL,
      'list-left' => NULL,
      'list-right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1dde9569-648d-44af-bbf5-6b703a8ffd64';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3cc7988-e945-4888-a052-d49e384cf4a2';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-taxonomy_term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3cc7988-e945-4888-a052-d49e384cf4a2';
    $display->content['new-b3cc7988-e945-4888-a052-d49e384cf4a2'] = $pane;
    $display->panels['center'][0] = 'new-b3cc7988-e945-4888-a052-d49e384cf4a2';
    $pane = new stdClass();
    $pane->pid = 'new-b68b6444-363a-4acd-80a2-f0a9a4304b96';
    $pane->panel = 'right';
    $pane->type = 'event_series';
    $pane->subtype = 'event_series';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b68b6444-363a-4acd-80a2-f0a9a4304b96';
    $display->content['new-b68b6444-363a-4acd-80a2-f0a9a4304b96'] = $pane;
    $display->panels['right'][0] = 'new-b68b6444-363a-4acd-80a2-f0a9a4304b96';
    $pane = new stdClass();
    $pane->pid = 'new-4024e924-a08d-47e5-be4e-7638767bee58';
    $pane->panel = 'title';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'service-description',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4024e924-a08d-47e5-be4e-7638767bee58';
    $display->content['new-4024e924-a08d-47e5-be4e-7638767bee58'] = $pane;
    $display->panels['title'][0] = 'new-4024e924-a08d-47e5-be4e-7638767bee58';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_event_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_new_event';
  $page->task = 'page';
  $page->admin_title = 'Add new event';
  $page->admin_description = '';
  $page->path = 'events/new-event';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
            1 => 5,
            2 => 3,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add New Event',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_add_new_event_http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_new_event';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_new_event'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '6',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'calendar_two_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'inner_left' => NULL,
      'inner_right' => NULL,
      'inner_title' => NULL,
      'social_media' => NULL,
      'right_sidebar' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
      'title' => NULL,
      'center' => NULL,
      'list-left' => NULL,
      'list-right' => NULL,
      'list-bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Event calendar';
  $display->uuid = '38d7e3d0-690d-4ee5-950d-845257dac818';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c465e842-8ced-4514-8751-0586c3fa229e';
    $pane->panel = 'center';
    $pane->type = 'views_feed_pane';
    $pane->subtype = 'events:feed_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c465e842-8ced-4514-8751-0586c3fa229e';
    $display->content['new-c465e842-8ced-4514-8751-0586c3fa229e'] = $pane;
    $display->panels['center'][0] = 'new-c465e842-8ced-4514-8751-0586c3fa229e';
    $pane = new stdClass();
    $pane->pid = 'new-739af6ed-d3b9-4ebc-8f75-dda08cacdab0';
    $pane->panel = 'center';
    $pane->type = 'event_view_toggle';
    $pane->subtype = 'event_view_toggle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '739af6ed-d3b9-4ebc-8f75-dda08cacdab0';
    $display->content['new-739af6ed-d3b9-4ebc-8f75-dda08cacdab0'] = $pane;
    $display->panels['center'][1] = 'new-739af6ed-d3b9-4ebc-8f75-dda08cacdab0';
    $pane = new stdClass();
    $pane->pid = 'new-82f713f5-6eb4-4058-9f64-921ede3e2e73';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-month';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events
events/month*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/month/list*',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82f713f5-6eb4-4058-9f64-921ede3e2e73';
    $display->content['new-82f713f5-6eb4-4058-9f64-921ede3e2e73'] = $pane;
    $display->panels['center'][2] = 'new-82f713f5-6eb4-4058-9f64-921ede3e2e73';
    $pane = new stdClass();
    $pane->pid = 'new-21d1e894-d5b9-46fa-bc13-25809c9542d5';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-week';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/week*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/week/list*',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '21d1e894-d5b9-46fa-bc13-25809c9542d5';
    $display->content['new-21d1e894-d5b9-46fa-bc13-25809c9542d5'] = $pane;
    $display->panels['center'][3] = 'new-21d1e894-d5b9-46fa-bc13-25809c9542d5';
    $pane = new stdClass();
    $pane->pid = 'new-2fd299d3-72f5-49ca-823d-cee80249e481';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-day';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/day*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/day/list*',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2fd299d3-72f5-49ca-823d-cee80249e481';
    $display->content['new-2fd299d3-72f5-49ca-823d-cee80249e481'] = $pane;
    $display->panels['center'][4] = 'new-2fd299d3-72f5-49ca-823d-cee80249e481';
    $pane = new stdClass();
    $pane->pid = 'new-907a01fd-c9bf-4442-93a5-3db1db47661a';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-minicalendar';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/month/list*
events/week/list*
events/day/list*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '907a01fd-c9bf-4442-93a5-3db1db47661a';
    $display->content['new-907a01fd-c9bf-4442-93a5-3db1db47661a'] = $pane;
    $display->panels['center'][5] = 'new-907a01fd-c9bf-4442-93a5-3db1db47661a';
    $pane = new stdClass();
    $pane->pid = 'new-6ea2aea9-1307-4cc8-bd01-41460ec8c9b2';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-month_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/month/list*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '6ea2aea9-1307-4cc8-bd01-41460ec8c9b2';
    $display->content['new-6ea2aea9-1307-4cc8-bd01-41460ec8c9b2'] = $pane;
    $display->panels['center'][6] = 'new-6ea2aea9-1307-4cc8-bd01-41460ec8c9b2';
    $pane = new stdClass();
    $pane->pid = 'new-ea019c1d-f248-4bef-a89d-30fe0c2159ce';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-week_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/week/list*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'ea019c1d-f248-4bef-a89d-30fe0c2159ce';
    $display->content['new-ea019c1d-f248-4bef-a89d-30fe0c2159ce'] = $pane;
    $display->panels['center'][7] = 'new-ea019c1d-f248-4bef-a89d-30fe0c2159ce';
    $pane = new stdClass();
    $pane->pid = 'new-8693bec2-fd31-4945-a258-cdac08304a4a';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-day_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/day/list*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '8693bec2-fd31-4945-a258-cdac08304a4a';
    $display->content['new-8693bec2-fd31-4945-a258-cdac08304a4a'] = $pane;
    $display->panels['center'][8] = 'new-8693bec2-fd31-4945-a258-cdac08304a4a';
    $pane = new stdClass();
    $pane->pid = 'new-11253bf6-94a3-4632-935f-bb5b9e03a73c';
    $pane->panel = 'list-bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="#linktotop">GO TO TOP</a>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '11253bf6-94a3-4632-935f-bb5b9e03a73c';
    $display->content['new-11253bf6-94a3-4632-935f-bb5b9e03a73c'] = $pane;
    $display->panels['list-bottom'][0] = 'new-11253bf6-94a3-4632-935f-bb5b9e03a73c';
    $pane = new stdClass();
    $pane->pid = 'new-ca88ffc8-8a0b-4e63-ae22-3597a7da71aa';
    $pane->panel = 'list-left';
    $pane->type = 'event_view_toggle';
    $pane->subtype = 'event_view_toggle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca88ffc8-8a0b-4e63-ae22-3597a7da71aa';
    $display->content['new-ca88ffc8-8a0b-4e63-ae22-3597a7da71aa'] = $pane;
    $display->panels['list-left'][0] = 'new-ca88ffc8-8a0b-4e63-ae22-3597a7da71aa';
    $pane = new stdClass();
    $pane->pid = 'new-cf1ffe1c-7fd1-404b-86b2-aea3ac583b8c';
    $pane->panel = 'list-left';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-minicalendar';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf1ffe1c-7fd1-404b-86b2-aea3ac583b8c';
    $display->content['new-cf1ffe1c-7fd1-404b-86b2-aea3ac583b8c'] = $pane;
    $display->panels['list-left'][1] = 'new-cf1ffe1c-7fd1-404b-86b2-aea3ac583b8c';
    $pane = new stdClass();
    $pane->pid = 'new-a5dd6ecb-ecfc-4c10-946a-f6b853f1d2d4';
    $pane->panel = 'list-left';
    $pane->type = 'event_series';
    $pane->subtype = 'event_series';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a5dd6ecb-ecfc-4c10-946a-f6b853f1d2d4';
    $display->content['new-a5dd6ecb-ecfc-4c10-946a-f6b853f1d2d4'] = $pane;
    $display->panels['list-left'][2] = 'new-a5dd6ecb-ecfc-4c10-946a-f6b853f1d2d4';
    $pane = new stdClass();
    $pane->pid = 'new-5927aeea-fb5e-4042-ad0b-97de7d30428b';
    $pane->panel = 'list-left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-events-month_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events
events/month*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Calendar Filters',
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5927aeea-fb5e-4042-ad0b-97de7d30428b';
    $display->content['new-5927aeea-fb5e-4042-ad0b-97de7d30428b'] = $pane;
    $display->panels['list-left'][3] = 'new-5927aeea-fb5e-4042-ad0b-97de7d30428b';
    $pane = new stdClass();
    $pane->pid = 'new-fd055e21-08d0-4e86-8309-920bce6870d7';
    $pane->panel = 'list-left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-events-week_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/week*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Calendar Filters',
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fd055e21-08d0-4e86-8309-920bce6870d7';
    $display->content['new-fd055e21-08d0-4e86-8309-920bce6870d7'] = $pane;
    $display->panels['list-left'][4] = 'new-fd055e21-08d0-4e86-8309-920bce6870d7';
    $pane = new stdClass();
    $pane->pid = 'new-a670c551-cdfa-4492-805e-be33e8844ee0';
    $pane->panel = 'list-right';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-month_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events
events/month*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a670c551-cdfa-4492-805e-be33e8844ee0';
    $display->content['new-a670c551-cdfa-4492-805e-be33e8844ee0'] = $pane;
    $display->panels['list-right'][0] = 'new-a670c551-cdfa-4492-805e-be33e8844ee0';
    $pane = new stdClass();
    $pane->pid = 'new-480bb2e1-2f63-4cb2-85c5-0c62b546320b';
    $pane->panel = 'list-right';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-week_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/week*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '480bb2e1-2f63-4cb2-85c5-0c62b546320b';
    $display->content['new-480bb2e1-2f63-4cb2-85c5-0c62b546320b'] = $pane;
    $display->panels['list-right'][1] = 'new-480bb2e1-2f63-4cb2-85c5-0c62b546320b';
    $pane = new stdClass();
    $pane->pid = 'new-ef2624f7-32a1-4954-ab7b-6a9f90c57d40';
    $pane->panel = 'list-right';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-day_list';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/day/list*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ef2624f7-32a1-4954-ab7b-6a9f90c57d40';
    $display->content['new-ef2624f7-32a1-4954-ab7b-6a9f90c57d40'] = $pane;
    $display->panels['list-right'][2] = 'new-ef2624f7-32a1-4954-ab7b-6a9f90c57d40';
    $pane = new stdClass();
    $pane->pid = 'new-8325068c-f66a-435c-a2de-a1ad20e5d3c4';
    $pane->panel = 'right';
    $pane->type = 'event_series';
    $pane->subtype = 'event_series';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8325068c-f66a-435c-a2de-a1ad20e5d3c4';
    $display->content['new-8325068c-f66a-435c-a2de-a1ad20e5d3c4'] = $pane;
    $display->panels['right'][0] = 'new-8325068c-f66a-435c-a2de-a1ad20e5d3c4';
    $pane = new stdClass();
    $pane->pid = 'new-b0ab599a-4b1e-4927-95f8-2263b029fad3';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-events-month';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events
events/month*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => 'Calendar Filters',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Calendar Filters',
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b0ab599a-4b1e-4927-95f8-2263b029fad3';
    $display->content['new-b0ab599a-4b1e-4927-95f8-2263b029fad3'] = $pane;
    $display->panels['right'][1] = 'new-b0ab599a-4b1e-4927-95f8-2263b029fad3';
    $pane = new stdClass();
    $pane->pid = 'new-58aa45c9-f3fc-4039-8cd2-ab5ed14b41b4';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-events-week';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/week*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Calendar Filters',
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '58aa45c9-f3fc-4039-8cd2-ab5ed14b41b4';
    $display->content['new-58aa45c9-f3fc-4039-8cd2-ab5ed14b41b4'] = $pane;
    $display->panels['right'][2] = 'new-58aa45c9-f3fc-4039-8cd2-ab5ed14b41b4';
    $pane = new stdClass();
    $pane->pid = 'new-2ff8de7f-480f-40aa-beea-5f1c1607dee0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-events-day';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/day*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_title' => 'Calendar Filters',
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2ff8de7f-480f-40aa-beea-5f1c1607dee0';
    $display->content['new-2ff8de7f-480f-40aa-beea-5f1c1607dee0'] = $pane;
    $display->panels['right'][3] = 'new-2ff8de7f-480f-40aa-beea-5f1c1607dee0';
    $pane = new stdClass();
    $pane->pid = 'new-b49bc64c-1842-4742-96ce-1b857087fd3b';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => 'pane-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b49bc64c-1842-4742-96ce-1b857087fd3b';
    $display->content['new-b49bc64c-1842-4742-96ce-1b857087fd3b'] = $pane;
    $display->panels['title'][0] = 'new-b49bc64c-1842-4742-96ce-1b857087fd3b';
    $pane = new stdClass();
    $pane->pid = 'new-1309e083-a215-41f4-bbc7-0cb0fd098aca';
    $pane->panel = 'title';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'event-listing-panel',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1309e083-a215-41f4-bbc7-0cb0fd098aca';
    $display->content['new-1309e083-a215-41f4-bbc7-0cb0fd098aca'] = $pane;
    $display->panels['title'][1] = 'new-1309e083-a215-41f4-bbc7-0cb0fd098aca';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
