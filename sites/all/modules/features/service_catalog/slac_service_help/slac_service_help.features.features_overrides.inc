<?php
/**
 * @file
 * slac_service_help.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function slac_service_help_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-1|configuration|override_title"] = 1;
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-1|configuration|override_title_text"] = '';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-1|subtype"] = 'menu-menu-services-support';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-1|type"] = 'block';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-2|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-2|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-2|panel"] = 'center';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-2|position"] = 1;
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-2|subtype"] = 'service_catalog_item-panel_pane_1';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-2|type"] = 'views_panes';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-3|configuration|override_title"] = 1;
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-3|configuration|override_title_text"] = 'Manage Service Catalog';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-3|position"] = 0;
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-3|subtype"] = 'menu-menu-services-admin';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-3|type"] = 'block';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-4|position"] = 1;
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-4|subtype"] = 'service_catalog_category-panel_pane_4';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|content|new-5"] = (object) array(
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
    );
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|panels|center|1"] = 'new-2';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|panels|right|0"] = 'new-3';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|panels|right|1"] = 'new-4';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|panels|right|2"] = 'new-5';
  $overrides["page_manager_pages.service_catalog_category_listing.default_handlers|page_service_catalog_category_listing_panel_context|conf|display|title_pane"] = 'new-2';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-10"] = (object) array(
      'pid' => 'new-10',
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
    );
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-5"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-6|configuration|override_title_text"] = '';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-6|panel"] = 'center';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-6|subtype"] = 'menu-menu-services-support';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-7|panel"] = 'center';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-7|subtype"] = 'service_catalog_category-panel_pane_1';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-8|configuration|override_title"] = 1;
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-8|configuration|override_title_text"] = 'Manage Service Catalog';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-8|position"] = 0;
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-8|subtype"] = 'menu-menu-services-admin';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-8|type"] = 'block';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|content|new-9"] = (object) array(
      'pid' => 'new-9',
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
    );
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|panels|center|0"] = 'new-6';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|panels|center|1"] = 'new-7';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|panels|right|0"] = 'new-8';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|panels|right|1"] = 'new-9';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|panels|right|2"] = 'new-10';
  $overrides["page_manager_pages.slac_sc_catalog_landing.default_handlers|page_slac_sc_catalog_landing_panel_context|conf|display|title_pane"] = 'new-7';

 return $overrides;
}
