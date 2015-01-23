<?php

/**
 * Custom plugin for Header area of views.
 *
 */

class views_handler_slac_events_calendar_header_content extends views_handler_area {

  function render($empty = FALSE) {
    $current_display = $this->view->current_display;
    $current_display = str_replace('_list', '', $current_display);
    $current_time = _slac_event_get_current_date($current_display);
    // Default to one month.
    $previous_time_string = '-1 month';
    $next_time_string = '+1 month';

    if ($current_display == 'month') {
      $date_display = format_date($current_time, 'custom', 'F Y');
      // Redundant from above, but they may change the default.
      $previous_time_string = '-1 month';
      $next_time_string = '+1 month';
    }
    elseif ($current_display == 'week') {
      // This isn't correct, needs major rework for start of week.
      $range = strtotime(format_date($current_time, 'custom', 'Y-m-d') . '+1 WEEK');
      $date_display = format_date($current_time, 'custom', 'F j') . ' - ' . format_date($range, 'custom', 'j, Y');
      // Redundant from above, but they may change the default.
      $previous_time_string = '-1 week';
      $next_time_string = '+1 week';
    }
    elseif ($current_display == 'day') {
      $date_display = format_date($current_time, 'custom', 'F j, Y');
      $previous_time_string = '-1 day';
      $next_time_string = '+1 day';
    }

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
    if (!empty($date_mode)) {
      $display_mode_extra .= '/' . $date_mode;
    }

    if ($view_mode == 'grid') {
      $switch = l(t('List View'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/list');
    }
    elseif ($view_mod = 'list') {
      $switch = l(t('Grid View'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/grid');
    }

    // @todo: set a default class for the current view.
    $display_items = array(
      l(t('Day'), SLAC_EVENT_EVENTS_PAGE_URI . '/day' . $display_mode_extra),
      l(t('Week'), SLAC_EVENT_EVENTS_PAGE_URI . '/week' . $display_mode_extra),
      l(t('Month'), SLAC_EVENT_EVENTS_PAGE_URI . '/month' . $display_mode_extra),
    );

    $prev_timestamp = strtotime(format_date($current_time, 'custom', 'Y-m-d') . $previous_time_string);
    $prev_date = format_date($prev_timestamp, 'custom', 'Y-m-d');
    $next_timestamp = strtotime(format_date($current_time, 'custom', 'Y-m-d') . $next_time_string);
    $next_date = format_date($next_timestamp, 'custom', 'Y-m-d');
    $pager_items = array(
      l(t('Prev'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/' . $view_mode . '/' . $prev_date),
      l(t('today'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/' . $view_mode),
      l(t('Next'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/' . $view_mode . '/' . $next_date),
    );

    $output = theme('slac_event_calendar_header_content', array(
      'date_display' => $date_display,
      'pager' => theme('item_list', array('items' => $pager_items)),
      'switch' => $switch,
      'display_modes' => theme('item_list', array('items' => $display_items)),
    ));
    return $output;
  }
}
