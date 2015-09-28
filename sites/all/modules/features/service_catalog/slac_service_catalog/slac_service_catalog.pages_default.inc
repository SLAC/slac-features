<?php
/**
 * @file
 * slac_service_catalog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_service_catalog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Service Catalog item',
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
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'slac_sc_catalog_item' => 'slac_sc_catalog_item',
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
      'center' => NULL,
      'right' => NULL,
      'left' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fc35fbd1-5914-4699-8367-90da7463b444';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7d230e93-72c1-43ca-9f06-b95b46d0da2d';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_sc_service_overview';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'service-overview',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d230e93-72c1-43ca-9f06-b95b46d0da2d';
    $display->content['new-7d230e93-72c1-43ca-9f06-b95b46d0da2d'] = $pane;
    $display->panels['left'][0] = 'new-7d230e93-72c1-43ca-9f06-b95b46d0da2d';
    $pane = new stdClass();
    $pane->pid = 'new-d05a1dc7-b8a8-4fb6-b562-b74460c6c27d';
    $pane->panel = 'left';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'service-body',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd05a1dc7-b8a8-4fb6-b562-b74460c6c27d';
    $display->content['new-d05a1dc7-b8a8-4fb6-b562-b74460c6c27d'] = $pane;
    $display->panels['left'][1] = 'new-d05a1dc7-b8a8-4fb6-b562-b74460c6c27d';
    $pane = new stdClass();
    $pane->pid = 'new-e5355fdd-ddbe-4a77-bf09-a29d5206ae08';
    $pane->panel = 'left_title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => 'pane-title',
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
    $pane->uuid = 'e5355fdd-ddbe-4a77-bf09-a29d5206ae08';
    $display->content['new-e5355fdd-ddbe-4a77-bf09-a29d5206ae08'] = $pane;
    $display->panels['left_title'][0] = 'new-e5355fdd-ddbe-4a77-bf09-a29d5206ae08';
    $pane = new stdClass();
    $pane->pid = 'new-da05f59e-d057-4064-b128-b31dc997cbb2';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'service_catalog_item-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->uuid = 'da05f59e-d057-4064-b128-b31dc997cbb2';
    $display->content['new-da05f59e-d057-4064-b128-b31dc997cbb2'] = $pane;
    $display->panels['right'][0] = 'new-da05f59e-d057-4064-b128-b31dc997cbb2';
    $pane = new stdClass();
    $pane->pid = 'new-744daa47-38cb-4f33-b75f-cf611e574305';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_sc_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'code' => '301',
        '404_if_empty' => 0,
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '744daa47-38cb-4f33-b75f-cf611e574305';
    $display->content['new-744daa47-38cb-4f33-b75f-cf611e574305'] = $pane;
    $display->panels['right'][1] = 'new-744daa47-38cb-4f33-b75f-cf611e574305';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7d230e93-72c1-43ca-9f06-b95b46d0da2d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Service Catalog Category',
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
              'slac_sc_category' => 'slac_sc_category',
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
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4216391a-e495-461a-8c8f-40c5f01110d3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f8d8d6c3-f6bf-4943-a032-b21eb668c62e';
    $pane->panel = 'left';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'service-description',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f8d8d6c3-f6bf-4943-a032-b21eb668c62e';
    $display->content['new-f8d8d6c3-f6bf-4943-a032-b21eb668c62e'] = $pane;
    $display->panels['left'][0] = 'new-f8d8d6c3-f6bf-4943-a032-b21eb668c62e';
    $pane = new stdClass();
    $pane->pid = 'new-716ee5e6-fefc-4b9f-83ba-13d320087c2b';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'service_catalog_item-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'tid_raw' => '%term:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '716ee5e6-fefc-4b9f-83ba-13d320087c2b';
    $display->content['new-716ee5e6-fefc-4b9f-83ba-13d320087c2b'] = $pane;
    $display->panels['left'][1] = 'new-716ee5e6-fefc-4b9f-83ba-13d320087c2b';
    $pane = new stdClass();
    $pane->pid = 'new-0f0a9843-7a22-4cba-bbb2-6bf5359ad561';
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
    $pane->uuid = '0f0a9843-7a22-4cba-bbb2-6bf5359ad561';
    $display->content['new-0f0a9843-7a22-4cba-bbb2-6bf5359ad561'] = $pane;
    $display->panels['left_title'][0] = 'new-0f0a9843-7a22-4cba-bbb2-6bf5359ad561';
    $pane = new stdClass();
    $pane->pid = 'new-6c6e8872-b9cf-4ddb-a12f-a4c8fc98ef00';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'service_catalog_category-panel_pane_4';
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
    $pane->uuid = '6c6e8872-b9cf-4ddb-a12f-a4c8fc98ef00';
    $display->content['new-6c6e8872-b9cf-4ddb-a12f-a4c8fc98ef00'] = $pane;
    $display->panels['right'][0] = 'new-6c6e8872-b9cf-4ddb-a12f-a4c8fc98ef00';
    $pane = new stdClass();
    $pane->pid = 'new-575ae42d-5da8-4f46-88ef-0ddb3dd2cab7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'service_catalog_item-panel_pane_3';
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
    $pane->uuid = '575ae42d-5da8-4f46-88ef-0ddb3dd2cab7';
    $display->content['new-575ae42d-5da8-4f46-88ef-0ddb3dd2cab7'] = $pane;
    $display->panels['right'][1] = 'new-575ae42d-5da8-4f46-88ef-0ddb3dd2cab7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-716ee5e6-fefc-4b9f-83ba-13d320087c2b';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_service_catalog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_catalog_add_a_new_service';
  $page->task = 'page';
  $page->admin_title = 'Service Catalog. Add a new service';
  $page->admin_description = '';
  $page->path = 'node/%node/add-new-service';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'Services',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'landing_page' => 'landing_page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      2 => array(
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
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add a new service',
    'name' => 'navigation',
    'weight' => '4',
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
  $handler->name = 'page_service_catalog_add_a_new_service_http_response';
  $handler->task = 'page';
  $handler->subtask = 'service_catalog_add_a_new_service';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/slac-sc-catalog-item?destination=services',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_title',
          'settings' => array(
            'title' => 'Services',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'landing_page' => 'landing_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_catalog_add_a_new_service'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_catalog_manage_self_help_topics';
  $page->task = 'page';
  $page->admin_title = 'Service Catalog. Manage self help topics';
  $page->admin_description = '';
  $page->path = 'node/%node/manage-self-help-topic';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'Services',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'landing_page' => 'landing_page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
            1 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Manage "I want to" links',
    'name' => 'navigation',
    'weight' => '8',
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
  $handler->name = 'page_service_catalog_manage_self_help_topics_http_response';
  $handler->task = 'page';
  $handler->subtask = 'service_catalog_manage_self_help_topics';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'admin/structure/taxonomy/slac_sc_self_help?destination=services',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_catalog_manage_self_help_topics'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_catalog_manage_service_category';
  $page->task = 'page';
  $page->admin_title = 'Service Catalog. Manage service category';
  $page->admin_description = '';
  $page->path = 'node/%node/manage-service-category';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'Services',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'landing_page' => 'landing_page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      2 => array(
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
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Manage service category',
    'name' => 'navigation',
    'weight' => '7',
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
  $handler->name = 'page_service_catalog_manage_service_category_http_response';
  $handler->task = 'page';
  $handler->subtask = 'service_catalog_manage_service_category';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'admin/structure/taxonomy/slac_sc_category?destination=services',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_catalog_manage_service_category'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_catalog_submit_support_request';
  $page->task = 'page';
  $page->admin_title = 'Service Catalog. Submit support request';
  $page->admin_description = '';
  $page->path = 'node/%node/add-support-request';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'Services',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'landing_page' => 'landing_page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 4,
            2 => 3,
            3 => 5,
            4 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Submit support request',
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
  $handler->name = 'page_service_catalog_submit_support_request_http_response';
  $handler->task = 'page';
  $handler->subtask = 'service_catalog_submit_support_request';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/support-ticket?destination=services',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_catalog_submit_support_request'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_catalog_view_support_queue';
  $page->task = 'page';
  $page->admin_title = 'Service Catalog. View support queue';
  $page->admin_description = '';
  $page->path = 'node/%node/support-queue';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'Services',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'landing_page' => 'landing_page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      2 => array(
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
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'View support queue',
    'name' => 'navigation',
    'weight' => '3',
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
  $handler->name = 'page_service_catalog_view_support_queue_http_response';
  $handler->task = 'page';
  $handler->subtask = 'service_catalog_view_support_queue';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'support',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_catalog_view_support_queue'] = $page;

  return $pages;

}
