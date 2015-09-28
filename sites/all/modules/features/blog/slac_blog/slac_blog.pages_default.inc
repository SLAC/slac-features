<?php
/**
 * @file
 * slac_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_panel_context';
  $handler->task = 'blog';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'sass' => array(
      'custom.user.mobile' => array(
        'columns' => '1',
        'gutter' => '0',
        'debug' => 0,
      ),
      'custom.user.desktop' => array(
        'columns' => '12',
        'gutter' => '10',
        'debug' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col';
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
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'middle' => array(
      'style' => 'sass',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '046d8cbc-4222-4f87-b140-c30991b3ceca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ce09ab70-8bc1-4b52-ba30-9eff93c284af';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'blog_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = 'ce09ab70-8bc1-4b52-ba30-9eff93c284af';
    $display->content['new-ce09ab70-8bc1-4b52-ba30-9eff93c284af'] = $pane;
    $display->panels['left'][0] = 'new-ce09ab70-8bc1-4b52-ba30-9eff93c284af';
    $pane = new stdClass();
    $pane->pid = 'new-a3d6ca15-4e37-471a-b223-f03f4468b4b1';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3d6ca15-4e37-471a-b223-f03f4468b4b1';
    $display->content['new-a3d6ca15-4e37-471a-b223-f03f4468b4b1'] = $pane;
    $display->panels['right'][0] = 'new-a3d6ca15-4e37-471a-b223-f03f4468b4b1';
    $pane = new stdClass();
    $pane->pid = 'new-284a9b4e-abf4-4f11-8bc2-f27587735861';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'blog_tags';
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
    $pane->uuid = '284a9b4e-abf4-4f11-8bc2-f27587735861';
    $display->content['new-284a9b4e-abf4-4f11-8bc2-f27587735861'] = $pane;
    $display->panels['right'][1] = 'new-284a9b4e-abf4-4f11-8bc2-f27587735861';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_user_panel_context';
  $handler->task = 'blog_user';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Blog',
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
  $display->layout = 'two_col';
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
    ),
  );
  $display->cache = array();
  $display->title = '%user:field_first_name %user:field_last_name';
  $display->uuid = '3d8a4252-8e33-4d70-b849-55b9ac590388';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-91d8e10e-2339-48a0-b390-5d6700af76f7';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'blog_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => '',
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
    $pane->uuid = '91d8e10e-2339-48a0-b390-5d6700af76f7';
    $display->content['new-91d8e10e-2339-48a0-b390-5d6700af76f7'] = $pane;
    $display->panels['left'][0] = 'new-91d8e10e-2339-48a0-b390-5d6700af76f7';
    $pane = new stdClass();
    $pane->pid = 'new-067ae0cf-c803-4457-a881-f3ad6854a9be';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '067ae0cf-c803-4457-a881-f3ad6854a9be';
    $display->content['new-067ae0cf-c803-4457-a881-f3ad6854a9be'] = $pane;
    $display->panels['right'][0] = 'new-067ae0cf-c803-4457-a881-f3ad6854a9be';
    $pane = new stdClass();
    $pane->pid = 'new-64e1b15d-be09-4a84-a5be-698477f37c18';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'blog_tags';
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
    $pane->uuid = '64e1b15d-be09-4a84-a5be-698477f37c18';
    $display->content['new-64e1b15d-be09-4a84-a5be-698477f37c18'] = $pane;
    $display->panels['right'][1] = 'new-64e1b15d-be09-4a84-a5be-698477f37c18';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog_user_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Article Blog Page',
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
              'blog' => 'blog',
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
  $display->uuid = 'c5afcd97-9223-478f-9f24-0d0e7a67ef88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-42ae04d3-0279-442b-b261-f8b5e825d0be';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_blog_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'slac_blog_image_details',
        'image_link' => '',
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
    $pane->uuid = '42ae04d3-0279-442b-b261-f8b5e825d0be';
    $display->content['new-42ae04d3-0279-442b-b261-f8b5e825d0be'] = $pane;
    $display->panels['left'][0] = 'new-42ae04d3-0279-442b-b261-f8b5e825d0be';
    $pane = new stdClass();
    $pane->pid = 'new-56a65613-d06f-4602-98e6-ef20515d2735';
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
    $pane->uuid = '56a65613-d06f-4602-98e6-ef20515d2735';
    $display->content['new-56a65613-d06f-4602-98e6-ef20515d2735'] = $pane;
    $display->panels['left'][1] = 'new-56a65613-d06f-4602-98e6-ef20515d2735';
    $pane = new stdClass();
    $pane->pid = 'new-3cbffa2f-5d44-4285-bfc4-637240abf71e';
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
    $pane->uuid = '3cbffa2f-5d44-4285-bfc4-637240abf71e';
    $display->content['new-3cbffa2f-5d44-4285-bfc4-637240abf71e'] = $pane;
    $display->panels['left_author'][0] = 'new-3cbffa2f-5d44-4285-bfc4-637240abf71e';
    $pane = new stdClass();
    $pane->pid = 'new-91595863-b978-4c34-84cd-39204efdc7fd';
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
    $pane->uuid = '91595863-b978-4c34-84cd-39204efdc7fd';
    $display->content['new-91595863-b978-4c34-84cd-39204efdc7fd'] = $pane;
    $display->panels['left_author'][1] = 'new-91595863-b978-4c34-84cd-39204efdc7fd';
    $pane = new stdClass();
    $pane->pid = 'new-eb50f20b-fe75-40b4-a8fc-f7a7cae9d85e';
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
    $pane->uuid = 'eb50f20b-fe75-40b4-a8fc-f7a7cae9d85e';
    $display->content['new-eb50f20b-fe75-40b4-a8fc-f7a7cae9d85e'] = $pane;
    $display->panels['left_title'][0] = 'new-eb50f20b-fe75-40b4-a8fc-f7a7cae9d85e';
    $pane = new stdClass();
    $pane->pid = 'new-37e39cce-53b8-4fcc-a52f-7c6c7a0a61a8';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '37e39cce-53b8-4fcc-a52f-7c6c7a0a61a8';
    $display->content['new-37e39cce-53b8-4fcc-a52f-7c6c7a0a61a8'] = $pane;
    $display->panels['right'][0] = 'new-37e39cce-53b8-4fcc-a52f-7c6c7a0a61a8';
    $pane = new stdClass();
    $pane->pid = 'new-3b1e56c8-650c-4876-aa76-0c685f0eb686';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->uuid = '3b1e56c8-650c-4876-aa76-0c685f0eb686';
    $display->content['new-3b1e56c8-650c-4876-aa76-0c685f0eb686'] = $pane;
    $display->panels['right'][1] = 'new-3b1e56c8-650c-4876-aa76-0c685f0eb686';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-eb50f20b-fe75-40b4-a8fc-f7a7cae9d85e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Blog Tags',
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
              'slac_blog_tags' => 'slac_blog_tags',
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
  $display->layout = 'two_col';
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1583cb1-ced7-4e82-8493-8c10a14b0f16';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc8942a8-78e4-4b96-8501-1a633f4e765f';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'blog_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 1,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Posts tagged with "%term:name"',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc8942a8-78e4-4b96-8501-1a633f4e765f';
    $display->content['new-bc8942a8-78e4-4b96-8501-1a633f4e765f'] = $pane;
    $display->panels['left'][0] = 'new-bc8942a8-78e4-4b96-8501-1a633f4e765f';
    $pane = new stdClass();
    $pane->pid = 'new-eeb17e36-b401-4144-b536-42d553c046b8';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eeb17e36-b401-4144-b536-42d553c046b8';
    $display->content['new-eeb17e36-b401-4144-b536-42d553c046b8'] = $pane;
    $display->panels['right'][0] = 'new-eeb17e36-b401-4144-b536-42d553c046b8';
    $pane = new stdClass();
    $pane->pid = 'new-8a38a605-8cd0-4738-8135-56e1464b9bb1';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_tags-panel_pane_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a38a605-8cd0-4738-8135-56e1464b9bb1';
    $display->content['new-8a38a605-8cd0-4738-8135-56e1464b9bb1'] = $pane;
    $display->panels['right'][1] = 'new-8a38a605-8cd0-4738-8135-56e1464b9bb1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-bc8942a8-78e4-4b96-8501-1a633f4e765f';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_a_new_blog_post_';
  $page->task = 'page';
  $page->admin_title = 'Add a new blog post.';
  $page->admin_description = '';
  $page->path = 'node/%node/add-blog-post';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
            1 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'Blog Posts',
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
    'title' => 'New Blog Post',
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
  $handler->name = 'page_add_a_new_blog_post__http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_a_new_blog_post_';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/blog',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_a_new_blog_post_'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_archive';
  $page->task = 'page';
  $page->admin_title = 'Blog Archive';
  $page->admin_description = '';
  $page->path = 'blog/archive';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_archive_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'blog_archive';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Blog Archive Year',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ccf6752-2f4a-447e-b9ef-b22b492f59b7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4fc85674-b595-4326-9e5e-aa71107471a3';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'blog_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
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
    $pane->uuid = '4fc85674-b595-4326-9e5e-aa71107471a3';
    $display->content['new-4fc85674-b595-4326-9e5e-aa71107471a3'] = $pane;
    $display->panels['left'][0] = 'new-4fc85674-b595-4326-9e5e-aa71107471a3';
    $pane = new stdClass();
    $pane->pid = 'new-beed52f0-5252-4da8-95a5-6858361ec5a5';
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
    $pane->uuid = 'beed52f0-5252-4da8-95a5-6858361ec5a5';
    $display->content['new-beed52f0-5252-4da8-95a5-6858361ec5a5'] = $pane;
    $display->panels['left_title'][0] = 'new-beed52f0-5252-4da8-95a5-6858361ec5a5';
    $pane = new stdClass();
    $pane->pid = 'new-87605b5a-2fff-4b10-982e-257919af59ab';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87605b5a-2fff-4b10-982e-257919af59ab';
    $display->content['new-87605b5a-2fff-4b10-982e-257919af59ab'] = $pane;
    $display->panels['right'][0] = 'new-87605b5a-2fff-4b10-982e-257919af59ab';
    $pane = new stdClass();
    $pane->pid = 'new-8a50440f-a891-47f2-86ae-2ea47788ff53';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_tags-panel_pane_1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a50440f-a891-47f2-86ae-2ea47788ff53';
    $display->content['new-8a50440f-a891-47f2-86ae-2ea47788ff53'] = $pane;
    $display->panels['right'][1] = 'new-8a50440f-a891-47f2-86ae-2ea47788ff53';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-4fc85674-b595-4326-9e5e-aa71107471a3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_archive'] = $page;

  return $pages;

}
