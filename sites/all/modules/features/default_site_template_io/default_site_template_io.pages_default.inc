<?php
/**
 * @file
 * default_site_template_io.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function default_site_template_io_default_page_manager_handlers() {
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
    'body_classes_to_add' => 'internal-organization',
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
  $display->layout = 'page_basic_io';
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
      'top-menu' => NULL,
      'header-date' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f435c148-8444-42df-83a2-5ad665f6cf3e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6ac591d1-7fda-4ad9-a594-1e249fd5d501';
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
  $pane->uuid = '6ac591d1-7fda-4ad9-a594-1e249fd5d501';
  $display->content['new-6ac591d1-7fda-4ad9-a594-1e249fd5d501'] = $pane;
  $display->panels['content'][0] = 'new-6ac591d1-7fda-4ad9-a594-1e249fd5d501';
  $pane = new stdClass();
  $pane->pid = 'new-28f0b500-0239-4c64-b3ac-e11fe96613c4';
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
  $pane->uuid = '28f0b500-0239-4c64-b3ac-e11fe96613c4';
  $display->content['new-28f0b500-0239-4c64-b3ac-e11fe96613c4'] = $pane;
  $display->panels['content'][1] = 'new-28f0b500-0239-4c64-b3ac-e11fe96613c4';
  $pane = new stdClass();
  $pane->pid = 'new-6596bdcb-3a4e-426d-b521-7f03e7f34253';
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
  $pane->uuid = '6596bdcb-3a4e-426d-b521-7f03e7f34253';
  $display->content['new-6596bdcb-3a4e-426d-b521-7f03e7f34253'] = $pane;
  $display->panels['content'][2] = 'new-6596bdcb-3a4e-426d-b521-7f03e7f34253';
  $pane = new stdClass();
  $pane->pid = 'new-4d700c4d-62a6-43cf-8144-f66b72344b6a';
  $pane->panel = 'footer';
  $pane->type = 'panels_mini';
  $pane->subtype = 'second_footer';
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
  $pane->uuid = '4d700c4d-62a6-43cf-8144-f66b72344b6a';
  $display->content['new-4d700c4d-62a6-43cf-8144-f66b72344b6a'] = $pane;
  $display->panels['footer'][0] = 'new-4d700c4d-62a6-43cf-8144-f66b72344b6a';
  $pane = new stdClass();
  $pane->pid = 'new-b3142ff8-5387-471d-be52-80deb170efbd';
  $pane->panel = 'footer';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b3142ff8-5387-471d-be52-80deb170efbd';
  $display->content['new-b3142ff8-5387-471d-be52-80deb170efbd'] = $pane;
  $display->panels['footer'][1] = 'new-b3142ff8-5387-471d-be52-80deb170efbd';
  $pane = new stdClass();
  $pane->pid = 'new-c1fde5ea-35e6-43b6-9920-a8b100cd3a4a';
  $pane->panel = 'header-date';
  $pane->type = 'current_date';
  $pane->subtype = 'current_date';
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
  $pane->uuid = 'c1fde5ea-35e6-43b6-9920-a8b100cd3a4a';
  $display->content['new-c1fde5ea-35e6-43b6-9920-a8b100cd3a4a'] = $pane;
  $display->panels['header-date'][0] = 'new-c1fde5ea-35e6-43b6-9920-a8b100cd3a4a';
  $pane = new stdClass();
  $pane->pid = 'new-796fcb10-cdc6-492c-9207-8e12b17f9a8e';
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
  $pane->uuid = '796fcb10-cdc6-492c-9207-8e12b17f9a8e';
  $display->content['new-796fcb10-cdc6-492c-9207-8e12b17f9a8e'] = $pane;
  $display->panels['header-menu'][0] = 'new-796fcb10-cdc6-492c-9207-8e12b17f9a8e';
  $pane = new stdClass();
  $pane->pid = 'new-e090535a-b197-4c14-9f9b-e63105e751c9';
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
  $pane->uuid = 'e090535a-b197-4c14-9f9b-e63105e751c9';
  $display->content['new-e090535a-b197-4c14-9f9b-e63105e751c9'] = $pane;
  $display->panels['main-menu'][0] = 'new-e090535a-b197-4c14-9f9b-e63105e751c9';
  $pane = new stdClass();
  $pane->pid = 'new-5d91913d-69e4-45a9-9245-dba13432a91e';
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
  $pane->uuid = '5d91913d-69e4-45a9-9245-dba13432a91e';
  $display->content['new-5d91913d-69e4-45a9-9245-dba13432a91e'] = $pane;
  $display->panels['main-menu'][1] = 'new-5d91913d-69e4-45a9-9245-dba13432a91e';
  $pane = new stdClass();
  $pane->pid = 'new-66bf7b61-7bb2-413a-a293-054abf27d96e';
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
  $pane->uuid = '66bf7b61-7bb2-413a-a293-054abf27d96e';
  $display->content['new-66bf7b61-7bb2-413a-a293-054abf27d96e'] = $pane;
  $display->panels['site-title'][0] = 'new-66bf7b61-7bb2-413a-a293-054abf27d96e';
  $pane = new stdClass();
  $pane->pid = 'new-5e910f71-dacd-4f0a-a0eb-3bb3e199058e';
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
  $pane->uuid = '5e910f71-dacd-4f0a-a0eb-3bb3e199058e';
  $display->content['new-5e910f71-dacd-4f0a-a0eb-3bb3e199058e'] = $pane;
  $display->panels['site-title'][1] = 'new-5e910f71-dacd-4f0a-a0eb-3bb3e199058e';
  $pane = new stdClass();
  $pane->pid = 'new-62b61471-86ac-4c0d-ae7e-035c7d1324ac';
  $pane->panel = 'top-menu';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-header-top-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'menu-header-top-menu',
    'parent_mlid' => 'menu-header-top-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => 0,
    'expanded' => 0,
    'sort' => 0,
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
  $pane->uuid = '62b61471-86ac-4c0d-ae7e-035c7d1324ac';
  $display->content['new-62b61471-86ac-4c0d-ae7e-035c7d1324ac'] = $pane;
  $display->panels['top-menu'][0] = 'new-62b61471-86ac-4c0d-ae7e-035c7d1324ac';
  $pane = new stdClass();
  $pane->pid = 'new-108329e7-9074-4b1d-807a-065d330dbad2';
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
  $pane->uuid = '108329e7-9074-4b1d-807a-065d330dbad2';
  $display->content['new-108329e7-9074-4b1d-807a-065d330dbad2'] = $pane;
  $display->panels['user-search'][0] = 'new-108329e7-9074-4b1d-807a-065d330dbad2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
