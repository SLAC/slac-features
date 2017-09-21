<?php

/**
 * @file
 * Plugin to handle the 'page_site_address' content type which allows the
 * site_address of the site to be embedded into a panel.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Site address'),
  'single' => TRUE,
  'icon' => 'icon_page.png',
  'description' => t('This address is used by link from footer.'),
  'category' => t('Page elements'),
  'render last' => TRUE,
);

/**
 * Output function for the 'page_site_address' content type.
 *
 * Outputs the site_name for the current page.
 */
function slac_site_variables_site_address_content_type_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $block->content = filter_xss_admin(variable_get('site_url_address', ''));

  return $block;
}
function slac_site_variables_footer_address_content_type_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $block->content = filter_xss_admin(variable_get('site_footer_address', ''));

  return $block;
}
