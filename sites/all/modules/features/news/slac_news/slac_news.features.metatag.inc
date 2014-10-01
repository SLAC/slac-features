<?php
/**
 * @file
 * slac_news.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function slac_news_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:slac_news.
  $config['node:slac_news'] = array(
    'instance' => 'node:slac_news',
    'config' => array(
      'og:image' => array(
        'value' => '[node:field-slac-news-media:file:url]',
      ),
    ),
  );

  return $config;
}
