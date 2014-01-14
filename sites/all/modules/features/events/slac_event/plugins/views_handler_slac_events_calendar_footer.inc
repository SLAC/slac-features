<?php

/**
 * Custom plugin for Footer area of views.
 * 
 * Display calendar footer with Monthly / Daily views links.
 */

class views_handler_slac_events_calendar_footer extends views_handler_area {
  function render($empty = FALSE) {
    $links = $this->get_link_types();
    $items = array();
    if (isset($links['year_month']) && !empty($links['year_month'])) {
      $items[] = l(t('Monthly event listing'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $links['year_month']);
    }

    if (isset($links['year_month_day']) && !empty($links['year_month_day'])) {
      $items[] = l(t('Daily event listing'), SLAC_EVENT_EVENTS_PAGE_URI . '/' . $links['year_month_day']);
    }

    return theme('item_list', array('items' => $items));
  }

  public function get_link_types() {
    $arg0 = arg(0);
    if ($arg0 == 'node') {
      $year_month_day = _slac_event_get_date_from_event_node_with_day();
      $year_month = _slac_event_convert_date_with_day_to_date_without_day($year_month_day);
      return array('year_month' => $year_month, 'year_month_day' => $year_month_day);
    }

    if ($arg0 == SLAC_EVENT_EVENTS_PAGE_URI) {
      $year_month_day = _slac_event_get_date_from_url_with_day();
      $year_month = !empty($year_month_day) ? _slac_event_get_date_argument_events_calendar() : NULL;
      return array('year_month' => $year_month, 'year_month_day' => NULL);
    }
  }
}
