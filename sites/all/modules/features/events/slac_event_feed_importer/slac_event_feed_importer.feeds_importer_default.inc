<?php
/**
 * @file
 * slac_event_feed_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function slac_event_feed_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'slac_event';
  $feeds_importer->config = array(
    'name' => 'Slac event',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'indefinite_message_display' => TRUE,
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'URL',
            'target' => 'field_slac_event_link:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'LOCATION',
            'target' => 'field_slac_event_scientific_area',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'DTSTART',
            'target' => 'field_slac_event_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'DTEND',
            'target' => 'field_slac_event_date:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => 'event_feed',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['slac_event'] = $feeds_importer;

  return $export;
}
