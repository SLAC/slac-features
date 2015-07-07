<?php
/**
 * @file
 * default_site_template_people.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function default_site_template_people_default_page_manager_handlers() {
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
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'page_basic';
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
  $display->uuid = 'dd6e5f57-55bf-46fc-9bef-2fdb937dd76d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d5ffcc08-aaaa-46ee-969e-e3afd99c8f1b';
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
    $pane->uuid = 'd5ffcc08-aaaa-46ee-969e-e3afd99c8f1b';
    $display->content['new-d5ffcc08-aaaa-46ee-969e-e3afd99c8f1b'] = $pane;
    $display->panels['content'][0] = 'new-d5ffcc08-aaaa-46ee-969e-e3afd99c8f1b';
    $pane = new stdClass();
    $pane->pid = 'new-c8db9ebd-503f-47d3-99a8-fa21189f074f';
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
    $pane->uuid = 'c8db9ebd-503f-47d3-99a8-fa21189f074f';
    $display->content['new-c8db9ebd-503f-47d3-99a8-fa21189f074f'] = $pane;
    $display->panels['content'][1] = 'new-c8db9ebd-503f-47d3-99a8-fa21189f074f';
    $pane = new stdClass();
    $pane->pid = 'new-80168249-c404-4df8-8863-0dc6945f43fe';
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
    $pane->uuid = '80168249-c404-4df8-8863-0dc6945f43fe';
    $display->content['new-80168249-c404-4df8-8863-0dc6945f43fe'] = $pane;
    $display->panels['footer-seccond'][0] = 'new-80168249-c404-4df8-8863-0dc6945f43fe';
    $pane = new stdClass();
    $pane->pid = 'new-4e833ad2-e360-4af3-a7b1-7ba8f6bc41a0';
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
    $pane->uuid = '4e833ad2-e360-4af3-a7b1-7ba8f6bc41a0';
    $display->content['new-4e833ad2-e360-4af3-a7b1-7ba8f6bc41a0'] = $pane;
    $display->panels['header-menu'][0] = 'new-4e833ad2-e360-4af3-a7b1-7ba8f6bc41a0';
    $pane = new stdClass();
    $pane->pid = 'new-be83d673-ae70-4fe9-856e-9ba13997d0ec';
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
    $pane->uuid = 'be83d673-ae70-4fe9-856e-9ba13997d0ec';
    $display->content['new-be83d673-ae70-4fe9-856e-9ba13997d0ec'] = $pane;
    $display->panels['main-menu'][0] = 'new-be83d673-ae70-4fe9-856e-9ba13997d0ec';
    $pane = new stdClass();
    $pane->pid = 'new-66f20bd9-197e-4403-8627-c5dc5f676f91';
    $pane->panel = 'site-title';
    $pane->type = 'site_name_abbreviation';
    $pane->subtype = 'site_name_abbreviation';
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
    $pane->uuid = '66f20bd9-197e-4403-8627-c5dc5f676f91';
    $display->content['new-66f20bd9-197e-4403-8627-c5dc5f676f91'] = $pane;
    $display->panels['site-title'][0] = 'new-66f20bd9-197e-4403-8627-c5dc5f676f91';
    $pane = new stdClass();
    $pane->pid = 'new-33840581-28e8-4b69-89fc-ce213d52620c';
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
    $pane->uuid = '33840581-28e8-4b69-89fc-ce213d52620c';
    $display->content['new-33840581-28e8-4b69-89fc-ce213d52620c'] = $pane;
    $display->panels['site-title'][1] = 'new-33840581-28e8-4b69-89fc-ce213d52620c';
    $pane = new stdClass();
    $pane->pid = 'new-1e18185f-0dac-4adc-99ec-3239976d44d7';
    $pane->panel = 'user-search';
    $pane->type = 'search_block';
    $pane->subtype = 'search_block';
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
    $pane->uuid = '1e18185f-0dac-4adc-99ec-3239976d44d7';
    $display->content['new-1e18185f-0dac-4adc-99ec-3239976d44d7'] = $pane;
    $display->panels['user-search'][0] = 'new-1e18185f-0dac-4adc-99ec-3239976d44d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
