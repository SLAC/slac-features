<?php
/**
 * @file
 * landing_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function landing_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'landing_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:landing_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f5e7d297-bb2d-49c6-9d4d-126a28a1f465';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:landing_page:default';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:landing_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Profile page';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'landing_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:landing_page:profile_page';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e0e0ec32-8581-4598-8fc5-611337ae1c02';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:landing_page:profile_page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-44532cbd-5f71-4e65-bed7-a049387d3598';
  $pane->panel = 'left';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:bf1ccf7f-9345-4259-b6b5-6bacfaab0589';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '44532cbd-5f71-4e65-bed7-a049387d3598';
  $display->content['new-44532cbd-5f71-4e65-bed7-a049387d3598'] = $pane;
  $display->panels['left'][0] = 'new-44532cbd-5f71-4e65-bed7-a049387d3598';
  $pane = new stdClass();
  $pane->pid = 'new-c737179f-6d30-46d2-8f9f-40c9aacc7f8b';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_user_elements-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'exposed' => array(
      'uid' => 'manager',
    ),
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
  $pane->uuid = 'c737179f-6d30-46d2-8f9f-40c9aacc7f8b';
  $display->content['new-c737179f-6d30-46d2-8f9f-40c9aacc7f8b'] = $pane;
  $display->panels['left'][1] = 'new-c737179f-6d30-46d2-8f9f-40c9aacc7f8b';
  $pane = new stdClass();
  $pane->pid = 'new-efa001fa-f06a-42e7-a7e7-c633a78c5fff';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_elements-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
    'exposed' => array(
      'uid_1' => 'manager',
      'field_slac_blog_tags_tid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'efa001fa-f06a-42e7-a7e7-c633a78c5fff';
  $display->content['new-efa001fa-f06a-42e7-a7e7-c633a78c5fff'] = $pane;
  $display->panels['left'][2] = 'new-efa001fa-f06a-42e7-a7e7-c633a78c5fff';
  $pane = new stdClass();
  $pane->pid = 'new-d90ddd4d-67f0-4605-bf39-d935fe37918c';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_user_elements-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'exposed' => array(
      'uid' => 'manager',
    ),
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
  $pane->uuid = 'd90ddd4d-67f0-4605-bf39-d935fe37918c';
  $display->content['new-d90ddd4d-67f0-4605-bf39-d935fe37918c'] = $pane;
  $display->panels['right'][0] = 'new-d90ddd4d-67f0-4605-bf39-d935fe37918c';
  $pane = new stdClass();
  $pane->pid = 'new-4c91b2d4-3373-4999-b8f6-032ee7358456';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'profile_user_elements-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'exposed' => array(
      'uid' => 'manager',
    ),
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
  $pane->uuid = '4c91b2d4-3373-4999-b8f6-032ee7358456';
  $display->content['new-4c91b2d4-3373-4999-b8f6-032ee7358456'] = $pane;
  $display->panels['right'][1] = 'new-4c91b2d4-3373-4999-b8f6-032ee7358456';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:landing_page:profile_page'] = $panelizer;

  return $export;
}
