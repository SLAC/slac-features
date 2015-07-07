<?php
/**
 * @file
 * slac_user_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_user_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Completeness',
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
  $display->title = '%user:name';
  $display->uuid = '05e04f9d-1637-4818-bd5b-9354a03c333d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f37a23b3-fd6e-4cb8-9fcf-a202143bf644';
    $pane->panel = 'left';
    $pane->type = 'slac_profile_complete';
    $pane->subtype = 'slac_profile_complete';
    $pane->shown = TRUE;
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
    $pane->uuid = 'f37a23b3-fd6e-4cb8-9fcf-a202143bf644';
    $display->content['new-f37a23b3-fd6e-4cb8-9fcf-a202143bf644'] = $pane;
    $display->panels['left'][0] = 'new-f37a23b3-fd6e-4cb8-9fcf-a202143bf644';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f37a23b3-fd6e-4cb8-9fcf-a202143bf644';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}
