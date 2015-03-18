<?php

/**
 * Custom plugin for Header area of views.
 *
 * Display current month and prev. / next. links for events calendar.
 */

class views_handler_slac_events_calendar_mini_pager extends views_handler_area {
  function render($empty = FALSE) {
    // Find the current view mode - month, week, etc.
    $view_mode = arg(1);

    $current_time = strtotime(arg(3));
    if (empty($current_time)) {
      $current_time = strtotime('now');
    }

    $prev_timestamp = strtotime(format_date($current_time, 'custom', 'Y-m-d') . '-1 ' . $view_mode);
    $prev_date = format_date($prev_timestamp, 'custom', 'Y-m-d');
    $date_display = format_date($current_time, 'custom', 'F Y');
    


    $next_timestamp = strtotime(format_date($current_time, 'custom', 'Y-m-d') . '+1 ' . $view_mode);
    $next_date = format_date($next_timestamp, 'custom', 'Y-m-d');
    $items = array(
      l(t('Prev'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $view_mode . '/list/' . $prev_date),
      l(t('Next'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $view_mode . '/list/' . $next_date),
    );

    $output = theme('slac_events_calendar_mini_pager', array(
      'date_display' => $date_display,
      'pager' => theme('item_list', array('items' => $items)),
    ));

    return $output;
  }
}
