<?php
/**
 * @file
 * slac_news_feed_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function slac_news_feed_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'slac_news';
  $feeds_importer->config = array(
    'name' => 'Slac news',
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
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'parent:taxonomy:slac_news_tags',
            'target' => 'field_slac_news_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'url',
            'target' => 'field_slac_news_source:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'field_promoted_items_news_feed',
            'target' => 'promote',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'field_published_items_news_feed',
            'target' => 'status',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'timestamp',
            'target' => 'field_slac_news_date:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'slac_news',
      ),
    ),
    'content_type' => 'news_feed',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['slac_news'] = $feeds_importer;

  return $export;
}
