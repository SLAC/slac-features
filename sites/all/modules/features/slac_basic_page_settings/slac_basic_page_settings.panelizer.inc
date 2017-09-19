<?php
/**
 * @file
 * slac_basic_page_settings.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function slac_basic_page_settings_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'With left sidebar';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_col_events';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'left_title' => NULL,
      'right' => NULL,
      'social_media' => NULL,
      'inner_left' => NULL,
      'inner_right' => NULL,
      'inner_title' => NULL,
      'right_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58068aef-a945-4688-ba61-cdf8bd873d64';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-03d32f6e-e624-478f-98cc-4fb4ae0f521c';
  $pane->panel = 'left';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'menu_name' => 'main-menu',
    'parent_mlid' => 'main-menu:0',
    'title_link' => 1,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => 0,
    'expanded' => 0,
    'sort' => 0,
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
  $pane->uuid = '03d32f6e-e624-478f-98cc-4fb4ae0f521c';
  $display->content['new-03d32f6e-e624-478f-98cc-4fb4ae0f521c'] = $pane;
  $display->panels['left'][0] = 'new-03d32f6e-e624-478f-98cc-4fb4ae0f521c';
  $pane = new stdClass();
  $pane->pid = 'new-a2b147e8-36fb-4eee-b576-f27d09cdbf65';
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
  $pane->uuid = 'a2b147e8-36fb-4eee-b576-f27d09cdbf65';
  $display->content['new-a2b147e8-36fb-4eee-b576-f27d09cdbf65'] = $pane;
  $display->panels['left_title'][0] = 'new-a2b147e8-36fb-4eee-b576-f27d09cdbf65';
  $pane = new stdClass();
  $pane->pid = 'new-e045c12b-c927-4882-93e6-f4ee1a80c241';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_bp_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'basic_page_large_image',
      'image_link' => '',
    ),
    'context' => 'panelizer',
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
  $pane->uuid = 'e045c12b-c927-4882-93e6-f4ee1a80c241';
  $display->content['new-e045c12b-c927-4882-93e6-f4ee1a80c241'] = $pane;
  $display->panels['right'][0] = 'new-e045c12b-c927-4882-93e6-f4ee1a80c241';
  $pane = new stdClass();
  $pane->pid = 'new-aaa28cc7-502c-450c-9641-5431e4c242aa';
  $pane->panel = 'right';
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
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aaa28cc7-502c-450c-9641-5431e4c242aa';
  $display->content['new-aaa28cc7-502c-450c-9641-5431e4c242aa'] = $pane;
  $display->panels['right'][1] = 'new-aaa28cc7-502c-450c-9641-5431e4c242aa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a2b147e8-36fb-4eee-b576-f27d09cdbf65';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'No left sidebar';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:page:no_left_sidebar';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
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
  $display->title = '%node:title';
  $display->uuid = 'c5913aee-ed23-4995-b753-ba2306977bac';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:page:no_left_sidebar';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-99b74432-e253-43b5-adde-da68da1da9a6';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_bp_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'basic_page_large_image',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '99b74432-e253-43b5-adde-da68da1da9a6';
  $display->content['new-99b74432-e253-43b5-adde-da68da1da9a6'] = $pane;
  $display->panels['left'][0] = 'new-99b74432-e253-43b5-adde-da68da1da9a6';
  $pane = new stdClass();
  $pane->pid = 'new-0b6bae75-ff3b-4c27-b846-92a9d095d983';
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
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0b6bae75-ff3b-4c27-b846-92a9d095d983';
  $display->content['new-0b6bae75-ff3b-4c27-b846-92a9d095d983'] = $pane;
  $display->panels['left'][1] = 'new-0b6bae75-ff3b-4c27-b846-92a9d095d983';
  $pane = new stdClass();
  $pane->pid = 'new-de661c3b-9b64-41be-aa95-eea31d0ebb84';
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
  $pane->uuid = 'de661c3b-9b64-41be-aa95-eea31d0ebb84';
  $display->content['new-de661c3b-9b64-41be-aa95-eea31d0ebb84'] = $pane;
  $display->panels['left_title'][0] = 'new-de661c3b-9b64-41be-aa95-eea31d0ebb84';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b6bae75-ff3b-4c27-b846-92a9d095d983';
  $panelizer->display = $display;
  $export['node:page:no_left_sidebar'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'One column';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:page:one_column';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'one_col_basic';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'title' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c039afb0-5cb5-44ce-a534-f74931b8f176';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:page:one_column';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ff9f0949-f723-4499-9cf6-884ee97e5635';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_bp_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'basic_page_large_image',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ff9f0949-f723-4499-9cf6-884ee97e5635';
  $display->content['new-ff9f0949-f723-4499-9cf6-884ee97e5635'] = $pane;
  $display->panels['content'][0] = 'new-ff9f0949-f723-4499-9cf6-884ee97e5635';
  $pane = new stdClass();
  $pane->pid = 'new-1f8c7110-421f-4168-ab4e-ec2b4a8ad4ce';
  $pane->panel = 'content';
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
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1f8c7110-421f-4168-ab4e-ec2b4a8ad4ce';
  $display->content['new-1f8c7110-421f-4168-ab4e-ec2b4a8ad4ce'] = $pane;
  $display->panels['content'][1] = 'new-1f8c7110-421f-4168-ab4e-ec2b4a8ad4ce';
  $pane = new stdClass();
  $pane->pid = 'new-231976d6-244c-420d-b141-255dcf9fec1e';
  $pane->panel = 'title';
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
  $pane->uuid = '231976d6-244c-420d-b141-255dcf9fec1e';
  $display->content['new-231976d6-244c-420d-b141-255dcf9fec1e'] = $pane;
  $display->panels['title'][0] = 'new-231976d6-244c-420d-b141-255dcf9fec1e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1f8c7110-421f-4168-ab4e-ec2b4a8ad4ce';
  $panelizer->display = $display;
  $export['node:page:one_column'] = $panelizer;

  return $export;
}
