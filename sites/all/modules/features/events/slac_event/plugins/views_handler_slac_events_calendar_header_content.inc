<?php

/**
 * @file
 * Custom plugin for Header area of views.
 */

class views_handler_slac_events_calendar_header_content extends views_handler_area {

  function render($empty = FALSE) {
    $current_display = $this->view->current_display;
    $current_display = str_replace('_list', '', $current_display);
    $current_time = _slac_event_get_current_date($current_display);

    $view_mode = arg(2);
    if (empty($view_mode)) {
      $view_mode = 'grid';
    }

    // Default to one month.
    $previous_time_string = '-1 month';
    $next_time_string = '+1 month';

    if ($current_display == 'month') {
      $date_display = format_date($current_time, 'custom', 'F Y');
      // Redundant from setters above, but the default may change.
      $previous_time_string = '-1 month';
      $next_time_string = '+1 month';
    }
    elseif ($current_display == 'week') {
      // @todo: This isn't correct, needs major rework for start of week.
      $range = strtotime(format_date($current_time, 'custom', 'Y-m-d') . '+1 WEEK');
      $date_display = format_date($current_time, 'custom', 'F j') . ' - ' . format_date($range, 'custom', 'j, Y');
      $previous_time_string = '-1 week';
      $next_time_string = '+1 week';
    }
    elseif ($current_display == 'day') {
      $date_display = format_date($current_time, 'custom', 'F j, Y');
      $previous_time_string = '-1 day';
      $next_time_string = '+1 day';
    }

    $prev_timestamp = strtotime(format_date($current_time, 'custom', 'Y-m-d') . $previous_time_string);
    $prev_date = format_date($prev_timestamp, 'custom', 'Y-m-d');
    $next_timestamp = strtotime(format_date($current_time, 'custom', 'Y-m-d') . $next_time_string);
    $next_date = format_date($next_timestamp, 'custom', 'Y-m-d');
    $pager_items = array(
      l('', SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/' . $view_mode . '/' . $prev_date),
      l(t('today'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/' . $view_mode),
      l('', SLAC_EVENT_EVENTS_PAGE_URI . '/' . $current_display . '/' . $view_mode . '/' . $next_date),
    );

    $output = theme('slac_event_calendar_header_content', array(
      'date_display' => $date_display,
      'pager' => theme('item_list', array('items' => $pager_items)),
    ));
    return $output;
  }
}
