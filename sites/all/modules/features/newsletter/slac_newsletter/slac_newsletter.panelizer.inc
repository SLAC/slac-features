<?php
/**
 * @file
 * slac_newsletter.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function slac_newsletter_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:newsletter:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'newsletter';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'newsletter';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'intro_text_left' => NULL,
      'intro_text_right' => NULL,
      'header_h1' => NULL,
      'header_h2' => NULL,
      'date' => NULL,
      'articles' => NULL,
      'footer_left' => NULL,
      'footer_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'aa313fa0-3810-44ff-9e04-8b06f056a852';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-390176a4-4487-41ed-9e60-5f024ebc2b9b';
    $pane->panel = 'intro_text_left';
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
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '390176a4-4487-41ed-9e60-5f024ebc2b9b';
    $display->content['new-390176a4-4487-41ed-9e60-5f024ebc2b9b'] = $pane;
    $display->panels['intro_text_left'][0] = 'new-390176a4-4487-41ed-9e60-5f024ebc2b9b';
    $pane = new stdClass();
    $pane->pid = 'new-1b019d04-5326-4d91-91e7-68a8e405c183';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1b019d04-5326-4d91-91e7-68a8e405c183';
    $display->content['new-1b019d04-5326-4d91-91e7-68a8e405c183'] = $pane;
    $display->panels['right'][0] = 'new-1b019d04-5326-4d91-91e7-68a8e405c183';
    $pane = new stdClass();
    $pane->pid = 'new-ea746f36-5d5b-465e-80f0-d7743125a034';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
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
    $pane->uuid = 'ea746f36-5d5b-465e-80f0-d7743125a034';
    $display->content['new-ea746f36-5d5b-465e-80f0-d7743125a034'] = $pane;
    $display->panels['right'][1] = 'new-ea746f36-5d5b-465e-80f0-d7743125a034';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:newsletter:default'] = $panelizer;

  return $export;
}
