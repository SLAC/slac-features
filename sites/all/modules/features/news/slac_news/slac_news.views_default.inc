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
  /* Field: Content: News Source */
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: News Listing */
  $handler = $view->new_display('panel_pane', 'News Listing', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Type (field_slac_news_type) */
  $handler->display->display_options['arguments']['field_slac_news_type_value']['id'] = 'field_slac_news_type_value';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['table'] = 'field_data_field_slac_news_type';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['field'] = 'field_slac_news_type_value';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['case'] = 'lower';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['transform_dash'] = TRUE;
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
  /* Field: Content: News Source */
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'news/rss';
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'panel_pane_2' => 0,
  );

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
  /* Contextual filter: Content: Type (field_slac_news_type) */
  $handler->display->display_options['arguments']['field_slac_news_type_value']['id'] = 'field_slac_news_type_value';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['table'] = 'field_data_field_slac_news_type';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['field'] = 'field_slac_news_type_value';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['summary_options']['base_path'] = 'news';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_slac_news_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['case'] = 'ucfirst';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['field_slac_news_type_value']['transform_dash'] = TRUE;

  /* Display: Last 3 news */
  $handler = $view->new_display('panel_pane', 'Last 3 news', 'panel_pane_5');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all news »';
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  $handler->display->display_options['pane_category']['name'] = 'NEWS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['news'] = $view;

  return $export;
}
