<?php

/**
 * Implements hook_field_formatter_info().
 */
function slac_event_field_formatter_info() {
  $formatters = array(
    'calendar_date' => array(
      'label' => t('Calendar date'),
      'field types' => array('date', 'datestamp', 'datetime'),
      'settings' => array(),
    ),
  );
  return $formatters;
}

/**
 * Implements hook_field_formatter_view().
 */
function slac_event_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  foreach ($items as $delta => $item) {
    $date_start = $item['value'];
    $date_end = $item['value2'];
    $timezone_db = $item['timezone_db'];
    $timezone = $item['timezone'];

    $date_start_timestamp = _get_display_date($date_start, $timezone, $timezone_db);

    // If start and end dates are the same we display only one time.
    if ($date_start == $date_end) {
      $output = format_date($date_start_timestamp, 'custom', 'l, F j, g:ia');
      $element[$delta] = array('#markup' => $output);
      continue;
    }

    $date_end_timestamp = _get_display_date($date_end, $timezone, $timezone_db);

    $date_start_day = format_date($date_start_timestamp, 'custom', 'l, F j');
    $date_end_day = format_date($date_end_timestamp, 'custom', 'l, F j');

    // If it is same day but we have different start / end times.
    if ($date_start_day == $date_end_day) {
      $output = $date_start_day . ', ' . format_date($date_start_timestamp, 'custom', 'g:ia') . ' - ' . format_date($date_end_timestamp, 'custom', 'g:ia');
      $element[$delta] = array('#markup' => $output);
      continue;
    }
    else {
      // Remaining case is when event starts at on day and finishes in another.
      $output = t('!start_date through !end_date', array('!start_date' => $date_start_day, '!end_date' => $date_end_day));
      $element[$delta] = array('#markup' => $output);
    }
  }

  return $element;
}