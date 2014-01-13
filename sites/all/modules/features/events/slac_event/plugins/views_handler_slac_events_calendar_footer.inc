<?php

/**
 * Custom plugin for Footer area of views.
 * 
 * Display calendar footer with Monthly / Daily views links.
 */

class views_handler_slac_events_calendar_footer extends views_handler_area {
  function render($empty = FALSE) {
    $date = _slac_event_get_date_argument_events_main_content();
    if (!preg_match('/(\d){4}-(\d){2}-(\d){2}$/', $date)) {
      return;
    }

    $year_month = substr($date, 0, 7);

    $items = array(
      l(t('Monthly event listing'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $year_month),
      l(t('Daily event listing'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $year_month),
    );
    return theme('item_list', array('items' => $items));
  }
}
