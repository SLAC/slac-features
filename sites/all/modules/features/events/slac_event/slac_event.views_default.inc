<?php
/**
 * @file
 * slac_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slac_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Legend';
  $handler->display->display_options['footer']['area']['content'] = 'Colors indicate event series.
';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'Legend';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'event_calendar_legend:block';
  /* Relationship: Content: Event Series (field_slac_event_category) */
  $handler->display->display_options['relationships']['field_slac_event_category_tid']['id'] = 'field_slac_event_category_tid';
  $handler->display->display_options['relationships']['field_slac_event_category_tid']['table'] = 'field_data_field_slac_event_category';
  $handler->display->display_options['relationships']['field_slac_event_category_tid']['field'] = 'field_slac_event_category_tid';
  /* Field: Content: Event Series */
  $handler->display->display_options['fields']['field_slac_event_category']['id'] = 'field_slac_event_category';
  $handler->display->display_options['fields']['field_slac_event_category']['table'] = 'field_data_field_slac_event_category';
  $handler->display->display_options['fields']['field_slac_event_category']['field'] = 'field_slac_event_category';
  $handler->display->display_options['fields']['field_slac_event_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_slac_event_category_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Content with background */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Content with background';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-wrapper"><div class="event-date">[field_slac_event_date]</div><div class="event-title event-title">[title]</div></div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Event Color */
  $handler->display->display_options['fields']['field_field_slac_event_color']['id'] = 'field_field_slac_event_color';
  $handler->display->display_options['fields']['field_field_slac_event_color']['table'] = 'field_data_field_field_slac_event_color';
  $handler->display->display_options['fields']['field_field_slac_event_color']['field'] = 'field_field_slac_event_color';
  $handler->display->display_options['fields']['field_field_slac_event_color']['relationship'] = 'field_slac_event_category_tid';
  $handler->display->display_options['fields']['field_field_slac_event_color']['label'] = '';
  $handler->display->display_options['fields']['field_field_slac_event_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_field_slac_event_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_slac_event_color']['settings'] = array(
    'selector' => '.event-title > a',
    'property' => 'color',
    'important' => 1,
  );
  /* Sort criterion: Content: Event date -  start date (field_slac_event_date) */
  $handler->display->display_options['sorts']['field_slac_event_date_value']['id'] = 'field_slac_event_date_value';
  $handler->display->display_options['sorts']['field_slac_event_date_value']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['sorts']['field_slac_event_date_value']['field'] = 'field_slac_event_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Event Series (field_slac_event_category) */
  $handler->display->display_options['filters']['field_slac_event_category_tid']['id'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['table'] = 'field_data_field_slac_event_category';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['field'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['operator_id'] = 'field_slac_event_category_tid_op';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['operator'] = 'field_slac_event_category_tid_op';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['identifier'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_slac_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['vocabulary'] = 'event_categories';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'event-calendar-page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Legend';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Colors indicate event series.</h3>
';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'Legend';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'event_calendar_legend:block';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['path'] = 'calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'event-calendar-page with-week';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['path'] = 'calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['path'] = 'calendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['path'] = 'calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );

  /* Display: iCal */
  $handler = $view->new_display('feed', 'iCal', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_slac_event_date.field_slac_event_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['path'] = 'calendar/ical/%/calendar.ics';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'block_1' => 'block_1',
    'block_2' => 'block_2',
    'default' => 0,
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'calendar/feeds';

  /* Display: Event Calendar block */
  $handler = $view->new_display('panel_pane', 'Event Calendar block', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Calendar';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'event-calendar-block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more events';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Month */
  $handler->display->display_options['fields']['field_slac_event_date_1']['id'] = 'field_slac_event_date_1';
  $handler->display->display_options['fields']['field_slac_event_date_1']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['ui_name'] = 'Month';
  $handler->display->display_options['fields']['field_slac_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['settings'] = array(
    'format_type' => 'full_text_month',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_1']['delta_offset'] = '0';
  /* Field: Day */
  $handler->display->display_options['fields']['field_slac_event_date_2']['id'] = 'field_slac_event_date_2';
  $handler->display->display_options['fields']['field_slac_event_date_2']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['ui_name'] = 'Day';
  $handler->display->display_options['fields']['field_slac_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['settings'] = array(
    'format_type' => 'short_day',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_2']['delta_offset'] = '0';
  /* Field: Month and date */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Month and date';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="date-month-day">
<div class="date-month">[field_slac_event_date_1]</div>
<div class="date-day">[field_slac_event_date_2]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ', [field_location]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="calendar-icon"></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event date -  start date (field_slac_event_date) */
  $handler->display->display_options['filters']['field_slac_event_date_value']['id'] = 'field_slac_event_date_value';
  $handler->display->display_options['filters']['field_slac_event_date_value']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['filters']['field_slac_event_date_value']['field'] = 'field_slac_event_date_value';
  $handler->display->display_options['filters']['field_slac_event_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_slac_event_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_slac_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_slac_event_date_value']['year_range'] = '-0:+3';
  $handler->display->display_options['pane_category']['name'] = 'Calendar';
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
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'event_calendar_legend';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Event Calendar legend';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Legend';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Legend';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Taxonomy term: Event Color */
  $handler->display->display_options['fields']['field_field_slac_event_color']['id'] = 'field_field_slac_event_color';
  $handler->display->display_options['fields']['field_field_slac_event_color']['table'] = 'field_data_field_field_slac_event_color';
  $handler->display->display_options['fields']['field_field_slac_event_color']['field'] = 'field_field_slac_event_color';
  $handler->display->display_options['fields']['field_field_slac_event_color']['label'] = '';
  $handler->display->display_options['fields']['field_field_slac_event_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_field_slac_event_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_slac_event_color']['type'] = 'color_field_swatch';
  $handler->display->display_options['fields']['field_field_slac_event_color']['settings'] = array(
    'width' => '10',
    'height' => '10',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="legend-item-wrapper">
<div class="legend-item-color">
[field_field_slac_event_color]
</div>
<div class="legend-item-name">
[name]
</div>
</div>';
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'event_categories' => 'event_categories',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $export['event_calendar_legend'] = $view;

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_slac_event_category_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_event_tags_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'calendar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Calendar main area title */
  $handler->display->display_options['header']['calendar_main_area_title']['id'] = 'calendar_main_area_title';
  $handler->display->display_options['header']['calendar_main_area_title']['table'] = 'views';
  $handler->display->display_options['header']['calendar_main_area_title']['field'] = 'calendar_main_area_title';
  $handler->display->display_options['header']['calendar_main_area_title']['label'] = 'calendar_main_area_title';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No events for this date.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'hour_minute',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_1']['id'] = 'field_slac_event_date_1';
  $handler->display->display_options['fields']['field_slac_event_date_1']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['text'] = '- [field_slac_event_date_1]';
  $handler->display->display_options['fields']['field_slac_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_event_link']['id'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['table'] = 'field_data_field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['field'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_event_link']['type'] = 'link_plain';
  /* Sort criterion: Content: Event date -  start date (field_slac_event_date) */
  $handler->display->display_options['sorts']['field_slac_event_date_value']['id'] = 'field_slac_event_date_value';
  $handler->display->display_options['sorts']['field_slac_event_date_value']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['sorts']['field_slac_event_date_value']['field'] = 'field_slac_event_date_value';
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['default_argument_options']['code'] = 'return _slac_event_get_date_argument_events_main_content();';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Series (field_slac_event_category) */
  $handler->display->display_options['filters']['field_slac_event_category_tid']['id'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['table'] = 'field_data_field_slac_event_category';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['field'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['operator_id'] = 'field_slac_event_category_tid_op';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['label'] = 'Filter by Seminar Series';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['operator'] = 'field_slac_event_category_tid_op';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['identifier'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_slac_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['vocabulary'] = 'event_categories';
  /* Filter criterion: Content: Event tags (field_event_tags) */
  $handler->display->display_options['filters']['field_event_tags_tid']['id'] = 'field_event_tags_tid';
  $handler->display->display_options['filters']['field_event_tags_tid']['table'] = 'field_data_field_event_tags';
  $handler->display->display_options['filters']['field_event_tags_tid']['field'] = 'field_event_tags_tid';
  $handler->display->display_options['filters']['field_event_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['operator_id'] = 'field_event_tags_tid_op';
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['label'] = 'Filter by Tags';
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['operator'] = 'field_event_tags_tid_op';
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['identifier'] = 'field_event_tags_tid';
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_event_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_tags_tid']['vocabulary'] = 'event_tags';

  /* Display: Main content */
  $handler = $view->new_display('panel_pane', 'Main content', 'panel_pane_1');
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Event date -  start date (field_slac_event_date) */
  $handler->display->display_options['filters']['field_slac_event_date_value']['id'] = 'field_slac_event_date_value';
  $handler->display->display_options['filters']['field_slac_event_date_value']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['filters']['field_slac_event_date_value']['field'] = 'field_slac_event_date_value';
  $handler->display->display_options['filters']['field_slac_event_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_slac_event_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_slac_event_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_slac_event_date_value']['default_date'] = 'now';

  /* Display: Calendar - Month */
  $handler = $view->new_display('panel_pane', 'Calendar - Month', 'month');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '99';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slac_event_date' => 'field_slac_event_date',
    'field_slac_event_date_1' => 'field_slac_event_date_1',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'page' => '#ffffff',
    'blog' => '#ffffff',
    'slac_sc_catalog_item' => '#ffffff',
    'event' => '#ffffff',
    'faq' => '#ffffff',
    'kb_article' => '#ffffff',
    'landing_page' => '#ffffff',
    'slac_news' => '#ffffff',
    'newsletter' => '#ffffff',
    'simplenews' => '#ffffff',
    'support_ticket' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Header Content */
  $handler->display->display_options['header']['calendar_header_content']['id'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['table'] = 'views';
  $handler->display->display_options['header']['calendar_header_content']['field'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['ui_name'] = 'Header Content';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['default_argument_options']['code'] = 'return _slac_event_get_date_argument_events_calendar();';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-100:+100';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['pane_title'] = 'Events Calendar Month view';
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events iCalendar Feed';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_1';
  $handler->display->display_options['link_url'] = 'events/feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_slac_event_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['location_field'] = 'field_slac_event_scientific_area';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date -  start date (field_slac_event_date) */
  $handler->display->display_options['sorts']['field_slac_event_date_value']['id'] = 'field_slac_event_date_value';
  $handler->display->display_options['sorts']['field_slac_event_date_value']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['sorts']['field_slac_event_date_value']['field'] = 'field_slac_event_date_value';
  $handler->display->display_options['sorts']['field_slac_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Event date -  start date (field_slac_event_date) */
  $handler->display->display_options['filters']['field_slac_event_date_value']['id'] = 'field_slac_event_date_value';
  $handler->display->display_options['filters']['field_slac_event_date_value']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['filters']['field_slac_event_date_value']['field'] = 'field_slac_event_date_value';
  $handler->display->display_options['filters']['field_slac_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_slac_event_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_slac_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_slac_event_date_value']['year_range'] = '-0:+3';
  $handler->display->display_options['path'] = 'events/feed';
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'panel_pane_2' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['pane'] = TRUE;

  /* Display: Calendar - Week */
  $handler = $view->new_display('panel_pane', 'Calendar - Week', 'week');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '99';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '2';
  $handler->display->display_options['style_options']['max_items'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slac_event_date' => 'field_slac_event_date',
    'field_slac_event_date_1' => 'field_slac_event_date_1',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'page' => '#ffffff',
    'blog' => '#ffffff',
    'slac_sc_catalog_item' => '#ffffff',
    'event' => '#ffffff',
    'faq' => '#ffffff',
    'kb_article' => '#ffffff',
    'landing_page' => '#ffffff',
    'slac_news' => '#ffffff',
    'newsletter' => '#ffffff',
    'simplenews' => '#ffffff',
    'support_ticket' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Header Content */
  $handler->display->display_options['header']['calendar_header_content']['id'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['table'] = 'views';
  $handler->display->display_options['header']['calendar_header_content']['field'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['ui_name'] = 'Header Content';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'hour_minute',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_1']['id'] = 'field_slac_event_date_1';
  $handler->display->display_options['fields']['field_slac_event_date_1']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['text'] = '- [field_slac_event_date_1]';
  $handler->display->display_options['fields']['field_slac_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_event_link']['id'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['table'] = 'field_data_field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['field'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_event_link']['type'] = 'link_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/event/[nid]/calendar.ics" class="list-view-ics">ics</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['default_argument_options']['code'] = 'return _slac_event_get_date_argument_events_calendar(\'week\');';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-100:+100';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['pane_title'] = 'Events Calendar Week view';
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Calendar - Day */
  $handler = $view->new_display('panel_pane', 'Calendar - Day', 'day');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '99';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '2';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slac_event_date' => 'field_slac_event_date',
    'field_slac_event_date_1' => 'field_slac_event_date_1',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'page' => '#ffffff',
    'blog' => '#ffffff',
    'slac_sc_catalog_item' => '#ffffff',
    'event' => '#ffffff',
    'faq' => '#ffffff',
    'kb_article' => '#ffffff',
    'landing_page' => '#ffffff',
    'slac_news' => '#ffffff',
    'newsletter' => '#ffffff',
    'simplenews' => '#ffffff',
    'support_ticket' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Header Content */
  $handler->display->display_options['header']['calendar_header_content']['id'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['table'] = 'views';
  $handler->display->display_options['header']['calendar_header_content']['field'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['ui_name'] = 'Header Content';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_event_link']['id'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['table'] = 'field_data_field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['field'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_slac_event_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_event_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'event-calendar',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_slac_event_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_2']['id'] = 'field_slac_event_date_2';
  $handler->display->display_options['fields']['field_slac_event_date_2']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['settings'] = array(
    'format_type' => 'day_of_week_month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_2']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_1']['id'] = 'field_slac_event_date_1';
  $handler->display->display_options['fields']['field_slac_event_date_1']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['text'] = '- [field_slac_event_date_1]';
  $handler->display->display_options['fields']['field_slac_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class=\'list-date list-fulldate\'>[field_slac_event_date_2]</div>
<div class=\'list-date list-starttime\'>[field_slac_event_date]</div>
<div class=\'list-date list-endtime\'>[field_slac_event_date_1]</div>
<div class=\'list-title\'>[title]</div>
<div class=\'list-location\'>[field_location]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/event/[nid]/calendar.ics" class="list-view-ics">ics</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['default_argument_options']['code'] = 'return _slac_event_get_date_argument_events_calendar(\'day\');';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-100:+100';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['pane_title'] = 'Events Calendar Day view';
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Calendar - Month list */
  $handler = $view->new_display('panel_pane', 'Calendar - Month list', 'month_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slac_event_date' => 'field_slac_event_date',
    'field_slac_event_date_1' => 'field_slac_event_date_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Header Content */
  $handler->display->display_options['header']['calendar_header_content']['id'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['table'] = 'views';
  $handler->display->display_options['header']['calendar_header_content']['field'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['ui_name'] = 'Header Content';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_event_link']['id'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['table'] = 'field_data_field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['field'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_link']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['field_slac_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_slac_event_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_event_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'crop_portrait',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_slac_event_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_2']['id'] = 'field_slac_event_date_2';
  $handler->display->display_options['fields']['field_slac_event_date_2']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['settings'] = array(
    'format_type' => 'day_of_week_month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_2']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_1']['id'] = 'field_slac_event_date_1';
  $handler->display->display_options['fields']['field_slac_event_date_1']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['text'] = '- [field_slac_event_date_1]';
  $handler->display->display_options['fields']['field_slac_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'list-title\'>[title]</div>
<div class=\'list-date list-fulldate\'>[field_slac_event_date_2]</div>
<div class=\'list-date list-starttime\'>[field_slac_event_date]</div>
<div class=\'list-date list-endtime\'>[field_slac_event_date_1]</div>
<div class=\'list-location\'>[field_location]</div>
<div class=\'list-teaser\'>[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'event-list-view-middle-container';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/event/[nid]/calendar.ics" class="list-view-ics">ics</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['default_argument_options']['code'] = 'return _slac_event_get_date_argument_events_calendar();';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-100:+100';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['pane_title'] = 'Events Calendar Month list view';
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Calendar - Week list */
  $handler = $view->new_display('panel_pane', 'Calendar - Week list', 'week_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slac_event_date' => 'field_slac_event_date',
    'field_slac_event_date_1' => 'field_slac_event_date_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Header Content */
  $handler->display->display_options['header']['calendar_header_content']['id'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['table'] = 'views';
  $handler->display->display_options['header']['calendar_header_content']['field'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['ui_name'] = 'Header Content';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_event_link']['id'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['table'] = 'field_data_field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['field'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_slac_event_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_event_link']['type'] = 'link_absolute';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'crop_portrait',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_slac_event_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_2']['id'] = 'field_slac_event_date_2';
  $handler->display->display_options['fields']['field_slac_event_date_2']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['settings'] = array(
    'format_type' => 'day_of_week_month_and_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_2']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_1']['id'] = 'field_slac_event_date_1';
  $handler->display->display_options['fields']['field_slac_event_date_1']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['text'] = '- [field_slac_event_date_1]';
  $handler->display->display_options['fields']['field_slac_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'list-title\'>[title]</div>
<div class=\'list-date list-fulldate\'>[field_slac_event_date_2]</div>
<div class=\'list-date list-starttime\'>[field_slac_event_date]</div>
<div class=\'list-date list-endtime\'>[field_slac_event_date_1]</div>
<div class=\'list-location\'>[field_location]</div>
<div class=\'list-teaser\'>[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'event-list-view-middle-container';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/event/[nid]/calendar.ics" class="list-view-ics">ics</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['default_argument_options']['code'] = 'return _slac_event_get_date_argument_events_calendar(\'week\');';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-100:+100';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['pane_title'] = 'Events Calendar Week list view';
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Calendar - Day list */
  $handler = $view->new_display('panel_pane', 'Calendar - Day list', 'day_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Header Content */
  $handler->display->display_options['header']['calendar_header_content']['id'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['table'] = 'views';
  $handler->display->display_options['header']['calendar_header_content']['field'] = 'calendar_header_content';
  $handler->display->display_options['header']['calendar_header_content']['ui_name'] = 'Header Content';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_event_link']['id'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['table'] = 'field_data_field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['field'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_slac_event_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_event_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'crop_portrait',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_slac_event_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_2']['id'] = 'field_slac_event_date_2';
  $handler->display->display_options['fields']['field_slac_event_date_2']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['settings'] = array(
    'format_type' => 'day_of_week_month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_2']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_1']['id'] = 'field_slac_event_date_1';
  $handler->display->display_options['fields']['field_slac_event_date_1']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['text'] = '- [field_slac_event_date_1]';
  $handler->display->display_options['fields']['field_slac_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'list-title\'>[title]</div>
<div class=\'list-date list-fulldate\'>[field_slac_event_date_2]</div>
<div class=\'list-date list-starttime\'>[field_slac_event_date]</div>
<div class=\'list-date list-endtime\'>[field_slac_event_date_1]</div>
<div class=\'list-location\'>[field_location]</div>
<div class=\'list-teaser\'>[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/event/[nid]/calendar.ics" class="list-view-ics">ics</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['default_argument_options']['code'] = 'return _slac_event_get_date_argument_events_calendar(\'day\');';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-100:+100';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['pane_title'] = 'Events Calendar Day List view';
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Minicalendar */
  $handler = $view->new_display('panel_pane', 'Minicalendar', 'minicalendar');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slac_event_date' => 'field_slac_event_date',
    'field_slac_event_date_1' => 'field_slac_event_date_1',
  );
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'page' => '#ffffff',
    'blog' => '#ffffff',
    'slac_sc_catalog_item' => '#ffffff',
    'event' => '#ffffff',
    'faq' => '#ffffff',
    'kb_article' => '#ffffff',
    'landing_page' => '#ffffff',
    'slac_news' => '#ffffff',
    'newsletter' => '#ffffff',
    'simplenews' => '#ffffff',
    'support_ticket' => '#ffffff',
    'webform' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Minicalendar pager */
  $handler->display->display_options['header']['calendar_mini_pager']['id'] = 'calendar_mini_pager';
  $handler->display->display_options['header']['calendar_mini_pager']['table'] = 'views';
  $handler->display->display_options['header']['calendar_mini_pager']['field'] = 'calendar_mini_pager';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['default_argument_options']['code'] = 'return _slac_event_get_date_argument_events_calendar();';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-100:+100';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_slac_event_date.field_slac_event_date_value' => 'field_data_field_slac_event_date.field_slac_event_date_value',
  );
  $handler->display->display_options['pane_title'] = 'Events Calendar Minicalendar view';
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Calendar - Taxonomy Term list */
  $handler = $view->new_display('panel_pane', 'Calendar - Taxonomy Term list', 'taxonomy_term_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slac_event_date' => 'field_slac_event_date',
    'field_slac_event_date_1' => 'field_slac_event_date_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Redirect link */
  $handler->display->display_options['fields']['field_slac_event_link']['id'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['table'] = 'field_data_field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['field'] = 'field_slac_event_link';
  $handler->display->display_options['fields']['field_slac_event_link']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_slac_event_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slac_event_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'crop_portrait',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_slac_event_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_2']['id'] = 'field_slac_event_date_2';
  $handler->display->display_options['fields']['field_slac_event_date_2']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_2']['settings'] = array(
    'format_type' => 'day_of_week_month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_2']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date']['delta_offset'] = '0';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date_1']['id'] = 'field_slac_event_date_1';
  $handler->display->display_options['fields']['field_slac_event_date_1']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['alter']['text'] = '- [field_slac_event_date_1]';
  $handler->display->display_options['fields']['field_slac_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date_1']['settings'] = array(
    'format_type' => 'hour_minute_ampm',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_slac_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'list-title\'>[title]</div>
<div class=\'list-date list-fulldate\'>[field_slac_event_date_2]</div>
<div class=\'list-date list-starttime\'>[field_slac_event_date]</div>
<div class=\'list-date list-endtime\'>[field_slac_event_date_1]</div>
<div class=\'list-location\'>[field_location]</div>
<div class=\'list-teaser\'>[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'event-list-view-middle-container';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="/event/[nid]/calendar.ics" class="list-view-ics">ics</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event Series (field_slac_event_category) */
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['id'] = 'field_slac_event_category_tid';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['table'] = 'field_data_field_slac_event_category';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['field'] = 'field_slac_event_category_tid';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['validate_options']['vocabularies'] = array(
    'event_categories' => 'event_categories',
  );
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_slac_event_category_tid']['validate']['fail'] = 'empty';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event date - end date (field_slac_event_date:value2) */
  $handler->display->display_options['filters']['field_slac_event_date_value2']['id'] = 'field_slac_event_date_value2';
  $handler->display->display_options['filters']['field_slac_event_date_value2']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['filters']['field_slac_event_date_value2']['field'] = 'field_slac_event_date_value2';
  $handler->display->display_options['filters']['field_slac_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_slac_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_slac_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Event Series (field_slac_event_category) */
  $handler->display->display_options['filters']['field_slac_event_category_tid']['id'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['table'] = 'field_data_field_slac_event_category';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['field'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_slac_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['operator_id'] = 'field_slac_event_category_tid_op';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['label'] = 'Filter by Seminar Series';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['operator'] = 'field_slac_event_category_tid_op';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['identifier'] = 'field_slac_event_category_tid';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_slac_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_slac_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_slac_event_category_tid']['vocabulary'] = 'event_categories';
  /* Filter criterion: Content: Event tags (field_event_tags) */
  $handler->display->display_options['filters']['field_event_tags_tid']['id'] = 'field_event_tags_tid';
  $handler->display->display_options['filters']['field_event_tags_tid']['table'] = 'field_data_field_event_tags';
  $handler->display->display_options['filters']['field_event_tags_tid']['field'] = 'field_event_tags_tid';
  $handler->display->display_options['filters']['field_event_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['operator_id'] = 'field_event_tags_tid_op';
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['label'] = 'Filter by Tags';
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['operator'] = 'field_event_tags_tid_op';
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['identifier'] = 'field_event_tags_tid';
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_event_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_tags_tid']['vocabulary'] = 'event_tags';
  $handler->display->display_options['pane_title'] = 'Events Calendar Taxonomy Term view';
  $handler->display->display_options['link_to_view'] = '0';
  $export['events'] = $view;

  $view = new view();
  $view->name = 'ical_event';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'iCal event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
  $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['no_calname'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_slac_event_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['location_field'] = 'field_location';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 1,
  );
  $handler->display->display_options['path'] = 'event/%/calendar.ics';
  $export['ical_event'] = $view;

  return $export;
}
