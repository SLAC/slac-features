<?php
/**
 * @file
 * slac_wiki.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_wiki_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'SLAC Wiki',
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
              'wiki_page' => 'wiki_page',
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.91914477328713',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'Right Side',
        'width' => '30.08085522671287',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1cc21f1c-c5f1-4269-abbb-2f6063a3f49f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a66bad82-d34b-4d1d-a5d2-a9f9edb9e466';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a66bad82-d34b-4d1d-a5d2-a9f9edb9e466';
    $display->content['new-a66bad82-d34b-4d1d-a5d2-a9f9edb9e466'] = $pane;
    $display->panels['left'][0] = 'new-a66bad82-d34b-4d1d-a5d2-a9f9edb9e466';
    $pane = new stdClass();
    $pane->pid = 'new-6891e65b-9363-42e0-b2f2-cfcf39337569';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_wiki_attachment';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_table',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6891e65b-9363-42e0-b2f2-cfcf39337569';
    $display->content['new-6891e65b-9363-42e0-b2f2-cfcf39337569'] = $pane;
    $display->panels['left'][1] = 'new-6891e65b-9363-42e0-b2f2-cfcf39337569';
    $pane = new stdClass();
    $pane->pid = 'new-2ca9aece-708d-4c29-8a54-5b6cdecef5cc';
    $pane->panel = 'left_author';
    $pane->type = 'node_author_sp';
    $pane->subtype = 'node_author_sp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'prefix' => 'Submitted by',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ca9aece-708d-4c29-8a54-5b6cdecef5cc';
    $display->content['new-2ca9aece-708d-4c29-8a54-5b6cdecef5cc'] = $pane;
    $display->panels['left_author'][0] = 'new-2ca9aece-708d-4c29-8a54-5b6cdecef5cc';
    $pane = new stdClass();
    $pane->pid = 'new-6ed861fb-b9bc-4392-a17c-e92e90932521';
    $pane->panel = 'left_author';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
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
    $pane->uuid = '6ed861fb-b9bc-4392-a17c-e92e90932521';
    $display->content['new-6ed861fb-b9bc-4392-a17c-e92e90932521'] = $pane;
    $display->panels['left_author'][1] = 'new-6ed861fb-b9bc-4392-a17c-e92e90932521';
    $pane = new stdClass();
    $pane->pid = 'new-acdc666c-20f4-4a08-adc0-d0c290a6f0e2';
    $pane->panel = 'left_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '%node:title 1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acdc666c-20f4-4a08-adc0-d0c290a6f0e2';
    $display->content['new-acdc666c-20f4-4a08-adc0-d0c290a6f0e2'] = $pane;
    $display->panels['left_title'][0] = 'new-acdc666c-20f4-4a08-adc0-d0c290a6f0e2';
    $pane = new stdClass();
    $pane->pid = 'new-09275b41-06a5-40cd-877f-6f77d665794a';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-slac-wiki';
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
    $pane->uuid = '09275b41-06a5-40cd-877f-6f77d665794a';
    $display->content['new-09275b41-06a5-40cd-877f-6f77d665794a'] = $pane;
    $display->panels['right'][0] = 'new-09275b41-06a5-40cd-877f-6f77d665794a';
    $pane = new stdClass();
    $pane->pid = 'new-29bcca0f-33ba-4d8c-989c-48066bc23a1c';
    $pane->panel = 'right';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '9',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '29bcca0f-33ba-4d8c-989c-48066bc23a1c';
    $display->content['new-29bcca0f-33ba-4d8c-989c-48066bc23a1c'] = $pane;
    $display->panels['right'][1] = 'new-29bcca0f-33ba-4d8c-989c-48066bc23a1c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-acdc666c-20f4-4a08-adc0-d0c290a6f0e2';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Wiki Tags',
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
              'slac_wiki_tags' => 'slac_wiki_tags',
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
  $display->layout = 'two_col_article';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.91914477328713',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'Right Side',
        'width' => '30.08085522671287',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7708162f-f90b-4a73-ba54-fe390512a172';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5268c1e2-7912-4baa-9a84-9a6b19420aff';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'wiki-panel_pane_2';
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
    $pane->uuid = '5268c1e2-7912-4baa-9a84-9a6b19420aff';
    $display->content['new-5268c1e2-7912-4baa-9a84-9a6b19420aff'] = $pane;
    $display->panels['left'][0] = 'new-5268c1e2-7912-4baa-9a84-9a6b19420aff';
    $pane = new stdClass();
    $pane->pid = 'new-464ffd06-8002-485d-95b3-afcd1d8accfd';
    $pane->panel = 'left_title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page title',
      'title' => '',
      'body' => '<h2 class="pane-title">Wiki pages tagged with "%term:name"</h2>
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
    $pane->uuid = '464ffd06-8002-485d-95b3-afcd1d8accfd';
    $display->content['new-464ffd06-8002-485d-95b3-afcd1d8accfd'] = $pane;
    $display->panels['left_title'][0] = 'new-464ffd06-8002-485d-95b3-afcd1d8accfd';
    $pane = new stdClass();
    $pane->pid = 'new-c7c32a17-4c10-406d-8b87-c8de67808d3f';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-slac-wiki';
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
    $pane->uuid = 'c7c32a17-4c10-406d-8b87-c8de67808d3f';
    $display->content['new-c7c32a17-4c10-406d-8b87-c8de67808d3f'] = $pane;
    $display->panels['right'][0] = 'new-c7c32a17-4c10-406d-8b87-c8de67808d3f';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-464ffd06-8002-485d-95b3-afcd1d8accfd';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_wiki_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_new_wiki_page';
  $page->task = 'page';
  $page->admin_title = 'Add new Wiki page';
  $page->admin_description = '';
  $page->path = 'wiki/add-wiki-page';
  $page->access = array(
    'logic' => 'and',
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
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add new Wiki page',
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
  $handler->name = 'page_add_new_wiki_page_http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_new_wiki_page';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/wiki-page',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_new_wiki_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'slac_wiki_search';
  $page->task = 'page';
  $page->admin_title = 'Wiki Search';
  $page->admin_description = 'Wiki search page that allows to find different wiki pages';
  $page->path = 'wiki/search';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Search wiki pages',
    'name' => 'menu-slac-wiki',
    'weight' => '3',
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
  $handler->name = 'page_slac_wiki_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'slac_wiki_search';
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
      'center' => NULL,
      'right' => NULL,
      'left' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search Wiki';
  $display->uuid = '6c7c0c25-4a65-4dad-a125-5acebaf512a1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f6042a01-d23d-48d6-8379-833f7dc862f6';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-wiki-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $pane->uuid = 'f6042a01-d23d-48d6-8379-833f7dc862f6';
    $display->content['new-f6042a01-d23d-48d6-8379-833f7dc862f6'] = $pane;
    $display->panels['left'][0] = 'new-f6042a01-d23d-48d6-8379-833f7dc862f6';
    $pane = new stdClass();
    $pane->pid = 'new-16be1a29-d965-4147-b66d-a9eb1b1b35bc';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'wiki-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '16be1a29-d965-4147-b66d-a9eb1b1b35bc';
    $display->content['new-16be1a29-d965-4147-b66d-a9eb1b1b35bc'] = $pane;
    $display->panels['left'][1] = 'new-16be1a29-d965-4147-b66d-a9eb1b1b35bc';
    $pane = new stdClass();
    $pane->pid = 'new-a029ddbe-86d4-4277-be85-d09584f62dda';
    $pane->panel = 'left_title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Search Wiki title',
      'title' => '',
      'body' => '<h2 class="pane-title">Search Wiki</h2>',
      'format' => 'full_html',
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
    $pane->uuid = 'a029ddbe-86d4-4277-be85-d09584f62dda';
    $display->content['new-a029ddbe-86d4-4277-be85-d09584f62dda'] = $pane;
    $display->panels['left_title'][0] = 'new-a029ddbe-86d4-4277-be85-d09584f62dda';
    $pane = new stdClass();
    $pane->pid = 'new-1ab4bc7b-b53d-4d6a-87a6-58ae931ff9e0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-slac-wiki';
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
    $pane->uuid = '1ab4bc7b-b53d-4d6a-87a6-58ae931ff9e0';
    $display->content['new-1ab4bc7b-b53d-4d6a-87a6-58ae931ff9e0'] = $pane;
    $display->panels['right'][0] = 'new-1ab4bc7b-b53d-4d6a-87a6-58ae931ff9e0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-16be1a29-d965-4147-b66d-a9eb1b1b35bc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['slac_wiki_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wiki_a_z';
  $page->task = 'page';
  $page->admin_title = 'Wiki A-Z';
  $page->admin_description = 'An a to z listing of all the wiki pages';
  $page->path = 'wiki';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Wiki',
    'name' => 'main-menu',
    'weight' => '3',
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
  $handler->name = 'page_wiki_a_z_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'wiki_a_z';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Wiki',
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
      'right' => NULL,
      'center' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Wiki pages A-Z';
  $display->uuid = '2814cc39-5edd-4438-8110-4ec3eaf1fb4f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6ce7f61b-e663-476b-aaac-5892da439cf4';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'wiki';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '6ce7f61b-e663-476b-aaac-5892da439cf4';
    $display->content['new-6ce7f61b-e663-476b-aaac-5892da439cf4'] = $pane;
    $display->panels['left'][0] = 'new-6ce7f61b-e663-476b-aaac-5892da439cf4';
    $pane = new stdClass();
    $pane->pid = 'new-3e21a5f3-3b98-4965-a719-6ee72204e13e';
    $pane->panel = 'left_title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Wiki pages title',
      'title' => '',
      'body' => '<h2 class="pane-title">Wiki pages A-Z</h2>
',
      'format' => 'full_html',
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
    $pane->uuid = '3e21a5f3-3b98-4965-a719-6ee72204e13e';
    $display->content['new-3e21a5f3-3b98-4965-a719-6ee72204e13e'] = $pane;
    $display->panels['left_title'][0] = 'new-3e21a5f3-3b98-4965-a719-6ee72204e13e';
    $pane = new stdClass();
    $pane->pid = 'new-ac5b8155-5dc2-430b-9b04-8f3fab921037';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-slac-wiki';
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
    $pane->uuid = 'ac5b8155-5dc2-430b-9b04-8f3fab921037';
    $display->content['new-ac5b8155-5dc2-430b-9b04-8f3fab921037'] = $pane;
    $display->panels['right'][0] = 'new-ac5b8155-5dc2-430b-9b04-8f3fab921037';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6ce7f61b-e663-476b-aaac-5892da439cf4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wiki_a_z'] = $page;

  return $pages;

}
