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

    $date_start_timestamp = strtotime($date_start);

    // If start and end dates are the same we display only one time.
    if ($date_start == $date_end) {
      $output = '<time class="dt-start" datetime="' . $date_start . '">'
        . format_date($date_start_timestamp, 'custom', 'l, F j, Y, g:ia') . '</time>';
      $element[$delta] = array('#markup' => $output);
      continue;
    }

    $date_end_timestamp = strtotime($date_end);

    $date_start_day = format_date($date_start_timestamp, 'custom', 'l, F j, Y, g:ia');
    $date_end_day = format_date($date_end_timestamp, 'custom', 'l, F j, Y, g:ia');

    // If it is same day but we have different start / end times.
    if ($date_start_day == $date_end_day) {
      $start_time = '<time class="dt-start" datetime="' . $date_start . '">'
        . format_date($date_start_timestamp, 'custom', 'g:ia') . '</time>';
      $end_time = '<time class="dt-end" datetime="' . $date_end . '">'
        . format_date($date_end_timestamp, 'custom', 'g:ia') . '</time>';
      $output = t('!start_day, !start_time - !end_time', array(
        '!start_day' => $date_start_day,
        '!start_time' => $start_time,
        '!end_time' => $end_time,
      ));
      $element[$delta] = array('#markup' => $output);
      continue;
    }
    else {
      // Remaining case is when event starts at on day and finishes in another.
      $date_start_day = '<time class="dt-start" datetime="' . $date_start . '">'
        . $date_start_day . '</time>';
      $date_end_day = '<time class="dt-end" datetime="' . $date_end . '">'
        . $date_end_day . '</time>';

      $output = t('!start_date through !end_date', array('!start_date' => $date_start_day, '!end_date' => $date_end_day));
      $element[$delta] = array('#markup' => $output);
    }
  }

  return $element;
}