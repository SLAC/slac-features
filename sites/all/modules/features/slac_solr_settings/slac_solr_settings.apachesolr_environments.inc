<?php
/**
 * @file
 * slac_solr_settings.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function slac_solr_settings_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'RHbox SOLR';
  $environment->url = 'http://134.79.230.20:8983/solr/drupal1';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 0,
    'apachesolr_direct_commit' => 1,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 1,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'blog',
      1 => 'event',
      2 => 'faq',
      3 => 'forum',
      4 => 'kb_article',
      5 => 'page',
      6 => 'slac_news',
      7 => 'slac_sc_catalog_item',
      8 => 'support_ticket',
      9 => 'webform',
      10 => 'wiki_page',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
