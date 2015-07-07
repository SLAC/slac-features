<?php
/**
 * @file
 * slac_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slac_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = 'Provide all news related display and information';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slac_news_source' => 'field_slac_news_source',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Contact information */
  $handler->display->display_options['fields']['field_slac_news_contact']['id'] = 'field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['table'] = 'field_data_field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['field'] = 'field_slac_news_contact';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_slac_news_media']['id'] = 'field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['table'] = 'field_data_field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['field'] = 'field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slac_news_media']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_slac_news_media']['delta_offset'] = '0';
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_news_source']['id'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['table'] = 'field_data_field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['field'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['label'] = 'Source';
  $handler->display->display_options['fields']['field_slac_news_source']['click_sort_column'] = 'url';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_slac_news_tags']['id'] = 'field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['table'] = 'field_data_field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['field'] = 'field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_slac_news_tags']['delta_offset'] = '0';
  /* Sort criterion: Content: Date (field_slac_news_date) */
  $handler->display->display_options['sorts']['field_slac_news_date_value']['id'] = 'field_slac_news_date_value';
  $handler->display->display_options['sorts']['field_slac_news_date_value']['table'] = 'field_data_field_slac_news_date';
  $handler->display->display_options['sorts']['field_slac_news_date_value']['field'] = 'field_slac_news_date_value';
  $handler->display->display_options['sorts']['field_slac_news_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slac_news' => 'slac_news',
  );

  /* Display: News Listing by type */
  $handler = $view->new_display('panel_pane', 'News Listing by type', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News and Press Releases';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'news-landing';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results were found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_slac_news_media']['id'] = 'field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['table'] = 'field_data_field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['field'] = 'field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['label'] = '';
  $handler->display->display_options['fields']['field_slac_news_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_news_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slac_news_media']['settings'] = array(
    'file_view_mode' => 'crop_crop_news_landscape',
  );
  $handler->display->display_options['fields']['field_slac_news_media']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_news_source']['id'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['table'] = 'field_data_field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['field'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['label'] = '';
  $handler->display->display_options['fields']['field_slac_news_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_news_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_news_source']['type'] = 'link_title_plain';
  /* Field: Content: Contact information */
  $handler->display->display_options['fields']['field_slac_news_contact']['id'] = 'field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['table'] = 'field_data_field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['field'] = 'field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['exclude'] = TRUE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_slac_news_tags']['id'] = 'field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['table'] = 'field_data_field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['field'] = 'field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_news_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_slac_news_tags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: News type (field_slac_news_type) */
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['id'] = 'field_slac_news_type_tid';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['table'] = 'field_data_field_slac_news_type';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['field'] = 'field_slac_news_type_tid';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['title'] = '%1s';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['validate_options']['vocabularies'] = array(
    'news_types' => 'news_types',
  );
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_news_type_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['pane_category']['name'] = 'News';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_slac_news_type_value' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'News Type',
    ),
  );

  /* Display: Latest News */
  $handler = $view->new_display('panel_pane', 'Latest News', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_slac_news_source' => 'field_slac_news_source',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_news_source']['id'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['table'] = 'field_data_field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['field'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['label'] = '';
  $handler->display->display_options['fields']['field_slac_news_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slac_news_source']['alter']['text'] = '([field_slac_news_source])';
  $handler->display->display_options['fields']['field_slac_news_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_news_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_news_source']['type'] = 'link_title_plain';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News RSS Feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'calendar_teaser';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_slac_news_media']['id'] = 'field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['table'] = 'field_data_field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['field'] = 'field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['label'] = '';
  $handler->display->display_options['fields']['field_slac_news_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_news_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slac_news_media']['settings'] = array(
    'file_view_mode' => 'crop_crop_news_landscape',
  );
  $handler->display->display_options['fields']['field_slac_news_media']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Contact information */
  $handler->display->display_options['fields']['field_slac_news_contact']['id'] = 'field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['table'] = 'field_data_field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['field'] = 'field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['exclude'] = TRUE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_news_source']['id'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['table'] = 'field_data_field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['field'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['label'] = 'Source';
  $handler->display->display_options['fields']['field_slac_news_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_news_source']['click_sort_column'] = 'url';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_slac_news_tags']['id'] = 'field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['table'] = 'field_data_field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['field'] = 'field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'news/feed';
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'panel_pane_2' => 0,
    'panel_pane_3' => 0,
    'panel_pane_4' => 0,
    'panel_pane_5' => 0,
    'panel_pane_6' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['pane'] = TRUE;

  /* Display: Featured News */
  $handler = $view->new_display('panel_pane', 'Featured News', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured News';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_slac_news_source' => 'field_slac_news_source',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slac_news' => 'slac_news',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: News Type */
  $handler = $view->new_display('panel_pane', 'News Type', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News Type';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Last 3 news */
  $handler = $view->new_display('panel_pane', 'Last 3 news', 'panel_pane_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'last-three-news';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all news';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_slac_news_date']['id'] = 'field_slac_news_date';
  $handler->display->display_options['fields']['field_slac_news_date']['table'] = 'field_data_field_slac_news_date';
  $handler->display->display_options['fields']['field_slac_news_date']['field'] = 'field_slac_news_date';
  $handler->display->display_options['fields']['field_slac_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_news_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['pane_category']['name'] = 'News';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: News Listing by year */
  $handler = $view->new_display('panel_pane', 'News Listing by year', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'news-landing';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results were found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_slac_news_media']['id'] = 'field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['table'] = 'field_data_field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['field'] = 'field_slac_news_media';
  $handler->display->display_options['fields']['field_slac_news_media']['label'] = '';
  $handler->display->display_options['fields']['field_slac_news_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_news_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slac_news_media']['settings'] = array(
    'file_view_mode' => 'crop_crop_news_landscape',
  );
  $handler->display->display_options['fields']['field_slac_news_media']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_news_source']['id'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['table'] = 'field_data_field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['field'] = 'field_slac_news_source';
  $handler->display->display_options['fields']['field_slac_news_source']['label'] = '';
  $handler->display->display_options['fields']['field_slac_news_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_news_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_news_source']['type'] = 'link_title_plain';
  /* Field: Content: Contact information */
  $handler->display->display_options['fields']['field_slac_news_contact']['id'] = 'field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['table'] = 'field_data_field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['field'] = 'field_slac_news_contact';
  $handler->display->display_options['fields']['field_slac_news_contact']['exclude'] = TRUE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_slac_news_tags']['id'] = 'field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['table'] = 'field_data_field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['field'] = 'field_slac_news_tags';
  $handler->display->display_options['fields']['field_slac_news_tags']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Date (field_slac_news_date) */
  $handler->display->display_options['arguments']['field_slac_news_date_value']['id'] = 'field_slac_news_date_value';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['table'] = 'field_data_field_slac_news_date';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['field'] = 'field_slac_news_date_value';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_news_date_value']['title'] = 'News Archive: %1';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_news_date_value']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['validate_options']['code'] = 'if (function_exists(\'_ctools_plugins_context_year_month_title\')) {
  $handler->validated_title = _ctools_plugins_context_year_month_title($argument);
}
return TRUE;';
  $handler->display->display_options['arguments']['field_slac_news_date_value']['year_range'] = '-10:+3';
  $handler->display->display_options['pane_category']['name'] = 'News';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_slac_news_date_value' => array(
      'type' => 'context',
      'context' => 'year_month.year_month',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Date (field_slac_news_date)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'news-landing';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No news have been published.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'slac_news_tags' => 'slac_news_tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['path'] = 'news/tags/%';
  $export['news'] = $view;

  $view = new view();
  $view->name = 'news_tags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'News Tags';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TAGS';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Tags */
  $handler->display->display_options['relationships']['reverse_field_slac_news_tags_node']['id'] = 'reverse_field_slac_news_tags_node';
  $handler->display->display_options['relationships']['reverse_field_slac_news_tags_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_slac_news_tags_node']['field'] = 'reverse_field_slac_news_tags_node';
  $handler->display->display_options['relationships']['reverse_field_slac_news_tags_node']['required'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Sort criterion: COUNT(Content: Tags (field_slac_news_tags)) */
  $handler->display->display_options['sorts']['field_slac_news_tags_tid']['id'] = 'field_slac_news_tags_tid';
  $handler->display->display_options['sorts']['field_slac_news_tags_tid']['table'] = 'field_data_field_slac_news_tags';
  $handler->display->display_options['sorts']['field_slac_news_tags_tid']['field'] = 'field_slac_news_tags_tid';
  $handler->display->display_options['sorts']['field_slac_news_tags_tid']['relationship'] = 'reverse_field_slac_news_tags_node';
  $handler->display->display_options['sorts']['field_slac_news_tags_tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_slac_news_tags_tid']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'slac_news_tags' => 'slac_news_tags',
  );

  /* Display: News Tags */
  $handler = $view->new_display('panel_pane', 'News Tags', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'News';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['news_tags'] = $view;

  return $export;
}
