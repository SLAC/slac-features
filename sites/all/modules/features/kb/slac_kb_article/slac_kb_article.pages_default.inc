<?php
/**
 * @file
 * slac_kb_article.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_kb_article_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'KB Article',
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
              'kb_article' => 'kb_article',
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
  $display->layout = 'two_col_article';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '743e18f5-e3da-40bc-b02a-36f28758c709';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4681d2b9-35cc-46af-a0c7-57da1fc5a87e';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_kb_article_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'media',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'crop_slac_kb_article_image_details',
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
    $pane->uuid = '4681d2b9-35cc-46af-a0c7-57da1fc5a87e';
    $display->content['new-4681d2b9-35cc-46af-a0c7-57da1fc5a87e'] = $pane;
    $display->panels['left'][0] = 'new-4681d2b9-35cc-46af-a0c7-57da1fc5a87e';
    $pane = new stdClass();
    $pane->pid = 'new-9f14d801-eff5-4c26-a909-949c39a2a851';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9f14d801-eff5-4c26-a909-949c39a2a851';
    $display->content['new-9f14d801-eff5-4c26-a909-949c39a2a851'] = $pane;
    $display->panels['left'][1] = 'new-9f14d801-eff5-4c26-a909-949c39a2a851';
    $pane = new stdClass();
    $pane->pid = 'new-0c49231c-098a-418a-b58a-0965f4ca49a1';
    $pane->panel = 'left_author';
    $pane->type = 'node_author_sp';
    $pane->subtype = 'node_author_sp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'prefix' => 'By',
      'suffix' => '',
      'hide_if_anonymous' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'author',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c49231c-098a-418a-b58a-0965f4ca49a1';
    $display->content['new-0c49231c-098a-418a-b58a-0965f4ca49a1'] = $pane;
    $display->panels['left_author'][0] = 'new-0c49231c-098a-418a-b58a-0965f4ca49a1';
    $pane = new stdClass();
    $pane->pid = 'new-f63527b3-0194-49db-998e-f18fdf9cdb44';
    $pane->panel = 'left_author';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'kb_month_day_year',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f63527b3-0194-49db-998e-f18fdf9cdb44';
    $display->content['new-f63527b3-0194-49db-998e-f18fdf9cdb44'] = $pane;
    $display->panels['left_author'][1] = 'new-f63527b3-0194-49db-998e-f18fdf9cdb44';
    $pane = new stdClass();
    $pane->pid = 'new-2e697116-3136-4d59-9f25-0cfd0b881df5';
    $pane->panel = 'left_title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
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
    $pane->uuid = '2e697116-3136-4d59-9f25-0cfd0b881df5';
    $display->content['new-2e697116-3136-4d59-9f25-0cfd0b881df5'] = $pane;
    $display->panels['left_title'][0] = 'new-2e697116-3136-4d59-9f25-0cfd0b881df5';
    $pane = new stdClass();
    $pane->pid = 'new-dd308ef7-0258-40d7-a1cb-8b24b41256ba';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'kb_articles-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dd308ef7-0258-40d7-a1cb-8b24b41256ba';
    $display->content['new-dd308ef7-0258-40d7-a1cb-8b24b41256ba'] = $pane;
    $display->panels['right'][0] = 'new-dd308ef7-0258-40d7-a1cb-8b24b41256ba';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-2e697116-3136-4d59-9f25-0cfd0b881df5';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'KB Categories',
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
            'vids' => array(
              7 => '7',
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
  $display->layout = 'twocol';
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
  $display->uuid = '40852618-00e6-4a34-b090-1b48946c97fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-105d72d3-569a-443f-ae8a-d89b63eba7a3';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'kb_articles-panel_pane_1';
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
    $pane->uuid = '105d72d3-569a-443f-ae8a-d89b63eba7a3';
    $display->content['new-105d72d3-569a-443f-ae8a-d89b63eba7a3'] = $pane;
    $display->panels['left'][0] = 'new-105d72d3-569a-443f-ae8a-d89b63eba7a3';
    $pane = new stdClass();
    $pane->pid = 'new-8b54073e-40c0-4752-8b9d-fa25afcb6740';
    $pane->panel = 'right';
    $pane->type = 'taxonomy_terms';
    $pane->subtype = 'taxonomy_terms';
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
    $pane->uuid = '8b54073e-40c0-4752-8b9d-fa25afcb6740';
    $display->content['new-8b54073e-40c0-4752-8b9d-fa25afcb6740'] = $pane;
    $display->panels['right'][0] = 'new-8b54073e-40c0-4752-8b9d-fa25afcb6740';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_kb_article_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_new_knowledge_base_article';
  $page->task = 'page';
  $page->admin_title = 'Add new knowledge base article';
  $page->admin_description = '';
  $page->path = 'kb/new-kb-article';
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
    'title' => 'Add New KB Article',
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
  $handler->name = 'page_add_new_knowledge_base_article_http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_new_knowledge_base_article';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/kb-article',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_new_knowledge_base_article'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'kb_articles';
  $page->task = 'page';
  $page->admin_title = 'KB Articles';
  $page->admin_description = '';
  $page->path = 'kb/!term_name';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Knowledge base',
    'name' => 'main-menu',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term_name' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
      'keyword' => 'term_name',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_kb_articles_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'kb_articles';
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
  $display->layout = 'two_col_article';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'right' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Knowledge Base Articles';
  $display->uuid = 'c98be6d2-4111-41b4-a142-492d92d3484b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b782fc2e-1952-4cb4-a97f-f52bf7db5aec';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'kb_articles-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->uuid = 'b782fc2e-1952-4cb4-a97f-f52bf7db5aec';
    $display->content['new-b782fc2e-1952-4cb4-a97f-f52bf7db5aec'] = $pane;
    $display->panels['left'][0] = 'new-b782fc2e-1952-4cb4-a97f-f52bf7db5aec';
    $pane = new stdClass();
    $pane->pid = 'new-057adb86-2dcc-4410-8d66-71b98acedee3';
    $pane->panel = 'left_title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'title',
      'title' => '',
      'body' => '<h2 class="pane-title">Knowledge Base Articles</h2>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '057adb86-2dcc-4410-8d66-71b98acedee3';
    $display->content['new-057adb86-2dcc-4410-8d66-71b98acedee3'] = $pane;
    $display->panels['left_title'][0] = 'new-057adb86-2dcc-4410-8d66-71b98acedee3';
    $pane = new stdClass();
    $pane->pid = 'new-f35ca34e-2e4b-4717-a3aa-90cb4ff4f15e';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'kb_articles-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f35ca34e-2e4b-4717-a3aa-90cb4ff4f15e';
    $display->content['new-f35ca34e-2e4b-4717-a3aa-90cb4ff4f15e'] = $pane;
    $display->panels['right'][0] = 'new-f35ca34e-2e4b-4717-a3aa-90cb4ff4f15e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-057adb86-2dcc-4410-8d66-71b98acedee3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['kb_articles'] = $page;

  return $pages;

}
