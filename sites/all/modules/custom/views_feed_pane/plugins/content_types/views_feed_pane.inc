<?php

/**
 * @file
 * Plugin to display feed icon for the feeds display.
 */

$plugin = array(
  'title' => t('View feed icon'),
  'category' => t('Feed icon'),
  'description' => t('Display the view feed icon.'),
);

/**
 * Define multiple child plugins.
 *
 * Function name consists of
 * $plugin['module'] . '_' . $plugin['name'] . '_content_type_' . 'content_types'
 *
 * @see function ctools_content_process().
 */
function views_feed_pane_views_feed_pane_content_type_content_types() {
  views_include('cache');
  $data = views_cache_get('views_feed_pane_all', TRUE);
  if (!empty($data->data)) {
    $types = $data->data;
  }

  if (empty($types)) {
    $types = array();
    $views = views_get_all_views();

    foreach ($views as $view) {
      foreach ($view->display as $display) {
        if ($display->display_plugin == 'feed' 
            && isset($display->display_options['pane'])
            && $display->display_options['pane']
          ) {
          $types[$view->name . ':' . $display->id] = array(
            'view' => $view->name,
            'display' => $display->id,
            'title' => $view->get_human_name() . ': ' . $display->display_title,
            'description' => filter_xss_admin($view->description),
            'category' => t('Views feed icon'),
          );
        }
      }
    }

    views_cache_set('views_feed_pane_all', $types, TRUE);
  }

  return $types;
}

/**
 * Render callback.
 *
 * $plugin['module'] . '_' . $plugin['name'] . '_content_type_' . 'render'
 */
function views_feed_pane_views_feed_pane_content_type_render($subtype, $conf, $panel_args, $contexts) {
  list($view_name, $display_id) = explode(':', $subtype);
  $view = views_get_view($view_name);
  $url = $view->display[$display_id]->display_options['path'];

  $block = new stdClass();
  $block->module = 'views';
  $block->title = '';
  $block->content = theme('feed_pane_icon', array('url' => $url));
  
  return $block;
}
