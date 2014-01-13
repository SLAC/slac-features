<?php

/**
 * Custom plugin for Header area of views.
 * 
 * Display current month and prev. / next. links for events calendar.
 */

class views_handler_slac_events_calendar_months_pager extends views_handler_area {
  function render($empty = FALSE) {
    $current_time = _slac_event_get_current_date();
    $current_month_name = format_date($current_time, 'custom', 'F');

    $prev_month_timestamp = strtotime(format_date($current_time, 'custom', 'Y-m-d') . '-1 month');
    $prev_month_date = format_date($prev_month_timestamp, 'custom', 'Y-m');

    $next_month_timestamp = strtotime(format_date($current_time, 'custom', 'Y-m-d') . '+1 month');
    $next_month_date = format_date($next_month_timestamp, 'custom', 'Y-m');
    $items = array(
      l(t('Prev'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $prev_month_date),
      $current_month_name,
      l(t('Next'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $next_month_date),
    );
    return theme('item_list', array('items' => $items));
  }
}
