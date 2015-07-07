<?php
/**
 * @file
 * slac_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_faq_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_88';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'FAQ',
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
              'faq' => 'faq',
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
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3c14fb38-b444-444c-b55e-3f6e91172011';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a2c3befc-4984-4db7-8169-786d5c996167';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_question_details';
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
      'override_title_text' => 'Question details',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2c3befc-4984-4db7-8169-786d5c996167';
    $display->content['new-a2c3befc-4984-4db7-8169-786d5c996167'] = $pane;
    $display->panels['left'][0] = 'new-a2c3befc-4984-4db7-8169-786d5c996167';
    $pane = new stdClass();
    $pane->pid = 'new-9eb7a8dd-5cfb-40a9-a62d-a3c6cf37c138';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Answer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9eb7a8dd-5cfb-40a9-a62d-a3c6cf37c138';
    $display->content['new-9eb7a8dd-5cfb-40a9-a62d-a3c6cf37c138'] = $pane;
    $display->panels['left'][1] = 'new-9eb7a8dd-5cfb-40a9-a62d-a3c6cf37c138';
    $pane = new stdClass();
    $pane->pid = 'new-f419be4d-82aa-44e9-91ef-74cf65cc979e';
    $pane->panel = 'left';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f419be4d-82aa-44e9-91ef-74cf65cc979e';
    $display->content['new-f419be4d-82aa-44e9-91ef-74cf65cc979e'] = $pane;
    $display->panels['left'][2] = 'new-f419be4d-82aa-44e9-91ef-74cf65cc979e';
    $pane = new stdClass();
    $pane->pid = 'new-82893704-2842-4f8b-8a66-67aec518e7f7';
    $pane->panel = 'left';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '82893704-2842-4f8b-8a66-67aec518e7f7';
    $display->content['new-82893704-2842-4f8b-8a66-67aec518e7f7'] = $pane;
    $display->panels['left'][3] = 'new-82893704-2842-4f8b-8a66-67aec518e7f7';
    $pane = new stdClass();
    $pane->pid = 'new-4693856c-24f7-4088-8ae1-6a4feaa82899';
    $pane->panel = 'left_author';
    $pane->type = 'node_author_sp';
    $pane->subtype = 'node_author_sp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'prefix' => 'Submitted by',
      'suffix' => '',
      'hide_if_anonymous' => 0,
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
    $pane->uuid = '4693856c-24f7-4088-8ae1-6a4feaa82899';
    $display->content['new-4693856c-24f7-4088-8ae1-6a4feaa82899'] = $pane;
    $display->panels['left_author'][0] = 'new-4693856c-24f7-4088-8ae1-6a4feaa82899';
    $pane = new stdClass();
    $pane->pid = 'new-df9ebde2-3d4e-47bd-947c-12c9fd7b5ded';
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
    $pane->uuid = 'df9ebde2-3d4e-47bd-947c-12c9fd7b5ded';
    $display->content['new-df9ebde2-3d4e-47bd-947c-12c9fd7b5ded'] = $pane;
    $display->panels['left_author'][1] = 'new-df9ebde2-3d4e-47bd-947c-12c9fd7b5ded';
    $pane = new stdClass();
    $pane->pid = 'new-8e640add-6b7f-448b-95f8-80ed224a585c';
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
    $pane->uuid = '8e640add-6b7f-448b-95f8-80ed224a585c';
    $display->content['new-8e640add-6b7f-448b-95f8-80ed224a585c'] = $pane;
    $display->panels['left_title'][0] = 'new-8e640add-6b7f-448b-95f8-80ed224a585c';
    $pane = new stdClass();
    $pane->pid = 'new-001c3ff6-b083-4f5f-94bb-b16f4a69ec96';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'faq_category-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'Categories',
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
    $pane->uuid = '001c3ff6-b083-4f5f-94bb-b16f4a69ec96';
    $display->content['new-001c3ff6-b083-4f5f-94bb-b16f4a69ec96'] = $pane;
    $display->panels['right'][0] = 'new-001c3ff6-b083-4f5f-94bb-b16f4a69ec96';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_88'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_faq_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_new_faq';
  $page->task = 'page';
  $page->admin_title = 'Add new FAQ';
  $page->admin_description = '';
  $page->path = 'faq/add-new-faq';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'ask question',
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
    'title' => 'Add new FAQ',
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
  $handler->name = 'page_add_new_faq_http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_new_faq';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/faq',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_new_faq'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'edit_faq_s';
  $page->task = 'page';
  $page->admin_title = 'Edit FAQ\'s';
  $page->admin_description = '';
  $page->path = 'faq/edit-questions';
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
    'title' => 'Edit/Answer Questions',
    'name' => 'navigation',
    'weight' => '2',
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
  $handler->name = 'page_edit_faq_s_http_response';
  $handler->task = 'page';
  $handler->subtask = 'edit_faq_s';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'admin/config/faq/edit-questions',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['edit_faq_s'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq';
  $page->task = 'page';
  $page->admin_title = 'FAQ';
  $page->admin_description = 'Displays a list of frequently asked/answered questions.';
  $page->path = 'faq/!term_name';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'FAQ',
    'name' => 'main-menu',
    'weight' => '9',
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
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vocabularies' => array(
          'faq_categories' => 'faq_categories',
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
  $handler->name = 'page_faq_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'faq';
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
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy vocabulary from Taxonomy term (on taxonomy_term_data.vocabulary)',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(),
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
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Frequently Asked Questions (FAQs)';
  $display->uuid = 'c584e813-d463-4c57-b1e3-2a3f71c03834';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-41e087ff-17dd-4a1e-b975-d2541603ee2a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'slac_faq-panel_pane_2';
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
    $pane->uuid = '41e087ff-17dd-4a1e-b975-d2541603ee2a';
    $display->content['new-41e087ff-17dd-4a1e-b975-d2541603ee2a'] = $pane;
    $display->panels['left'][0] = 'new-41e087ff-17dd-4a1e-b975-d2541603ee2a';
    $pane = new stdClass();
    $pane->pid = 'new-7aa99366-b584-4165-92b7-422fca9f8b49';
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
    $pane->uuid = '7aa99366-b584-4165-92b7-422fca9f8b49';
    $display->content['new-7aa99366-b584-4165-92b7-422fca9f8b49'] = $pane;
    $display->panels['left_title'][0] = 'new-7aa99366-b584-4165-92b7-422fca9f8b49';
    $pane = new stdClass();
    $pane->pid = 'new-ced41747-3427-4d48-9701-38ba238f74b1';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'faq_category-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'Categories',
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
    $pane->uuid = 'ced41747-3427-4d48-9701-38ba238f74b1';
    $display->content['new-ced41747-3427-4d48-9701-38ba238f74b1'] = $pane;
    $display->panels['right'][0] = 'new-ced41747-3427-4d48-9701-38ba238f74b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7aa99366-b584-4165-92b7-422fca9f8b49';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['faq'] = $page;

  return $pages;

}
