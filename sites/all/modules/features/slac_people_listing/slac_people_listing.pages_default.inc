<?php
/**
 * @file
 * slac_people_listing.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_people_listing_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -50;
  $handler->conf = array(
    'title' => 'User view page',
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
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col_article';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Profile Overview';
  $display->uuid = '866eb2e5-20e7-44b3-b4d3-6d53f21337b1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-99e20eb9-7240-43a1-bb7c-5a3fa650c2bf';
    $pane->panel = 'left';
    $pane->type = 'slac_profile_complete';
    $pane->subtype = 'slac_profile_complete';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
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
    $pane->uuid = '99e20eb9-7240-43a1-bb7c-5a3fa650c2bf';
    $display->content['new-99e20eb9-7240-43a1-bb7c-5a3fa650c2bf'] = $pane;
    $display->panels['left'][0] = 'new-99e20eb9-7240-43a1-bb7c-5a3fa650c2bf';
    $pane = new stdClass();
    $pane->pid = 'new-d0f94082-13d6-4ea0-b5f1-11af0fe1c13c';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements_extorg-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd0f94082-13d6-4ea0-b5f1-11af0fe1c13c';
    $display->content['new-d0f94082-13d6-4ea0-b5f1-11af0fe1c13c'] = $pane;
    $display->panels['left'][1] = 'new-d0f94082-13d6-4ea0-b5f1-11af0fe1c13c';
    $pane = new stdClass();
    $pane->pid = 'new-3881ab12-6419-42a4-b099-88fba17a9647';
    $pane->panel = 'left_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => 'pane-title',
      'id' => '',
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
    $pane->uuid = '3881ab12-6419-42a4-b099-88fba17a9647';
    $display->content['new-3881ab12-6419-42a4-b099-88fba17a9647'] = $pane;
    $display->panels['left_title'][0] = 'new-3881ab12-6419-42a4-b099-88fba17a9647';
    $pane = new stdClass();
    $pane->pid = 'new-9ded52f0-83ae-437c-83af-d3b9bd889e98';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements_extorg-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contact Information',
      'context' => array(
        1 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ded52f0-83ae-437c-83af-d3b9bd889e98';
    $display->content['new-9ded52f0-83ae-437c-83af-d3b9bd889e98'] = $pane;
    $display->panels['right'][0] = 'new-9ded52f0-83ae-437c-83af-d3b9bd889e98';
    $pane = new stdClass();
    $pane->pid = 'new-5164bafa-d35e-4a8b-8b89-3df9ffa082cd';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements_extorg-panel_pane_2';
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
    $pane->uuid = '5164bafa-d35e-4a8b-8b89-3df9ffa082cd';
    $display->content['new-5164bafa-d35e-4a8b-8b89-3df9ffa082cd'] = $pane;
    $display->panels['right'][1] = 'new-5164bafa-d35e-4a8b-8b89-3df9ffa082cd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-99e20eb9-7240-43a1-bb7c-5a3fa650c2bf';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_people_listing_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people_listing_page';
  $page->task = 'page';
  $page->admin_title = 'People Listing page';
  $page->admin_description = '';
  $page->path = 'people/!letter';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'People',
    'name' => 'main-menu',
    'weight' => '13',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'letter' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
      'keyword' => 'letter',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_listing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'people_listing_page';
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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_length',
          'settings' => array(
            'operator' => '<=',
            'length' => '3',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one_col_basic';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'title' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'People Listing: All';
  $display->uuid = 'b6105ba6-f8f1-4913-bf89-c0949032f92d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c97633cc-ffd3-49b0-bc10-a0fedf5e921c';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'people_listing-panel_pane_1';
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
    $pane->uuid = 'c97633cc-ffd3-49b0-bc10-a0fedf5e921c';
    $display->content['new-c97633cc-ffd3-49b0-bc10-a0fedf5e921c'] = $pane;
    $display->panels['content'][0] = 'new-c97633cc-ffd3-49b0-bc10-a0fedf5e921c';
    $pane = new stdClass();
    $pane->pid = 'new-4e7c2d94-0cd7-4b3e-8820-b22d1b1c9441';
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
    $pane->uuid = '4e7c2d94-0cd7-4b3e-8820-b22d1b1c9441';
    $display->content['new-4e7c2d94-0cd7-4b3e-8820-b22d1b1c9441'] = $pane;
    $display->panels['title'][0] = 'new-4e7c2d94-0cd7-4b3e-8820-b22d1b1c9441';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-c97633cc-ffd3-49b0-bc10-a0fedf5e921c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_listing_page'] = $page;

  return $pages;

}
