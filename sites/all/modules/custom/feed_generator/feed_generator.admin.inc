<?php
/*
 * @file .inc
 */

// Page callback display list config feed_generator
function feed_generator_manage() {
  $types = _node_types_build();
  $output = '';

  $query = db_select('feed_generator', 'sf');
  $query->fields('sf');

  $results = $query->execute()->fetchAll();

  $feed_generators = array();
  foreach ($results as $rs) {
    $filters = array();
    $filters[] = 'Bundle: ' . $types->names[$rs->bundle];

    if ($rs->filter && $rs->filter_value) {
      $term_data = explode(', ', $rs->filter_value);
      $term_objects = taxonomy_term_load_multiple($term_data);

      $field_info = field_info_field($rs->filter);
      $vocabulary = $field_info['settings']['allowed_values'][0]['vocabulary'];
      $voca = taxonomy_vocabulary_machine_name_load($vocabulary);
      
      $vocab_names = '';
      $first_index = TRUE;
      foreach ($term_objects as $term_key => $term_obj) {
        if($first_index) {
          $vocab_names .= ' ' . $term_obj->name;
        } else {
          $vocab_names .= ', ' . $term_obj->name;
        }
        $first_index = FALSE;
      }

      if(!empty($voca->name) && !empty($vocab_names)) {
        $filters[] = $voca->name . ': ' . $vocab_names;
      }
    }

    $actions = array();

    $bundle = $rs->bundle;
    $title = $rs->title;
    $link_feed = str_replace(' ', '-', strtolower("feed/$bundle/$title"));
    $link_feed = str_replace('_', '-', strtolower($link_feed));
    $actions[] = l(t('View'), $link_feed);

    $actions[] = l(t('Edit'), 'admin/structure/feed_generator/' . $rs->fid . '/edit');

    $actions[] = l(t('Delete'), 'admin/structure/feed_generator/' . $rs->fid . '/delete');

    $feed_generators[] = array(
      'title' => $title,
      'type' => $rs->ical ? 'iCal' : 'RSS',
      'filter' => implode('<br />', $filters),
      'actions' => implode(' | ', $actions),
    );
  }

  $header = array(
    'title' => t('Title'),
    'type' => t('Type'),
    'filter' => t('Filter'),
    'actions' => t('Actions'),
  );

  if (!empty($feed_generators)) {
    $output .= theme('table', array(
      'header' => $header,
      'rows' => $feed_generators,
    ));
  }

  return $output;
}

// Form add feed_generator
function feed_generator_form_add($form, &$form_state, $feed_type) {
  if ($feed_type == 'rss') {
    drupal_set_title(t('Add News Feed'));
    $bundle = 'slac_news';
  }
  else {
    drupal_set_title(t('Add Event Feed'));
    $bundle = 'event';
  }

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#required' => TRUE,
  );

  $form['bundle'] = array(
    '#type' => 'value',
    '#value' => $bundle,
  );

  $options_filter = array(
    '' => t('- Select -'),
  );

  $fields = field_info_instances('node', $bundle);

  foreach ($fields as $field_name => $instance) {
    if ($instance['widget']['module'] == 'taxonomy') {
      $options_filter[$field_name] = $instance['label'];
    }
  }

  $form['filter'] = array(
    '#title' => t('Field filter'),
    '#type' => 'select',
    '#options' => $options_filter,
    '#ajax' => array(
      'callback' => 'ajax_change_filter_callback',
      'wrapper' => 'sf-filter-attribute',
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );

  $form['field_value'] = array(
    '#type' => 'container',
    '#id' => 'sf-filter-attribute',
  );

  if (!empty($form_state['values']['filter'])) {
    $field_instance = field_info_instance('node', $form_state['values']['filter'], $bundle);

    $form['field_value']['filter_value'] = array(
      '#type' => 'textfield',
      '#title' => t('Value filter'),
      '#required' => TRUE,
      '#autocomplete_path' => $field_instance['widget']['settings']['autocomplete_path'] . '/' . $form_state['values']['filter'],
      '#states' => array(
        'invisible' => array(
          ':input[name="filter"]' => array('value' => ''),
        )
      ),
    );
  }

  $form['is_ical'] = array(
    '#type' => 'value',
    '#value' => ($feed_type == 'rss') ? 0 : 1,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Create'),
  );

  return $form;
}

// ajax callback change filter
function ajax_change_filter_callback($form, &$form_state) {
  return $form['field_value'];
}

function feed_generator_form_add_submit($form, &$form_state) {
  $values = $form_state['values'];

  $bundle = $values['bundle'];
  $filter = !empty($values['filter']) ? $values['filter'] : '';
  $filter_value = !empty($values['filter_value']) ? $values['filter_value'] : '';
  $title = $values['title'];
  $ical = $values['is_ical'];

  $term_array = array();
  if ($filter_value) {
    $field_info = field_info_field($filter);
    $filter_terms = explode(', ', $filter_value);

    foreach ($filter_terms as $term) {
      $vocabulary = $field_info['settings']['allowed_values'][0]['vocabulary'];
      $term_object = taxonomy_get_term_by_name($term, $vocabulary);

      if (empty($term_object)) {
        drupal_set_message(t('@term is not a valid tag', array('@term' => $term)), 'error');
        return;
      }
      else {
        $term_id = array_keys($term_object);
        $term_array[] = $term_id[0]; // should only need one
      }
    }
  }

  // Save config
  $id = db_insert('feed_generator')// Table name no longer needs {}
    ->fields(array(
      'title' => $title,
      'bundle' => $bundle,
      'filter' => $filter,
      'filter_value' => implode(', ', $term_array),
      'ical' => $ical,
    ))
    ->execute();

  // Generate views feed
  $human_name = "SF $bundle $title";
  $view_name = str_replace(' ', '_', strtolower($human_name));
  $view_desc = "Feed of $bundle";
  $page_path = str_replace(' ', '-', strtolower("feed/$bundle/$title"));
  $page_path = str_replace('_', '-', strtolower($page_path));

  if ($ical) {
    $feed_path = $page_path . '.ics';
  }
  else {
    $feed_path = $page_path . '.xml';
  }

  $view = new view();
  $view->name = $view_name;
  $view->description = $view_desc;
  $view->tag = 'FeedGenerator';
  $view->base_table = 'node';
  $view->human_name = $human_name;
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = $title;
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

  if ($ical) {
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
    /* Field: Content: Event date */
    $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
    $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
    $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
    $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
    $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_slac_event_date']['type'] = 'calendar_date';
    $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
    );
    /* Field: Content: Event Scientific Area */
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['id'] = 'field_slac_event_scientific_area';
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['table'] = 'field_data_field_slac_event_scientific_area';
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['field'] = 'field_slac_event_scientific_area';
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['label'] = '';
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['element_label_colon'] = FALSE;
    /* Sort criterion: Content: Event date -  start date (field_slac_event_date) */
    $handler->display->display_options['sorts']['field_slac_event_date_value']['id'] = 'field_slac_event_date_value';
    $handler->display->display_options['sorts']['field_slac_event_date_value']['table'] = 'field_data_field_slac_event_date';
    $handler->display->display_options['sorts']['field_slac_event_date_value']['field'] = 'field_slac_event_date_value';
    $handler->display->display_options['sorts']['field_slac_event_date_value']['order'] = 'DESC';
  }

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
    $bundle => $bundle,
  );

  /* Filter criterion: Content: Tags (field_tags) */
  if (isset($term_id)) {
    $field = $filter . '_tid';
    $handler->display->display_options['filters'][$field]['id'] = $field;
    $handler->display->display_options['filters'][$field]['table'] = 'field_data_' . $filter;
    $handler->display->display_options['filters'][$field]['field'] = $filter . '_tid';
    $handler->display->display_options['filters'][$field]['value'] = drupal_map_assoc(array_values($term_id));
    $handler->display->display_options['filters'][$field]['type'] = 'select';
    $handler->display->display_options['filters'][$field]['vocabulary'] = $vocabulary;
  }

  /* Display: Feed iCal */
  if ($ical) {
    $handler = $view->new_display('feed', 'Feed', 'feed_1');
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['style_plugin'] = 'date_ical';
    $handler->display->display_options['style_options']['cal_name'] = $title;
    $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
    $handler->display->display_options['row_plugin'] = 'date_ical_fields';
    $handler->display->display_options['row_options']['date_field'] = 'field_slac_event_date';
    $handler->display->display_options['row_options']['title_field'] = 'title';
    $handler->display->display_options['row_options']['description_field'] = 'body';
    $handler->display->display_options['row_options']['location_field'] = 'field_slac_event_scientific_area';
    $handler->display->display_options['row_options']['additional_settings'] = array(
      'skip_blank_dates' => 1,
    );
    $handler->display->display_options['path'] = $feed_path;
    $handler->display->display_options['displays'] = array(
      'page_1' => 'page_1',
      'default' => 0,
    );
  }

  /* Display: Feed RSS */
  else {
    $handler = $view->new_display('feed', 'Feed', 'feed_1');
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['style_plugin'] = 'rss';
    $handler->display->display_options['row_plugin'] = 'node_rss';
    $handler->display->display_options['path'] = $feed_path;
    $handler->display->display_options['displays'] = array(
      'page_1' => 'page_1',
      'default' => 0,
    );
  }

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = $page_path;

  $view->save();

  drupal_goto('admin/structure/feed_generator');
}

// Form edit feed_generator
function feed_generator_form_edit($form, &$form_state, $feed) {
  $form['feed_id'] = array(
    '#type' => 'value',
    '#value' => $feed['fid'],
  );

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#required' => TRUE,
    '#default_value' => $feed['title'],
  );

  $bundle = $feed['bundle'];

  $form['bundle'] = array(
    '#type' => 'value',
    '#value' => $bundle,
  );

  if (!$feed['ical']) {
    $options_filter = array(
      '' => t('- Select -'),
    );

    $fields = field_info_instances('node', $bundle);

    foreach ($fields as $field_name => $instance) {
      if ($instance['widget']['module'] == 'taxonomy') {
        $options_filter[$field_name] = $instance['label'];
      }
    }

    $form['filter'] = array(
      '#title' => 'Field filter',
      '#type' => 'select',
      '#options' => $options_filter,
      '#ajax' => array(
        'callback' => 'ajax_change_filter_callback',
        'wrapper' => 'sf-filter-attribute',
        'method' => 'replace',
        'effect' => 'fade',
      ),
      '#default_value' => $feed['filter'],
    );

    $form['field_value'] = array(
      '#type' => 'container',
      '#id' => 'sf-filter-attribute',
    );

    if (!empty($form_state['values']['filter'])) {
      $field_instance = field_info_instance('node', $form_state['values']['filter'], $form_state['values']['bundle']);
      $filter = $form_state['values']['filter'];
      $value_filter = '';

      $term_data = explode(', ', $feed['filter_value']);
      $term_objects = taxonomy_term_load_multiple($term_data);

      $voca = taxonomy_vocabulary_machine_name_load($feed['bundle']);
      
      $vocab_names = '';
      $first_index = TRUE;
      foreach ($term_objects as $term_key => $term_obj) {
        if($first_index) {
          $vocab_names .= ' ' . $term_obj->name;
        } else {
          $vocab_names .= ', ' . $term_obj->name;
        }
        $first_index = FALSE;
      }

      if (isset($field_instance)) {
        $form['field_value']['filter_value'] = array(
          '#type' => 'textfield',
          '#title' => 'Value filter',
          '#required' => TRUE,
          '#autocomplete_path' => $field_instance['widget']['settings']['autocomplete_path'] . '/' . $filter,
          '#default_value' => $vocab_names,
          '#states' => array(
            'invisible' => array(
              ':input[name="filter"]' => array('value' => ''),
            )
          ),
        );
      }
    }
  }

  $form['is_ical'] = array(
    '#type' => 'value',
    '#value' => $feed['ical'],
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

function feed_generator_form_edit_submit($form, &$form_state) {
  $values = $form_state['values'];
  $fid = $values['feed_id'];
  $feed = feed_generator_load($fid);
  $human_name = "SF " . $feed['bundle'] . " " . $feed['title'];
  $view_name = str_replace(' ', '_', strtolower($human_name));
  $views = views_get_view($view_name);
  if (!empty($views)) {
    $views->delete(TRUE);
  }

  $bundle = $values['bundle'];
  $filter = empty($values['filter']) ? '' : $values['filter'];
  $filter_value = !empty($values['filter_value']) ? $values['filter_value'] : '';
  $title = $values['title'];
  $ical = $values['is_ical'];

  $term_array;
  if ($filter_value) {
    $field_info = field_info_field($filter);
    $filter_terms = explode(', ', $filter_value);

    foreach ($filter_terms as $term) {
      $vocabulary = $field_info['settings']['allowed_values'][0]['vocabulary'];
      $term_object = taxonomy_get_term_by_name($term, $vocabulary);

      if (empty($term_object)) {
        drupal_set_message(t('@term is not a valid tag', array('@term' => $term)), 'error');
        return;
      }
      else {
        $term_id = array_keys($term_object);
        $term_array[] = $term_id[0]; // should only need one
      }
    }
  }

  // Save config
  $id = db_update('feed_generator')// Table name no longer needs {}
  ->fields(array(
      'title' => $title,
      'bundle' => $bundle,
      'filter' => $filter,
      'filter_value' => implode(', ', $term_array),
      'ical' => $ical,
    ))
    ->condition('fid', $fid)
    ->execute();

  // Generate views feed
  $human_name = "SF $bundle $title";
  $view_name = str_replace(' ', '_', strtolower($human_name));
  $view_desc = "Feed of $bundle";
  $page_path = str_replace(' ', '-', strtolower("feed/$bundle/$title"));
  $page_path = str_replace('_', '-', strtolower($page_path));

  if ($ical) {
    $feed_path = $page_path . '.ics';
  }
  else {
    $feed_path = $page_path . '.xml';
  }

  $view = new view();
  $view->name = $view_name;
  $view->description = $view_desc;
  $view->tag = 'FeedGenerator';
  $view->base_table = 'node';
  $view->human_name = $human_name;
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = $title;
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

  if ($ical) {
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
    /* Field: Content: Event date */
    $handler->display->display_options['fields']['field_slac_event_date']['id'] = 'field_slac_event_date';
    $handler->display->display_options['fields']['field_slac_event_date']['table'] = 'field_data_field_slac_event_date';
    $handler->display->display_options['fields']['field_slac_event_date']['field'] = 'field_slac_event_date';
    $handler->display->display_options['fields']['field_slac_event_date']['label'] = '';
    $handler->display->display_options['fields']['field_slac_event_date']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['field_slac_event_date']['type'] = 'calendar_date';
    $handler->display->display_options['fields']['field_slac_event_date']['settings'] = array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
    );
    /* Field: Content: Event Scientific Area */
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['id'] = 'field_slac_event_scientific_area';
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['table'] = 'field_data_field_slac_event_scientific_area';
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['field'] = 'field_slac_event_scientific_area';
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['label'] = '';
    $handler->display->display_options['fields']['field_slac_event_scientific_area']['element_label_colon'] = FALSE;
  }

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
    $bundle => $bundle,
  );

  /* Filter criterion: Content: Tags (field_tags) */
  if (isset($term_id)) {
    $field = $filter . '_tid';
    $handler->display->display_options['filters'][$field]['id'] = $field;
    $handler->display->display_options['filters'][$field]['table'] = 'field_data_' . $filter;
    $handler->display->display_options['filters'][$field]['field'] = $filter . '_tid';
    $handler->display->display_options['filters'][$field]['value'] = array(
      $term_id => implode(', ', $term_array),
    );
    $handler->display->display_options['filters'][$field]['type'] = 'select';
    $handler->display->display_options['filters'][$field]['vocabulary'] = $vocabulary;
  }

  /* Display: Feed */
  if ($ical) {
    /* Display: Feed */
    $handler = $view->new_display('feed', 'Feed', 'feed_1');
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['style_plugin'] = 'date_ical';
    $handler->display->display_options['style_options']['cal_name'] = $title;
    $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
    $handler->display->display_options['row_plugin'] = 'date_ical_fields';
    $handler->display->display_options['row_options']['date_field'] = 'field_slac_event_date';
    $handler->display->display_options['row_options']['title_field'] = 'title';
    $handler->display->display_options['row_options']['description_field'] = 'body';
    $handler->display->display_options['row_options']['location_field'] = 'field_slac_event_scientific_area';
    $handler->display->display_options['row_options']['additional_settings'] = array(
      'skip_blank_dates' => 1,
    );
    $handler->display->display_options['path'] = $feed_path;
    $handler->display->display_options['displays'] = array(
      'page_1' => 'page_1',
      'default' => 0,
    );
  }
  else {
    $handler = $view->new_display('feed', 'Feed', 'feed_1');
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['style_plugin'] = 'rss';
    $handler->display->display_options['row_plugin'] = 'node_rss';
    $handler->display->display_options['path'] = $feed_path;
    $handler->display->display_options['displays'] = array(
      'page_1' => 'page_1',
      'default' => 0,
    );
  }

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = $page_path;


  $view->save();

  drupal_goto('admin/structure/feed_generator');
}

//form confirm delete og_tag
function feed_generator_form_delete($form, &$form_state, $feed) {
  $form['#fid'] = $feed;
  return confirm_form($form, t('Are you sure you want to delete the this Feed?'), 'admin/structure/feed_generator', t('This action cannot be undone.'), t('Delete'), t('Cancel'));
}

//function submit delete og tag
function feed_generator_form_delete_submit($form, &$form_state) {
  $fid = $form['#fid']['fid'];
  $feed = feed_generator_load($fid);
  $human_name = "SF " . $feed['bundle'] . " " . $feed['title'];
  $view_name = str_replace(' ', '_', strtolower($human_name));
  $views = views_get_view($view_name);
  if (!empty($views)) {
    $views->delete(TRUE);
  }

  $num_deleted = db_delete('feed_generator')
    ->condition('fid', $fid)
    ->execute();

  drupal_goto('admin/structure/feed_generator');
}
