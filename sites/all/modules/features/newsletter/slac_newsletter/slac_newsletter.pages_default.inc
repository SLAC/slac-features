<?php
/**
 * @file
 * slac_newsletter.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_newsletter_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Newsletter template',
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
              'newsletter' => 'newsletter',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'newsletter
newsletter/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'page_basic_eo';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'user-search' => NULL,
      'header-menu' => NULL,
      'site-title' => NULL,
      'main-menu' => NULL,
      'content' => NULL,
      'footer-first' => NULL,
      'footer-seccond' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3e2fa17f-b371-43e2-aa3c-b9bf57408722';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6f2c86e4-1066-4a7b-b811-207d5e26c649';
    $pane->panel = 'content';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
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
    $pane->uuid = '6f2c86e4-1066-4a7b-b811-207d5e26c649';
    $display->content['new-6f2c86e4-1066-4a7b-b811-207d5e26c649'] = $pane;
    $display->panels['content'][0] = 'new-6f2c86e4-1066-4a7b-b811-207d5e26c649';
    $pane = new stdClass();
    $pane->pid = 'new-dd2e1f3e-06aa-409d-908c-448795c0fdb6';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
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
    $pane->uuid = 'dd2e1f3e-06aa-409d-908c-448795c0fdb6';
    $display->content['new-dd2e1f3e-06aa-409d-908c-448795c0fdb6'] = $pane;
    $display->panels['content'][1] = 'new-dd2e1f3e-06aa-409d-908c-448795c0fdb6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_newsletter_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'newsletter';
  $page->task = 'page';
  $page->admin_title = 'Newsletter';
  $page->admin_description = 'Newsletter custom page';
  $page->path = 'newsletter';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Newsletter',
    'name' => 'main-menu',
    'weight' => '22',
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
  $handler->name = 'page_newsletter_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'newsletter';
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
      'logic' => 'and',
    ),
  );
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
      'main_article' => NULL,
      'secondary_article' => NULL,
      'footer_left' => NULL,
      'footer_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6b2f08c8-cc25-4dd3-aff5-828d234f1482';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0cbd4a4c-5a7d-46bc-a005-80ce484f0acf';
    $pane->panel = 'main_article';
    $pane->type = 'views_panes';
    $pane->subtype = 'newsletter-panel_pane_2';
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
    $pane->uuid = '0cbd4a4c-5a7d-46bc-a005-80ce484f0acf';
    $display->content['new-0cbd4a4c-5a7d-46bc-a005-80ce484f0acf'] = $pane;
    $display->panels['main_article'][0] = 'new-0cbd4a4c-5a7d-46bc-a005-80ce484f0acf';
    $pane = new stdClass();
    $pane->pid = 'new-0502b321-397e-494f-9faa-1e677faf0a8c';
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
    $pane->uuid = '0502b321-397e-494f-9faa-1e677faf0a8c';
    $display->content['new-0502b321-397e-494f-9faa-1e677faf0a8c'] = $pane;
    $display->panels['right'][0] = 'new-0502b321-397e-494f-9faa-1e677faf0a8c';
    $pane = new stdClass();
    $pane->pid = 'new-24c4620c-baed-46bd-b2eb-d6388ac54c81';
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
    $pane->uuid = '24c4620c-baed-46bd-b2eb-d6388ac54c81';
    $display->content['new-24c4620c-baed-46bd-b2eb-d6388ac54c81'] = $pane;
    $display->panels['right'][1] = 'new-24c4620c-baed-46bd-b2eb-d6388ac54c81';
    $pane = new stdClass();
    $pane->pid = 'new-d16e1934-3dcc-4558-91ab-734d45db2f33';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'simplenews-32';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Subscribe',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd16e1934-3dcc-4558-91ab-734d45db2f33';
    $display->content['new-d16e1934-3dcc-4558-91ab-734d45db2f33'] = $pane;
    $display->panels['right'][2] = 'new-d16e1934-3dcc-4558-91ab-734d45db2f33';
    $pane = new stdClass();
    $pane->pid = 'new-e1866c78-5692-436b-be72-aeea789a2732';
    $pane->panel = 'secondary_article';
    $pane->type = 'views_panes';
    $pane->subtype = 'newsletter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
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
    $pane->uuid = 'e1866c78-5692-436b-be72-aeea789a2732';
    $display->content['new-e1866c78-5692-436b-be72-aeea789a2732'] = $pane;
    $display->panels['secondary_article'][0] = 'new-e1866c78-5692-436b-be72-aeea789a2732';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['newsletter'] = $page;

  return $pages;

}
