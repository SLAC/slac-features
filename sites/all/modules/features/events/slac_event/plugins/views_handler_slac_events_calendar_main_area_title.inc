<?php

/**
 * Custom plugin for Header area of views.
 *
 * Display title for the Calendar main area.
 */

class views_handler_slac_events_calendar_main_area_title extends views_handler_area {
  function render($empty = FALSE) {
    $current_timestamp = _slac_event_get_current_date();
    $date_argument = _slac_event_get_date_argument_events_main_content();

    // This is date view.
    if (preg_match('/(\d){4}-(\d){2}-(\d){2}$/', $date_argument)) {
      $title_array = array(
        format_date($current_timestamp, 'custom', 'l'),
        format_date($current_timestamp, 'custom', 'F j'),
        format_date($current_timestamp, 'custom', 'Y'),
      );
      return '<h2>' . implode(' | ', $title_array) . '</h2>';
    }

    // This is month view.
    if (preg_match('/(\d){4}-(\d){2}$/', $date_argument)) {
      $title_array = array(
        format_date($current_timestamp, 'custom', 'F'),
        format_date($current_timestamp, 'custom', 'Y'),
      );
      return '<h2>' . implode(' | ', $title_array) . '</h2>';
    }
  }
}
