<?php

/**
 * @file
 * Altered views_panes.inc. Most of code are wrappers.
 * We only add pane configuration for position of the
 * text and background color.
 */

module_load_include('inc', 'views_content', 'plugins/content_types/views_panes');

/**
 * Implements hook_ctools_content_types()
 */
function slac_frontpage_slideshow_views_slideshow_panes_ctools_content_types() {
  return array(
    'title' => t('SLAC slideshow'),
    'admin settings' => 'views_content_admin_form',
    'all contexts' => TRUE,
  );
}

/**
 * Return all content types available.
 *
 * Fork of views_content_views_panes_content_type_content_types() changing key of cache
 * and condition of display.
 */
function slac_frontpage_slideshow_views_slideshow_panes_content_type_content_types($plugin) {
  $types = array();
  // It can be fairly intensive to calculate this, so let's cache this in the
  // cache_views table. The nice thing there is that if views ever change, that
  // table will always be cleared. Except for the occasional default view, so
  // we must use the Views caching functions in order to respect Views caching
  // settings.
  views_include('cache');
  $data = views_cache_get('views_slideshow_content_panes', TRUE);
  if (!empty($data->data)) {
    $types = $data->data;
  }

  if (empty($types)) {
    $types = array();

    $views = views_get_all_views();

    foreach ($views as $view) {
      if (!empty($view->disabled)) {
        continue;
      }

      $view->init_display();

      foreach ($view->display as $id => $display) {
        // Changed condition. SLAC slideshow's display name is panel_slideshow_pane.
        if (empty($display->handler->panel_pane_display) || $display->display_plugin != 'panel_slideshow_pane') {
          continue;
        }
        $info = _views_content_panes_content_type($view, $display);
        // Set different name.
        $info['category'][0] = 'SLAC slideshow';
        if ($info) {
          $types[$view->name . '-' . $id] = $info;
        }
      }

      $view->destroy();
    }
    views_cache_set('views_slideshow_content_panes', $types, TRUE);
  }

  return $types;
}

/**
 * Return a single content type.
 *
 * Fork of views_content_views_panes_content_type_content_type().
 * Changed name of helper function as we need to change condition there.
 */
function slac_frontpage_slideshow_views_slideshow_panes_content_type_content_type($subtype, $plugin) {
  list($name, $display) = explode('-', $subtype);
  $view = views_get_view($name);
  if (empty($view)) {
    return;
  }

  $view->set_display($display);
  $retval = _views_content_slideshow_panes_content_type($view, $view->display[$display]);

  $view->destroy();
  return $retval;
}

/**
 * Fork of _views_content_panes_content_type().
 * Changed name of display in th condition.
 */
function _views_content_slideshow_panes_content_type($view, $display) {
  // Ensure the handler is the right type, as Views will fall back to
  // the default display if something is broken:
  if (get_class($display->handler) != 'views_content_plugin_display_panel_slideshow_pane') {
    return;
  }

  $title = views_content_get_display_title($view, $display->id);

  $description = $display->handler->get_option('pane_description');
  if (!$description) {
    $description = $view->description;
  }

  $category = $display->handler->get_option('pane_category');
  if (!$category['name']) {
    $category['name'] = t('SLAC Slideshow');
  }

  $icon = 'icon_views_page.png';

  $contexts = array();

  $arguments = $display->handler->get_argument_input();
  ctools_include('views');
  foreach ($arguments as $argument) {
    $contexts[] = ctools_views_get_argument_context($argument);
  }

  $allow = $display->handler->get_option('allow');
  return array(
    'title' => $title,
    'icon' => $icon,
    'description' => filter_xss_admin($description),
    'required context' => $contexts,
    'category' => array($category['name'], $category['weight']),
    'no title override' => empty($allow['title_override']),
  );
}

/**
 * Output function for the 'views' content type.
 *
 * Outputs a view based on the module and delta supplied in the configuration.
 */
function slac_frontpage_slideshow_views_slideshow_panes_content_type_render($subtype, $conf, $panel_args, $contexts) {
  $block = views_content_views_panes_content_type_render($subtype, $conf, $panel_args, $contexts);
  return $block;
}
//function views_content_views_panes_content_type_render($subtype, $conf, $panel_args, $contexts) {
//  if (!is_array($contexts)) {
//    $contexts = array($contexts);
//  }
//
//  list($name, $display) = explode('-', $subtype);
//  $view = views_get_view($name);
//  if (empty($view)) {
//    return;
//  }
//
//  $view->set_display($display);
//  views_content_views_panes_add_defaults($conf, $view);
//
//  if (!$view->display_handler->access($GLOBALS['user']) || !$view->display_handler->panel_pane_display) {
//    return;
//  }
//
//  $view->display_handler->set_pane_conf($conf);
//
//  $args = array();
//  $arguments = $view->display_handler->get_option('arguments');
//
//  $context_keys = isset($conf['context']) ? $conf['context'] : array();
//  foreach ($view->display_handler->get_argument_input() as $id => $argument) {
//    switch ($argument['type']) {
//      case 'context':
//        $key = array_shift($context_keys);
//        if (isset($contexts[$key])) {
//          if (strpos($argument['context'], '.')) {
//            list($context, $converter) = explode('.', $argument['context'], 2);
//            $args[] = ctools_context_convert_context($contexts[$key], $converter, array('sanitize' => FALSE));
//          }
//          else {
//            $args[] = $contexts[$key]->argument;
//          }
//        }
//        break;
//
//      case 'fixed':
//        $args[] = $argument['fixed'];
//        break;
//
//      case 'panel':
//        $args[] = isset($panel_args[$argument['panel']]) ? $panel_args[$argument['panel']] : NULL;
//        break;
//
//      case 'user':
//        $args[] = (isset($conf['arguments'][$id])  && $conf['arguments'][$id] !== '') ? ctools_context_keyword_substitute($conf['arguments'][$id], array(), $contexts) : NULL;
//        break;
//
//     case 'wildcard':
//        // Put in the wildcard.
//       $args[] = isset($arguments[$id]['wildcard']) ? $arguments[$id]['wildcard'] : '*';
//       break;
//
//     case 'none':
//     default:
//       // Put in NULL.
//       // views.module knows what to do with NULL (or missing) arguments
//       $args[] = NULL;
//       break;
//    }
//  }
//
//  // remove any trailing NULL arguments as these are non-args:
//  while (count($args) && end($args) === NULL) {
//    array_pop($args);
//  }
//
//  $view->set_arguments($args);
//
//  $allow = $view->display_handler->get_option('allow');
//
//  if (!empty($conf['path'])) {
//    $conf['path'] = ctools_context_keyword_substitute($conf['path'], array(), $contexts);
//  }
//  if ($allow['path_override'] && !empty($conf['path'])) {
//    $view->override_path = $conf['path'];
//  }
//  else if ($path = $view->display_handler->get_option('inherit_panels_path')) {
//    $view->override_path = $_GET['q'];
//  }
//
//  $block = new stdClass();
//  $block->module = 'views';
//  $block->delta  = $view->name . '-' . $display;
//
//  if (($allow['link_to_view'] && !empty($conf['link_to_view'])) ||
//      (!$allow['link_to_view'] && $view->display_handler->get_option('link_to_view'))) {
//    $block->title_link = $view->get_url();
//  }
//
//  // more link
//  if ($allow['more_link']) {
//    if (empty($conf['more_link'])) {
//      $view->display_handler->set_option('use_more', FALSE);
//    }
//    else {
//      $view->display_handler->set_option('use_more', TRUE);
//      // make sure the view runs the count query so we know whether or not the
//      // more link applies.
//      $view->get_total_rows = TRUE;
//    }
//  }
//
//  if ($allow['items_per_page'] && isset($conf['items_per_page'])) {
//    $view->set_items_per_page($conf['items_per_page']);
//  }
//
//  if ($allow['offset']) {
//    $view->set_offset($conf['offset']);
//  }
//
//  if ($allow['use_pager']) {
//    // Only set use_pager if they differ, this way we can avoid overwriting the
//    // pager type that Views uses.
//    $pager = $view->display_handler->get_option('pager');
//    if ($conf['use_pager'] && ($pager['type'] == 'none' || $pager['type'] == 'some')) {
//      $pager['type'] = 'full';
//    }
//    elseif (!$conf['use_pager'] && $pager['type'] != 'none' && $pager['type'] != 'some') {
//      $pager['type'] = $view->get_items_per_page() || !empty($pager['options']['items_per_page']) ? 'some' : 'none';
//    }
//
//    if ($conf['use_pager']) {
//      if (!isset($pager['options']['id']) || (isset($conf['pager_id']) && $pager['options']['id'] != $conf['pager_id'])) {
//        $pager['options']['id'] = $conf['pager_id'];
//      }
//    }
//
//    $view->display_handler->set_option('pager', $pager);
//  }
//
//  if ($allow['fields_override']) {
//    if ($conf['fields_override']) {
//      $fields = $view->get_items('field');
//      foreach ($fields as $field => $display) {
//        $fields[$field]['exclude'] = empty($conf['fields_override'][$field]);
//      }
//      $view->display_handler->set_option('fields', $fields);
//
//    }
//  }
//
//  if ($allow['exposed_form'] && !empty($conf['exposed'])) {
//    $view->set_exposed_input($conf['exposed']);
//  }
//
//  $stored_feeds = drupal_add_feed();
//
//  $block->content = $view->preview();
//  if (empty($view->result) && !$view->display_handler->get_option('empty') && empty($view->style_plugin->definition['even empty'])) {
//    return;
//  }
//
//  $block->title = $view->get_title();
//
//  if (empty($view->total_rows) || $view->total_rows <= $view->get_items_per_page()) {
//    unset($block->more);
//  }
//
//  if ((!empty($allow['feed_icons']) && !empty($conf['feed_icons'])) ||
//      (empty($allow['feed_icons']) && $view->display_handler->get_option('feed_icons'))) {
//    $new_feeds = drupal_add_feed();
//    if ($diff = array_diff(array_keys($new_feeds), array_keys($stored_feeds))) {
//      foreach ($diff as $url) {
//        $block->feeds[$url] = $new_feeds[$url];
//      }
//    }
//  }
//
//  return $block;
//}

/**
 * Add defaults to view pane settings.
 * This helps cover us if $allow settings changed and there are no actual
 * settings for a particular item.
 */
function slac_frontpage_slideshow_views_slideshow_panes_add_defaults(&$conf, $view) {
  views_content_views_panes_add_defaults($conf, $view);

  $conf += array('slideshow_configuration' => '', 'slideshow_configuration_default' => '');
}

/**
 * Returns an edit form for a block.
 */
function slac_frontpage_slideshow_views_slideshow_panes_content_type_edit_form($form, &$form_state) {

  $position = array('left', 'right');
  $color = array('#E17000', '#6E2585', '#0099CC', '#69BE28');
  for ($i = 0; $i < 10; $i++) {
    $config[$i] = $position[array_rand($position)] . ',' . $color[array_rand($color)];
  }

  $form = views_content_views_panes_content_type_edit_form($form, $form_state);

  $conf = $form_state['conf'];
  $form['slideshow_style_default'] = array(
    '#title' => t('Select slideshow style'),
    '#type' => 'radios',
    '#default_value' => isset($conf['slideshow_style_default']) ? $conf['slideshow_style_default'] : 0,
    '#options' => array(
      0 => 'Classic style',
      1 => 'Dinamic side style',
    ),
  );
  $form['slideshow_configuration'] = array(
    '#title' => t('Slideshow'),
    '#type' => 'textarea',
    '#description' => t('Place the position and color of text block for the slideshow here in the format of: left|right,{color}, one per line. For example: left,#FF0000'),
    '#default_value' => ((bool) $conf['slideshow_configuration']) ? $conf['slideshow_configuration'] : implode("\r\n", $config),
  );

  $form['slideshow_configuration_default'] = array(
    '#title' => t('Slide default setting'),
    '#type' => 'textfield',
    '#description' => t('Default position and color if there are more slides than rows in settings above'),
    '#default_value' => isset($conf['slideshow_configuration_default']) ? $conf['slideshow_configuration_default'] : '',
  );

  return $form;
}

/**
 * Store form values in $conf.
 */
function slac_frontpage_slideshow_views_slideshow_panes_content_type_edit_form_submit(&$form, &$form_state) {
  views_content_views_panes_content_type_edit_form_submit($form, $form_state);
  if (isset($form_state['values']['slideshow_style_default'])) {
    $form_state['conf']['slideshow_style_default'] = $form_state['values']['slideshow_style_default'];
  }
  if (isset($form_state['values']['slideshow_configuration'])) {
    $form_state['conf']['slideshow_configuration'] = $form_state['values']['slideshow_configuration'];
  }
  if (isset($form_state['values']['slideshow_configuration_default'])) {
    $form_state['conf']['slideshow_configuration_default'] = $form_state['values']['slideshow_configuration_default'];
  }
}

/**
 * Returns the administrative title for a type.
 */
function slac_frontpage_slideshow_views_slideshow_panes_content_type_admin_title($subtype, $conf, $contexts) {
  list($name, $display) = explode('-', $subtype);
  $view = views_get_view($name);
  if (empty($view) || empty($view->display[$display])) {
    return t('Deleted/missing view @view', array('@view' => $name));
  }

  $view->set_display($display);
  views_content_views_panes_add_defaults($conf, $view);

  $option = 'pane_title';

  $handler = $view->display[$display]->handler;
  $title = $handler->get_option($option);
  if (!$title) {
    if ($handler->display->display_title == $handler->definition['title']) {
      $title = t('Slideshow: @view', array('@view' => $view->get_human_name()));
    }
    else {
      $title = t('Slideshow: @view: @display', array('@view' => $view->get_human_name(), '@display' => $handler->display->display_title));
    }
  }

  return check_plain($title);
}

/**
 * Returns the administrative title for a type.
 */
function slac_frontpage_slideshow_views_slideshow_panes_content_type_admin_info($subtype, $conf, $contexts) {
  return views_content_views_panes_content_type_admin_info($subtype, $conf, $contexts);
}
