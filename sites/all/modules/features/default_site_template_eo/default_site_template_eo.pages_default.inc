<?php
/**
 * @file
 * default_site_template_eo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function default_site_template_eo_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
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
  $display->uuid = 'e2f85d8d-1962-4f02-a989-165e72480e28';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f6af18a7-ba6b-481c-8108-2ccd9b1934bb';
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
  $pane->uuid = 'f6af18a7-ba6b-481c-8108-2ccd9b1934bb';
  $display->content['new-f6af18a7-ba6b-481c-8108-2ccd9b1934bb'] = $pane;
  $display->panels['content'][0] = 'new-f6af18a7-ba6b-481c-8108-2ccd9b1934bb';
  $pane = new stdClass();
  $pane->pid = 'new-2a3fe592-c6f5-45ae-8c04-a493a93cb9f4';
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
  $pane->uuid = '2a3fe592-c6f5-45ae-8c04-a493a93cb9f4';
  $display->content['new-2a3fe592-c6f5-45ae-8c04-a493a93cb9f4'] = $pane;
  $display->panels['content'][1] = 'new-2a3fe592-c6f5-45ae-8c04-a493a93cb9f4';
  $pane = new stdClass();
  $pane->pid = 'new-8592ee2d-9f46-433e-bb06-f45bd7c2eb76';
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
  $pane->uuid = '8592ee2d-9f46-433e-bb06-f45bd7c2eb76';
  $display->content['new-8592ee2d-9f46-433e-bb06-f45bd7c2eb76'] = $pane;
  $display->panels['content'][2] = 'new-8592ee2d-9f46-433e-bb06-f45bd7c2eb76';
  $pane = new stdClass();
  $pane->pid = 'new-22e9f97e-a14f-4898-8502-0e09e9b52e44';
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
  $pane->uuid = '22e9f97e-a14f-4898-8502-0e09e9b52e44';
  $display->content['new-22e9f97e-a14f-4898-8502-0e09e9b52e44'] = $pane;
  $display->panels['footer-first'][0] = 'new-22e9f97e-a14f-4898-8502-0e09e9b52e44';
  $pane = new stdClass();
  $pane->pid = 'new-8c13a76b-adbe-4f12-a97e-8f085a76b63d';
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
  $pane->uuid = '8c13a76b-adbe-4f12-a97e-8f085a76b63d';
  $display->content['new-8c13a76b-adbe-4f12-a97e-8f085a76b63d'] = $pane;
  $display->panels['footer-seccond'][0] = 'new-8c13a76b-adbe-4f12-a97e-8f085a76b63d';
  $pane = new stdClass();
  $pane->pid = 'new-64985369-a300-4267-95ec-2a7a685495c4';
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
  $pane->uuid = '64985369-a300-4267-95ec-2a7a685495c4';
  $display->content['new-64985369-a300-4267-95ec-2a7a685495c4'] = $pane;
  $display->panels['header-menu'][0] = 'new-64985369-a300-4267-95ec-2a7a685495c4';
  $pane = new stdClass();
  $pane->pid = 'new-38a62fc4-528f-43f2-a91b-539c1d1045ee';
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
  $pane->uuid = '38a62fc4-528f-43f2-a91b-539c1d1045ee';
  $display->content['new-38a62fc4-528f-43f2-a91b-539c1d1045ee'] = $pane;
  $display->panels['main-menu'][0] = 'new-38a62fc4-528f-43f2-a91b-539c1d1045ee';
  $pane = new stdClass();
  $pane->pid = 'new-8c8180f2-1647-4ec3-a9ab-08da2640abf3';
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
  $pane->uuid = '8c8180f2-1647-4ec3-a9ab-08da2640abf3';
  $display->content['new-8c8180f2-1647-4ec3-a9ab-08da2640abf3'] = $pane;
  $display->panels['main-menu'][1] = 'new-8c8180f2-1647-4ec3-a9ab-08da2640abf3';
  $pane = new stdClass();
  $pane->pid = 'new-dd017ac9-632a-49c4-b5ca-81e1a8db4140';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dd017ac9-632a-49c4-b5ca-81e1a8db4140';
  $display->content['new-dd017ac9-632a-49c4-b5ca-81e1a8db4140'] = $pane;
  $display->panels['site-title'][0] = 'new-dd017ac9-632a-49c4-b5ca-81e1a8db4140';
  $pane = new stdClass();
  $pane->pid = 'new-f46ddecf-b8af-4d71-b737-669913c87eca';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f46ddecf-b8af-4d71-b737-669913c87eca';
  $display->content['new-f46ddecf-b8af-4d71-b737-669913c87eca'] = $pane;
  $display->panels['site-title'][1] = 'new-f46ddecf-b8af-4d71-b737-669913c87eca';
  $pane = new stdClass();
  $pane->pid = 'new-bf97e0bc-4e40-4c3a-80f5-4ae04d62ae85';
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
  $pane->uuid = 'bf97e0bc-4e40-4c3a-80f5-4ae04d62ae85';
  $display->content['new-bf97e0bc-4e40-4c3a-80f5-4ae04d62ae85'] = $pane;
  $display->panels['user-search'][0] = 'new-bf97e0bc-4e40-4c3a-80f5-4ae04d62ae85';
  $pane = new stdClass();
  $pane->pid = 'new-ffe3aed8-dffe-4770-b467-7952f4efbc38';
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
  $pane->uuid = 'ffe3aed8-dffe-4770-b467-7952f4efbc38';
  $display->content['new-ffe3aed8-dffe-4770-b467-7952f4efbc38'] = $pane;
  $display->panels['user-search'][1] = 'new-ffe3aed8-dffe-4770-b467-7952f4efbc38';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
