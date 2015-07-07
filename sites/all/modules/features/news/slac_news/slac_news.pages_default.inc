<?php
/**
 * @file
 * slac_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_news_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'SLAC News',
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
              'slac_news' => 'slac_news',
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
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3fd765ba-7520-4d3d-9bb0-1f54517cda41';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7f3f578f-a9c1-4538-9127-bb07a48ace2c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_news_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'media',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'crop_slac_news_image_details',
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
    $pane->uuid = '7f3f578f-a9c1-4538-9127-bb07a48ace2c';
    $display->content['new-7f3f578f-a9c1-4538-9127-bb07a48ace2c'] = $pane;
    $display->panels['left'][0] = 'new-7f3f578f-a9c1-4538-9127-bb07a48ace2c';
    $pane = new stdClass();
    $pane->pid = 'new-0b96f4ec-7659-47e0-a8b6-44562309c099';
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
    $pane->uuid = '0b96f4ec-7659-47e0-a8b6-44562309c099';
    $display->content['new-0b96f4ec-7659-47e0-a8b6-44562309c099'] = $pane;
    $display->panels['left'][1] = 'new-0b96f4ec-7659-47e0-a8b6-44562309c099';
    $pane = new stdClass();
    $pane->pid = 'new-c4467fe0-1797-41ab-a25b-51cf3a741208';
    $pane->panel = 'left_author';
    $pane->type = 'node_author_sp';
    $pane->subtype = 'node_author_sp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'prefix' => 'By',
      'suffix' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'hide_if_anonymous' => 1,
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
    $pane->uuid = 'c4467fe0-1797-41ab-a25b-51cf3a741208';
    $display->content['new-c4467fe0-1797-41ab-a25b-51cf3a741208'] = $pane;
    $display->panels['left_author'][0] = 'new-c4467fe0-1797-41ab-a25b-51cf3a741208';
    $pane = new stdClass();
    $pane->pid = 'new-b76f9884-7e82-48ef-8d14-6803a0ccfac7';
    $pane->panel = 'left_author';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_news_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'slac_news_node_date',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
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
    $pane->uuid = 'b76f9884-7e82-48ef-8d14-6803a0ccfac7';
    $display->content['new-b76f9884-7e82-48ef-8d14-6803a0ccfac7'] = $pane;
    $display->panels['left_author'][1] = 'new-b76f9884-7e82-48ef-8d14-6803a0ccfac7';
    $pane = new stdClass();
    $pane->pid = 'new-32208328-788d-42e1-8bb3-6ad7e3abc8e4';
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
    $pane->uuid = '32208328-788d-42e1-8bb3-6ad7e3abc8e4';
    $display->content['new-32208328-788d-42e1-8bb3-6ad7e3abc8e4'] = $pane;
    $display->panels['left_title'][0] = 'new-32208328-788d-42e1-8bb3-6ad7e3abc8e4';
    $pane = new stdClass();
    $pane->pid = 'new-298e96ea-6428-4d1c-9367-29879046a740';
    $pane->panel = 'right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:1af0e390-0d27-4d3e-8891-dd1bae5b6cd4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = '298e96ea-6428-4d1c-9367-29879046a740';
    $display->content['new-298e96ea-6428-4d1c-9367-29879046a740'] = $pane;
    $display->panels['right'][0] = 'new-298e96ea-6428-4d1c-9367-29879046a740';
    $pane = new stdClass();
    $pane->pid = 'new-5f081420-222e-4079-85f9-7e3037655f1e';
    $pane->panel = 'right';
    $pane->type = 'news_type_menu';
    $pane->subtype = 'news_type_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News By:',
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
    $pane->uuid = '5f081420-222e-4079-85f9-7e3037655f1e';
    $display->content['new-5f081420-222e-4079-85f9-7e3037655f1e'] = $pane;
    $display->panels['right'][1] = 'new-5f081420-222e-4079-85f9-7e3037655f1e';
    $pane = new stdClass();
    $pane->pid = 'new-8bcccf74-b326-4e24-a10e-143fe25c939c';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'TAGS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8bcccf74-b326-4e24-a10e-143fe25c939c';
    $display->content['new-8bcccf74-b326-4e24-a10e-143fe25c939c'] = $pane;
    $display->panels['right'][2] = 'new-8bcccf74-b326-4e24-a10e-143fe25c939c';
    $pane = new stdClass();
    $pane->pid = 'new-660d33bc-e932-4d29-b74e-ba1718000b89';
    $pane->panel = 'right';
    $pane->type = 'news_archive_menu';
    $pane->subtype = 'news_archive_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '660d33bc-e932-4d29-b74e-ba1718000b89';
    $display->content['new-660d33bc-e932-4d29-b74e-ba1718000b89'] = $pane;
    $display->panels['right'][3] = 'new-660d33bc-e932-4d29-b74e-ba1718000b89';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-32208328-788d-42e1-8bb3-6ad7e3abc8e4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_44';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'News Tags',
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
              'slac_news_tags' => 'slac_news_tags',
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
  $display->title = 'News tagged with "%term:name"';
  $display->uuid = 'b09e201c-2200-4b43-8c59-25a40af9a27a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b490f338-b236-4829-b1da-5d91a0ba6c78';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 1,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = 'b490f338-b236-4829-b1da-5d91a0ba6c78';
    $display->content['new-b490f338-b236-4829-b1da-5d91a0ba6c78'] = $pane;
    $display->panels['left'][0] = 'new-b490f338-b236-4829-b1da-5d91a0ba6c78';
    $pane = new stdClass();
    $pane->pid = 'new-8f39a624-8171-4eba-b858-46e1016debb1';
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
    $pane->uuid = '8f39a624-8171-4eba-b858-46e1016debb1';
    $display->content['new-8f39a624-8171-4eba-b858-46e1016debb1'] = $pane;
    $display->panels['left_title'][0] = 'new-8f39a624-8171-4eba-b858-46e1016debb1';
    $pane = new stdClass();
    $pane->pid = 'new-079b27d1-b0aa-488a-a806-d97232f5c0a2';
    $pane->panel = 'right';
    $pane->type = 'news_type_menu';
    $pane->subtype = 'news_type_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News By:',
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
    $pane->uuid = '079b27d1-b0aa-488a-a806-d97232f5c0a2';
    $display->content['new-079b27d1-b0aa-488a-a806-d97232f5c0a2'] = $pane;
    $display->panels['right'][0] = 'new-079b27d1-b0aa-488a-a806-d97232f5c0a2';
    $pane = new stdClass();
    $pane->pid = 'new-0481cad9-cf4b-44de-9c72-ed0124d80972';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'TAGS',
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
    $pane->uuid = '0481cad9-cf4b-44de-9c72-ed0124d80972';
    $display->content['new-0481cad9-cf4b-44de-9c72-ed0124d80972'] = $pane;
    $display->panels['right'][1] = 'new-0481cad9-cf4b-44de-9c72-ed0124d80972';
    $pane = new stdClass();
    $pane->pid = 'new-31b747e3-6916-4294-a082-356c251b4ed9';
    $pane->panel = 'right';
    $pane->type = 'news_archive_menu';
    $pane->subtype = 'news_archive_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News Archive',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '31b747e3-6916-4294-a082-356c251b4ed9';
    $display->content['new-31b747e3-6916-4294-a082-356c251b4ed9'] = $pane;
    $display->panels['right'][2] = 'new-31b747e3-6916-4294-a082-356c251b4ed9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_44'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_a_new_news_item';
  $page->task = 'page';
  $page->admin_title = 'Add a news item or press release.';
  $page->admin_description = '';
  $page->path = 'node/%node/add-new-news';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
            1 => 3,
            2 => 5,
            3 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'News and Press Releases',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add News Item',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_add_a_new_news_item_http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_a_new_news_item';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/slac-news',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_a_new_news_item'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_by_types';
  $page->task = 'page';
  $page->admin_title = 'News by types';
  $page->admin_description = '';
  $page->path = 'news/%type';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'type' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          7 => '7',
          1 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          5 => 0,
          6 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          8 => 0,
        ),
        'vocabularies' => array(
          'news_types' => 'news_types',
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_by_types_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_by_types';
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
      'plugins' => array(),
    ),
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
      'social_media_1' => NULL,
      'social_media_2' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%type:name';
  $display->uuid = '2e216ed9-8608-472d-b85f-cfd92a0c7ee9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a3e34a3-6b94-4f17-ada3-ab76e1097111';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
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
    $pane->uuid = '3a3e34a3-6b94-4f17-ada3-ab76e1097111';
    $display->content['new-3a3e34a3-6b94-4f17-ada3-ab76e1097111'] = $pane;
    $display->panels['left'][0] = 'new-3a3e34a3-6b94-4f17-ada3-ab76e1097111';
    $pane = new stdClass();
    $pane->pid = 'new-3002384a-12eb-46a6-8aa2-536f0a9fc210';
    $pane->panel = 'left_title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Term name',
      'title' => '',
      'body' => '<div class="panel-pane pane-node-title">
  <h2 class="pane-title">%type:name</h2>
 </div>
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
    $pane->uuid = '3002384a-12eb-46a6-8aa2-536f0a9fc210';
    $display->content['new-3002384a-12eb-46a6-8aa2-536f0a9fc210'] = $pane;
    $display->panels['left_title'][0] = 'new-3002384a-12eb-46a6-8aa2-536f0a9fc210';
    $pane = new stdClass();
    $pane->pid = 'new-c51c66b7-5e00-4b59-ba43-dd69e47f0f48';
    $pane->panel = 'right';
    $pane->type = 'news_type_menu';
    $pane->subtype = 'news_type_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News By:',
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
    $pane->uuid = 'c51c66b7-5e00-4b59-ba43-dd69e47f0f48';
    $display->content['new-c51c66b7-5e00-4b59-ba43-dd69e47f0f48'] = $pane;
    $display->panels['right'][0] = 'new-c51c66b7-5e00-4b59-ba43-dd69e47f0f48';
    $pane = new stdClass();
    $pane->pid = 'new-5c4166c1-cce1-45c7-b73a-4c2950408cca';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'TAGS',
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
    $pane->uuid = '5c4166c1-cce1-45c7-b73a-4c2950408cca';
    $display->content['new-5c4166c1-cce1-45c7-b73a-4c2950408cca'] = $pane;
    $display->panels['right'][1] = 'new-5c4166c1-cce1-45c7-b73a-4c2950408cca';
    $pane = new stdClass();
    $pane->pid = 'new-93af0317-f019-4a98-9e55-0b8804457661';
    $pane->panel = 'right';
    $pane->type = 'news_archive_menu';
    $pane->subtype = 'news_archive_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '93af0317-f019-4a98-9e55-0b8804457661';
    $display->content['new-93af0317-f019-4a98-9e55-0b8804457661'] = $pane;
    $display->panels['right'][2] = 'new-93af0317-f019-4a98-9e55-0b8804457661';
    $pane = new stdClass();
    $pane->pid = 'new-46fd13f7-dcf8-4d3e-b47d-578be418ec60';
    $pane->panel = 'social_media_1';
    $pane->type = 'views_feed_pane';
    $pane->subtype = 'news:feed_1';
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
    $pane->uuid = '46fd13f7-dcf8-4d3e-b47d-578be418ec60';
    $display->content['new-46fd13f7-dcf8-4d3e-b47d-578be418ec60'] = $pane;
    $display->panels['social_media_1'][0] = 'new-46fd13f7-dcf8-4d3e-b47d-578be418ec60';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3002384a-12eb-46a6-8aa2-536f0a9fc210';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_by_types'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_by_year';
  $page->task = 'page';
  $page->admin_title = 'News by year';
  $page->admin_description = 'Displays news by year';
  $page->path = 'news/archive/%year/!month';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'year' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'String 2',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_by_year_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_by_year';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'Year/Month',
        'keyword' => 'year_month',
        'name' => 'year_month',
        'id' => 1,
        'year' => '2',
        'month' => '3',
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (is_numeric($contexts[\'argument_string_1\']->data) && strlen($contexts[\'argument_string_1\']->data) == 4) {
if (isset($contexts[\'argument_string_2\']->data)) {
 if (strlen($contexts[\'argument_string_2\']->data) == 2) {
   if ($contexts[\'argument_string_2\']->data <= 12 && $contexts[\'argument_string_2\']->data >= 1) {
     return TRUE;
}
else {return FALSE;}
}
else {return FALSE;}
}
  return TRUE;
} ',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News Archive';
  $display->uuid = 'c63e0019-7e81-4ae1-a10d-b068704fece5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4fc8cc51-ebfb-4519-a481-0c6289a609d6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'context' => array(
        0 => 'context_year_month_1',
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
    $pane->uuid = '4fc8cc51-ebfb-4519-a481-0c6289a609d6';
    $display->content['new-4fc8cc51-ebfb-4519-a481-0c6289a609d6'] = $pane;
    $display->panels['left'][0] = 'new-4fc8cc51-ebfb-4519-a481-0c6289a609d6';
    $pane = new stdClass();
    $pane->pid = 'new-8bc3b9c7-de1f-43ef-a113-4be4a494f19a';
    $pane->panel = 'right';
    $pane->type = 'news_type_menu';
    $pane->subtype = 'news_type_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News By:',
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
    $pane->uuid = '8bc3b9c7-de1f-43ef-a113-4be4a494f19a';
    $display->content['new-8bc3b9c7-de1f-43ef-a113-4be4a494f19a'] = $pane;
    $display->panels['right'][0] = 'new-8bc3b9c7-de1f-43ef-a113-4be4a494f19a';
    $pane = new stdClass();
    $pane->pid = 'new-e4b79a1a-c5e5-448f-9d23-73a9c2e5d2d0';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'TAGS',
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
    $pane->uuid = 'e4b79a1a-c5e5-448f-9d23-73a9c2e5d2d0';
    $display->content['new-e4b79a1a-c5e5-448f-9d23-73a9c2e5d2d0'] = $pane;
    $display->panels['right'][1] = 'new-e4b79a1a-c5e5-448f-9d23-73a9c2e5d2d0';
    $pane = new stdClass();
    $pane->pid = 'new-ece462c9-ed9c-4680-b149-a80482e015b5';
    $pane->panel = 'right';
    $pane->type = 'news_archive_menu';
    $pane->subtype = 'news_archive_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ece462c9-ed9c-4680-b149-a80482e015b5';
    $display->content['new-ece462c9-ed9c-4680-b149-a80482e015b5'] = $pane;
    $display->panels['right'][2] = 'new-ece462c9-ed9c-4680-b149-a80482e015b5';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-4fc8cc51-ebfb-4519-a481-0c6289a609d6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_by_year'] = $page;

  return $pages;

}
