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
    ),
  );
  $display->cache = array();
  $display->title = 'Event calendar';
  $display->uuid = 'e95e8005-9d2b-4d5d-94bd-23a4c42e3191';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8c5f949b-c5ac-41ae-8b24-1aab8aafb3c3';
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
    $pane->uuid = '8c5f949b-c5ac-41ae-8b24-1aab8aafb3c3';
    $display->content['new-8c5f949b-c5ac-41ae-8b24-1aab8aafb3c3'] = $pane;
    $display->panels['inner_left'][0] = 'new-8c5f949b-c5ac-41ae-8b24-1aab8aafb3c3';
    $pane = new stdClass();
    $pane->pid = 'new-9bd82330-51f6-4bb7-afa7-d74d47106bd5';
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
    $pane->uuid = '9bd82330-51f6-4bb7-afa7-d74d47106bd5';
    $display->content['new-9bd82330-51f6-4bb7-afa7-d74d47106bd5'] = $pane;
    $display->panels['inner_left'][1] = 'new-9bd82330-51f6-4bb7-afa7-d74d47106bd5';
    $pane = new stdClass();
    $pane->pid = 'new-a68598c4-25eb-47df-9edc-a6f345d02a7f';
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
    $pane->uuid = 'a68598c4-25eb-47df-9edc-a6f345d02a7f';
    $display->content['new-a68598c4-25eb-47df-9edc-a6f345d02a7f'] = $pane;
    $display->panels['inner_left'][2] = 'new-a68598c4-25eb-47df-9edc-a6f345d02a7f';
    $pane = new stdClass();
    $pane->pid = 'new-6e9c08ad-a2c9-4161-8a93-e0fd42fe9fb0';
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
    $pane->uuid = '6e9c08ad-a2c9-4161-8a93-e0fd42fe9fb0';
    $display->content['new-6e9c08ad-a2c9-4161-8a93-e0fd42fe9fb0'] = $pane;
    $display->panels['inner_right'][0] = 'new-6e9c08ad-a2c9-4161-8a93-e0fd42fe9fb0';
    $pane = new stdClass();
    $pane->pid = 'new-17fb173e-9258-4f42-8de4-865da69e8207';
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
    $pane->uuid = '17fb173e-9258-4f42-8de4-865da69e8207';
    $display->content['new-17fb173e-9258-4f42-8de4-865da69e8207'] = $pane;
    $display->panels['inner_right'][1] = 'new-17fb173e-9258-4f42-8de4-865da69e8207';
    $pane = new stdClass();
    $pane->pid = 'new-b18439d8-df0a-4057-8712-96d3c79179a7';
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
    $pane->uuid = 'b18439d8-df0a-4057-8712-96d3c79179a7';
    $display->content['new-b18439d8-df0a-4057-8712-96d3c79179a7'] = $pane;
    $display->panels['inner_right'][2] = 'new-b18439d8-df0a-4057-8712-96d3c79179a7';
    $pane = new stdClass();
    $pane->pid = 'new-00fe0988-0f3a-45e7-851a-eeaa0f78bcab';
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
    $pane->uuid = '00fe0988-0f3a-45e7-851a-eeaa0f78bcab';
    $display->content['new-00fe0988-0f3a-45e7-851a-eeaa0f78bcab'] = $pane;
    $display->panels['inner_right'][3] = 'new-00fe0988-0f3a-45e7-851a-eeaa0f78bcab';
    $pane = new stdClass();
    $pane->pid = 'new-331f6268-ec35-4c22-846d-9650891aa800';
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
    $pane->uuid = '331f6268-ec35-4c22-846d-9650891aa800';
    $display->content['new-331f6268-ec35-4c22-846d-9650891aa800'] = $pane;
    $display->panels['inner_right'][4] = 'new-331f6268-ec35-4c22-846d-9650891aa800';
    $pane = new stdClass();
    $pane->pid = 'new-f0647b82-3a9a-4389-ac0e-f030721c0596';
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
    $pane->uuid = 'f0647b82-3a9a-4389-ac0e-f030721c0596';
    $display->content['new-f0647b82-3a9a-4389-ac0e-f030721c0596'] = $pane;
    $display->panels['inner_right'][5] = 'new-f0647b82-3a9a-4389-ac0e-f030721c0596';
    $pane = new stdClass();
    $pane->pid = 'new-80a94498-71b2-44f2-a618-2f294fe95e29';
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
    $pane->uuid = '80a94498-71b2-44f2-a618-2f294fe95e29';
    $display->content['new-80a94498-71b2-44f2-a618-2f294fe95e29'] = $pane;
    $display->panels['inner_right'][6] = 'new-80a94498-71b2-44f2-a618-2f294fe95e29';
    $pane = new stdClass();
    $pane->pid = 'new-29d46d07-edf3-4ecd-97e1-108d163202cc';
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
    $pane->uuid = '29d46d07-edf3-4ecd-97e1-108d163202cc';
    $display->content['new-29d46d07-edf3-4ecd-97e1-108d163202cc'] = $pane;
    $display->panels['inner_title'][0] = 'new-29d46d07-edf3-4ecd-97e1-108d163202cc';
    $pane = new stdClass();
    $pane->pid = 'new-02f5c82a-f1b4-4075-b5c0-059b6eeaed40';
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
    $pane->uuid = '02f5c82a-f1b4-4075-b5c0-059b6eeaed40';
    $display->content['new-02f5c82a-f1b4-4075-b5c0-059b6eeaed40'] = $pane;
    $display->panels['left'][0] = 'new-02f5c82a-f1b4-4075-b5c0-059b6eeaed40';
    $pane = new stdClass();
    $pane->pid = 'new-7d19568f-5352-4283-b34f-2d6aaea8a57d';
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
    $pane->uuid = '7d19568f-5352-4283-b34f-2d6aaea8a57d';
    $display->content['new-7d19568f-5352-4283-b34f-2d6aaea8a57d'] = $pane;
    $display->panels['left_title'][0] = 'new-7d19568f-5352-4283-b34f-2d6aaea8a57d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7d19568f-5352-4283-b34f-2d6aaea8a57d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

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
  $display->layout = 'two_col_events';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Event calendar';
  $display->uuid = '8f4d8d4f-eb56-4566-a3d9-ce3dada804e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93c1984b-8ed0-4d8e-848f-37d1e7eecad6';
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
    $pane->uuid = '93c1984b-8ed0-4d8e-848f-37d1e7eecad6';
    $display->content['new-93c1984b-8ed0-4d8e-848f-37d1e7eecad6'] = $pane;
    $display->panels['left'][0] = 'new-93c1984b-8ed0-4d8e-848f-37d1e7eecad6';
    $pane = new stdClass();
    $pane->pid = 'new-aff3affc-b290-449e-a318-25ddc7445361';
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
    $pane->uuid = 'aff3affc-b290-449e-a318-25ddc7445361';
    $display->content['new-aff3affc-b290-449e-a318-25ddc7445361'] = $pane;
    $display->panels['left_title'][0] = 'new-aff3affc-b290-449e-a318-25ddc7445361';
    $pane = new stdClass();
    $pane->pid = 'new-f6e6c9b2-f115-490e-b389-5d0415789589';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6e6c9b2-f115-490e-b389-5d0415789589';
    $display->content['new-f6e6c9b2-f115-490e-b389-5d0415789589'] = $pane;
    $display->panels['right'][0] = 'new-f6e6c9b2-f115-490e-b389-5d0415789589';
    $pane = new stdClass();
    $pane->pid = 'new-83bc59b8-ad98-40c1-80c1-90afbf42fa07';
    $pane->panel = 'social_media';
    $pane->type = 'views_feed_pane';
    $pane->subtype = 'events:feed_1';
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
    $pane->uuid = '83bc59b8-ad98-40c1-80c1-90afbf42fa07';
    $display->content['new-83bc59b8-ad98-40c1-80c1-90afbf42fa07'] = $pane;
    $display->panels['social_media'][0] = 'new-83bc59b8-ad98-40c1-80c1-90afbf42fa07';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-93c1984b-8ed0-4d8e-848f-37d1e7eecad6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
