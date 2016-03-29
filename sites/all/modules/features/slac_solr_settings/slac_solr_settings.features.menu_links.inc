<?php
/**
 * @file
 * slac_solr_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_solr_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_apache-solr-search-index:admin/reports/apachesolr
  $menu_links['management_apache-solr-search-index:admin/reports/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/apachesolr',
    'router_path' => 'admin/reports/apachesolr',
    'link_title' => 'Apache Solr search index',
    'options' => array(
      'attributes' => array(
        'title' => 'Information about the contents of the index on the server',
      ),
      'identifier' => 'management_apache-solr-search-index:admin/reports/apachesolr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: management_apache-solr-search:admin/config/search/apachesolr
  $menu_links['management_apache-solr-search:admin/config/search/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/apachesolr',
    'router_path' => 'admin/config/search/apachesolr',
    'link_title' => 'Apache Solr search',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Apache Solr.',
      ),
      'identifier' => 'management_apache-solr-search:admin/config/search/apachesolr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_search-and-metadata:admin/config/search',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Apache Solr search');
  t('Apache Solr search index');


  return $menu_links;
}
