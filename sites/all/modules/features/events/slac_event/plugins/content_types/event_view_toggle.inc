<?php

/**
 * @file
 * Quickstats plugin.
 */

$plugin = array(
  'title' => t('Events View Toggle'),
  'description' => t('List/Gride and Day/Week/Month toggles.'),
  'category' => t('SLAC'),
  'single' => TRUE,
  'edit form' => 'slac_event_view_toggle_pane_edit_form',
  'render callback' => 'slac_event_view_toggle_pane_render',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * An edit form for the pane's settings.
 */
function slac_event_view_toggle_pane_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Events Series Pane.
 */
function slac_event_view_toggle_pane_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->title = '';
  $block->content .= slac_event_view_toggle_render($context);
  return $block;
}

/**
 * Renders the output for the event series.
 */
function slac_event_view_toggle_render($context) {
  // Append view mode to url if found.
  $display_mode_extra = '';
  $view_mode = arg(2);
  if (!empty($view_mode)) {
    $display_mode_extra = '/' . $view_mode;
  }
  else {
    $view_mode = 'grid';
  }

  // Append date to url if found.
  $date_mode = arg(3);
  $date_extra = '';
  if (!empty($date_mode)) {
    $display_mode_extra .= '/' . $date_mode;
    $date_extra = '/' . $date_mode;
  }

  // Get the current display mode.
  $current_display = arg(1);
  $force_active = array();
  if (empty($current_display)) {
    $current_display = 'month';
    $force_active[] = 'active';
  }

  if ($view_mode == 'grid') {
    $switch = l(t('List View'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/list' . $date_extra);
  }
  elseif ($view_mode = 'list') {
    $switch = l(t('Grid View'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/grid' . $date_extra);
  }

  $display_items = array(
    l(t('Day'), SLAC_EVENT_EVENTS_PAGE_URI . '/day' . $display_mode_extra),
    l(t('Week'), SLAC_EVENT_EVENTS_PAGE_URI . '/week' . $display_mode_extra),
    l(t('Month'), SLAC_EVENT_EVENTS_PAGE_URI . '/month' . $display_mode_extra, array(
      'attributes' => array(
        'class' => $force_active,
      ),
    )),
  );

  $output = theme('slac_event_view_toggle_content', array(
    'switch' => $switch,
    'display_modes' => theme('item_list', array('items' => $display_items)),
  ));

  return $output;
}
