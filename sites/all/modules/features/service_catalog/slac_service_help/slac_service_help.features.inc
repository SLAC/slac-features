<?php
/**
 * @file
 * slac_service_help.features.inc
 */

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function slac_service_help_default_page_manager_pages_alter(&$data) {
  if (isset($data['service_catalog_category_listing'])) {
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-1']->configuration['override_title'] = 1; /* WAS: '' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-1']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-1']->subtype = 'menu-menu-service-catalog-support'; /* WAS: 'service_catalog_item-panel_pane_1' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-1']->type = 'block'; /* WAS: 'views_panes' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-2']->panel = 'center'; /* WAS: 'right' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-2']->position = 1; /* WAS: 0 */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-2']->subtype = 'service_catalog_item-panel_pane_1'; /* WAS: 'menu-menu-service-catalog-admin' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-2']->type = 'views_panes'; /* WAS: 'block' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-3']->configuration['override_title'] = 1; /* WAS: '' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-3']->configuration['override_title_text'] = 'Manage Service Catalog'; /* WAS: '' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-3']->position = 0; /* WAS: 1 */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-3']->subtype = 'menu-menu-service-catalog-admin'; /* WAS: 'service_catalog_category-panel_pane_4' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-3']->type = 'block'; /* WAS: 'views_panes' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-4']->position = 1; /* WAS: 2 */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-4']->subtype = 'service_catalog_category-panel_pane_4'; /* WAS: 'service_catalog_category-panel_pane_2' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-5'] = (object) array(
          'pid' => 'new-5',
          'panel' => 'right',
          'type' => 'views_panes',
          'subtype' => 'service_catalog_category-panel_pane_2',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->panels['center']['1'] = 'new-2'; /* WAS: '' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->panels['right']['0'] = 'new-3'; /* WAS: 'new-2' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->panels['right']['1'] = 'new-4'; /* WAS: 'new-3' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->panels['right']['2'] = 'new-5'; /* WAS: 'new-4' */
    $data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->title_pane = 'new-2'; /* WAS: 'new-1' */
    unset($data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-2']->configuration['override_title']);
    unset($data['service_catalog_category_listing']->default_handlers['page_service_catalog_category_listing_panel_context']->conf['display']->content['new-2']->configuration['override_title_text']);
  }
  if (isset($data['slac_sc_catalog_landing'])) {
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-10'] = (object) array(
          'pid' => 'new-10',
          'panel' => 'right',
          'type' => 'views_panes',
          'subtype' => 'service_catalog_item-panel_pane_3',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-6']->configuration['override_title_text'] = ''; /* WAS: 'Manage Service Catalog' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-6']->panel = 'center'; /* WAS: 'right' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-6']->subtype = 'menu-menu-service-catalog-support'; /* WAS: 'menu-menu-service-catalog-admin' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-7']->panel = 'center'; /* WAS: 'right' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-7']->subtype = 'service_catalog_category-panel_pane_1'; /* WAS: 'service_catalog_category-panel_pane_4' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-8']->configuration['override_title'] = 1; /* WAS: '' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-8']->configuration['override_title_text'] = 'Manage Service Catalog'; /* WAS: '' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-8']->position = 0; /* WAS: 2 */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-8']->subtype = 'menu-menu-service-catalog-admin'; /* WAS: 'service_catalog_item-panel_pane_3' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-8']->type = 'block'; /* WAS: 'views_panes' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-9'] = (object) array(
          'pid' => 'new-9',
          'panel' => 'right',
          'type' => 'views_panes',
          'subtype' => 'service_catalog_category-panel_pane_4',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->panels['center']['0'] = 'new-6'; /* WAS: 'new-5' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->panels['center']['1'] = 'new-7'; /* WAS: '' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->panels['right']['0'] = 'new-8'; /* WAS: 'new-6' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->panels['right']['1'] = 'new-9'; /* WAS: 'new-7' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->panels['right']['2'] = 'new-10'; /* WAS: 'new-8' */
    $data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->title_pane = 'new-7'; /* WAS: 'new-5' */
    unset($data['slac_sc_catalog_landing']->default_handlers['page_slac_sc_catalog_landing_panel_context']->conf['display']->content['new-5']);
  }
}
