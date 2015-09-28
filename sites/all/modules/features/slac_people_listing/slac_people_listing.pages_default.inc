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
  $display->uuid = '6c430559-73fd-48d9-81ac-d315e803a815';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0ff4675a-878b-460a-bd86-e20ceb9593f5';
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
    $pane->uuid = '0ff4675a-878b-460a-bd86-e20ceb9593f5';
    $display->content['new-0ff4675a-878b-460a-bd86-e20ceb9593f5'] = $pane;
    $display->panels['left'][0] = 'new-0ff4675a-878b-460a-bd86-e20ceb9593f5';
    $pane = new stdClass();
    $pane->pid = 'new-d2b350ed-008c-4f0f-8edb-e63ebfd827dc';
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
    $pane->uuid = 'd2b350ed-008c-4f0f-8edb-e63ebfd827dc';
    $display->content['new-d2b350ed-008c-4f0f-8edb-e63ebfd827dc'] = $pane;
    $display->panels['left'][1] = 'new-d2b350ed-008c-4f0f-8edb-e63ebfd827dc';
    $pane = new stdClass();
    $pane->pid = 'new-f21b804e-9519-4973-bac0-c9a0071f51b4';
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
    $pane->uuid = 'f21b804e-9519-4973-bac0-c9a0071f51b4';
    $display->content['new-f21b804e-9519-4973-bac0-c9a0071f51b4'] = $pane;
    $display->panels['left_title'][0] = 'new-f21b804e-9519-4973-bac0-c9a0071f51b4';
    $pane = new stdClass();
    $pane->pid = 'new-0764caec-be30-456f-a03e-4653dfdedd87';
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
    $pane->uuid = '0764caec-be30-456f-a03e-4653dfdedd87';
    $display->content['new-0764caec-be30-456f-a03e-4653dfdedd87'] = $pane;
    $display->panels['right'][0] = 'new-0764caec-be30-456f-a03e-4653dfdedd87';
    $pane = new stdClass();
    $pane->pid = 'new-6c352849-98c6-4061-b8b8-269aaa6ae618';
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
    $pane->uuid = '6c352849-98c6-4061-b8b8-269aaa6ae618';
    $display->content['new-6c352849-98c6-4061-b8b8-269aaa6ae618'] = $pane;
    $display->panels['right'][1] = 'new-6c352849-98c6-4061-b8b8-269aaa6ae618';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0ff4675a-878b-460a-bd86-e20ceb9593f5';
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
  $display->uuid = 'c62a9ece-891e-4d9e-b092-2cc095407142';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5f6c2349-173f-40e0-b295-f46bbc68e6b3';
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
    $pane->uuid = '5f6c2349-173f-40e0-b295-f46bbc68e6b3';
    $display->content['new-5f6c2349-173f-40e0-b295-f46bbc68e6b3'] = $pane;
    $display->panels['content'][0] = 'new-5f6c2349-173f-40e0-b295-f46bbc68e6b3';
    $pane = new stdClass();
    $pane->pid = 'new-8f5c3913-47c6-4e35-a9cf-a752a8a15b43';
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
    $pane->uuid = '8f5c3913-47c6-4e35-a9cf-a752a8a15b43';
    $display->content['new-8f5c3913-47c6-4e35-a9cf-a752a8a15b43'] = $pane;
    $display->panels['title'][0] = 'new-8f5c3913-47c6-4e35-a9cf-a752a8a15b43';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-5f6c2349-173f-40e0-b295-f46bbc68e6b3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_listing_page'] = $page;

  return $pages;

}
