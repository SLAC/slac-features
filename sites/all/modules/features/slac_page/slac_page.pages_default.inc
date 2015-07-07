<?php
/**
 * @file
 * slac_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'SLAC Page',
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
              'page' => 'page',
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
      'right' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5a7f1fb8-8957-4234-ba19-3e40573a14bb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74fca14a-d8fe-4c50-8ad8-b08ed92f87b3';
    $pane->panel = 'left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '74fca14a-d8fe-4c50-8ad8-b08ed92f87b3';
    $display->content['new-74fca14a-d8fe-4c50-8ad8-b08ed92f87b3'] = $pane;
    $display->panels['left'][0] = 'new-74fca14a-d8fe-4c50-8ad8-b08ed92f87b3';
    $pane = new stdClass();
    $pane->pid = 'new-3ac7d340-54c1-4854-9b85-4a4850e34090';
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
    $pane->uuid = '3ac7d340-54c1-4854-9b85-4a4850e34090';
    $display->content['new-3ac7d340-54c1-4854-9b85-4a4850e34090'] = $pane;
    $display->panels['left_title'][0] = 'new-3ac7d340-54c1-4854-9b85-4a4850e34090';
    $pane = new stdClass();
    $pane->pid = 'new-e9fe80da-54a5-4b53-8579-98603135d2b0';
    $pane->panel = 'right';
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
    $pane->uuid = 'e9fe80da-54a5-4b53-8579-98603135d2b0';
    $display->content['new-e9fe80da-54a5-4b53-8579-98603135d2b0'] = $pane;
    $display->panels['right'][0] = 'new-e9fe80da-54a5-4b53-8579-98603135d2b0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e9fe80da-54a5-4b53-8579-98603135d2b0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}
