<?php
/**
 * @file
 * default_site_template_project.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function default_site_template_project_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default site template',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'external-organisation',
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
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'newsletter
newsletter/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'page_basic_eo';
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
          0 => 4,
          1 => 1,
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 5,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'content',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 9,
          1 => 10,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_side',
          1 => 'search_side',
          2 => 'secondary_menu_side',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'left_side' => array(
        'type' => 'region',
        'title' => 'Logo side',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'search_side' => array(
        'type' => 'region',
        'title' => 'Search side',
        'width' => 25,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'secondary_menu_side' => array(
        'type' => 'region',
        'title' => 'Secondary menu side',
        'width' => 25,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      5 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
          1 => 7,
          2 => 8,
        ),
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_menu',
        ),
        'parent' => '5',
        'class' => '',
      ),
      'header_menu' => array(
        'type' => 'region',
        'title' => 'header menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'site_abbreviation',
          1 => 'site_name',
        ),
        'parent' => '5',
        'class' => '',
      ),
      'site_abbreviation' => array(
        'type' => 'region',
        'title' => 'site abbreviation',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      'site_name' => array(
        'type' => 'region',
        'title' => 'site name',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'primary_menu',
        ),
        'parent' => '5',
        'class' => '',
      ),
      'primary_menu' => array(
        'type' => 'region',
        'title' => 'primary menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      10 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 17,
        ),
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 12,
          1 => 13,
        ),
        'parent' => '9',
        'class' => '',
      ),
      12 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '11',
        'children' => array(
          0 => 16,
          1 => 18,
        ),
        'class' => '',
      ),
      13 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '11',
        'children' => array(
          0 => 15,
        ),
        'class' => '',
      ),
      15 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_menu',
        ),
        'parent' => '13',
        'class' => '',
      ),
      'footer_menu' => array(
        'type' => 'region',
        'title' => 'footer menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '15',
        'class' => '',
      ),
      16 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'site_name_',
        ),
        'parent' => '12',
        'class' => '',
      ),
      'site_name_' => array(
        'type' => 'region',
        'title' => 'site name',
        'width' => 100,
        'width_type' => '%',
        'parent' => '16',
        'class' => '',
      ),
      17 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'social_links',
        ),
        'parent' => '10',
        'class' => '',
      ),
      'social_links' => array(
        'type' => 'region',
        'title' => 'social links',
        'width' => 100,
        'width_type' => '%',
        'parent' => '17',
        'class' => '',
      ),
      18 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'site_address_',
        ),
        'parent' => '12',
        'class' => '',
      ),
      'site_address_' => array(
        'type' => 'region',
        'title' => 'site address',
        'width' => 100,
        'width_type' => '%',
        'parent' => '18',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'left_side' => NULL,
      'search_side' => NULL,
      'secondary_menu_side' => NULL,
      'header_menu' => NULL,
      'site_abbreviation' => NULL,
      'site_name' => NULL,
      'primary_menu' => NULL,
      'site_address' => NULL,
      'footer_menu' => NULL,
      'site_name_' => NULL,
      'social_links' => NULL,
      'site_address_' => NULL,
      'header-menu' => NULL,
      'site-title' => NULL,
      'main-menu' => NULL,
      'footer-first' => NULL,
      'footer-seccond' => NULL,
      'logo' => NULL,
      'user-search' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1eb96557-a6d3-45f6-83d9-21d9dfea301b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d08f502f-7538-4c00-883c-3c459ca47e06';
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
    $pane->uuid = 'd08f502f-7538-4c00-883c-3c459ca47e06';
    $display->content['new-d08f502f-7538-4c00-883c-3c459ca47e06'] = $pane;
    $display->panels['content'][0] = 'new-d08f502f-7538-4c00-883c-3c459ca47e06';
    $pane = new stdClass();
    $pane->pid = 'new-79419ee6-c7d8-4011-8242-f610cb1d1fab';
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
    $pane->uuid = '79419ee6-c7d8-4011-8242-f610cb1d1fab';
    $display->content['new-79419ee6-c7d8-4011-8242-f610cb1d1fab'] = $pane;
    $display->panels['content'][1] = 'new-79419ee6-c7d8-4011-8242-f610cb1d1fab';
    $pane = new stdClass();
    $pane->pid = 'new-c17ba7f1-8baf-4958-b22f-ba6246d6a805';
    $pane->panel = 'content';
    $pane->type = 'page_feed_icons';
    $pane->subtype = 'page_feed_icons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c17ba7f1-8baf-4958-b22f-ba6246d6a805';
    $display->content['new-c17ba7f1-8baf-4958-b22f-ba6246d6a805'] = $pane;
    $display->panels['content'][2] = 'new-c17ba7f1-8baf-4958-b22f-ba6246d6a805';
    $pane = new stdClass();
    $pane->pid = 'new-47a78fa5-543b-4a32-8488-449118f285da';
    $pane->panel = 'footer-first';
    $pane->type = 'panels_mini';
    $pane->subtype = 'second_footer';
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
    $pane->uuid = '47a78fa5-543b-4a32-8488-449118f285da';
    $display->content['new-47a78fa5-543b-4a32-8488-449118f285da'] = $pane;
    $display->panels['footer-first'][0] = 'new-47a78fa5-543b-4a32-8488-449118f285da';
    $pane = new stdClass();
    $pane->pid = 'new-c7a52a67-25bc-45bc-99d3-aeaf307c7cfe';
    $pane->panel = 'footer-seccond';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
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
    $pane->uuid = 'c7a52a67-25bc-45bc-99d3-aeaf307c7cfe';
    $display->content['new-c7a52a67-25bc-45bc-99d3-aeaf307c7cfe'] = $pane;
    $display->panels['footer-seccond'][0] = 'new-c7a52a67-25bc-45bc-99d3-aeaf307c7cfe';
    $pane = new stdClass();
    $pane->pid = 'new-bb3f4c38-1ec7-44b5-b9c1-5a859d32e3f5';
    $pane->panel = 'header-menu';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-header-menu';
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
    $pane->uuid = 'bb3f4c38-1ec7-44b5-b9c1-5a859d32e3f5';
    $display->content['new-bb3f4c38-1ec7-44b5-b9c1-5a859d32e3f5'] = $pane;
    $display->panels['header-menu'][0] = 'new-bb3f4c38-1ec7-44b5-b9c1-5a859d32e3f5';
    $pane = new stdClass();
    $pane->pid = 'new-21ee9782-3663-416f-9693-b20bf67d5116';
    $pane->panel = 'main-menu';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = FALSE;
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
    $pane->uuid = '21ee9782-3663-416f-9693-b20bf67d5116';
    $display->content['new-21ee9782-3663-416f-9693-b20bf67d5116'] = $pane;
    $display->panels['main-menu'][0] = 'new-21ee9782-3663-416f-9693-b20bf67d5116';
    $pane = new stdClass();
    $pane->pid = 'new-c94664ce-c3f2-4351-a98e-aa25cfb8babd';
    $pane->panel = 'main-menu';
    $pane->type = 'block';
    $pane->subtype = 'superfish-1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c94664ce-c3f2-4351-a98e-aa25cfb8babd';
    $display->content['new-c94664ce-c3f2-4351-a98e-aa25cfb8babd'] = $pane;
    $display->panels['main-menu'][1] = 'new-c94664ce-c3f2-4351-a98e-aa25cfb8babd';
    $pane = new stdClass();
    $pane->pid = 'new-b3038b66-eeae-49e1-a469-c69876f7b020';
    $pane->panel = 'site-title';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
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
    $pane->uuid = 'b3038b66-eeae-49e1-a469-c69876f7b020';
    $display->content['new-b3038b66-eeae-49e1-a469-c69876f7b020'] = $pane;
    $display->panels['site-title'][0] = 'new-b3038b66-eeae-49e1-a469-c69876f7b020';
    $pane = new stdClass();
    $pane->pid = 'new-fbe9b0f2-e4dd-48cc-848b-15bf46f1a37e';
    $pane->panel = 'site-title';
    $pane->type = 'site_logo';
    $pane->subtype = 'site_logo';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fbe9b0f2-e4dd-48cc-848b-15bf46f1a37e';
    $display->content['new-fbe9b0f2-e4dd-48cc-848b-15bf46f1a37e'] = $pane;
    $display->panels['site-title'][1] = 'new-fbe9b0f2-e4dd-48cc-848b-15bf46f1a37e';
    $pane = new stdClass();
    $pane->pid = 'new-5902e982-f174-4fee-a145-6789f581989f';
    $pane->panel = 'user-search';
    $pane->type = 'search_block';
    $pane->subtype = 'search_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
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
    $pane->uuid = '5902e982-f174-4fee-a145-6789f581989f';
    $display->content['new-5902e982-f174-4fee-a145-6789f581989f'] = $pane;
    $display->panels['user-search'][0] = 'new-5902e982-f174-4fee-a145-6789f581989f';
    $pane = new stdClass();
    $pane->pid = 'new-53311be2-c360-4740-9e69-55fb7d127b83';
    $pane->panel = 'user-search';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53311be2-c360-4740-9e69-55fb7d127b83';
    $display->content['new-53311be2-c360-4740-9e69-55fb7d127b83'] = $pane;
    $display->panels['user-search'][1] = 'new-53311be2-c360-4740-9e69-55fb7d127b83';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
