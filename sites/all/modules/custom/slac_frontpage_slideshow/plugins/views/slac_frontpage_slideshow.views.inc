<?php

/**
 * @file
 * Altered copy of the views_content.views.inc
 */

/**
 * Implements hook_views_plugins
 */
function slac_frontpage_slideshow_views_plugins() {
  return array(
    'display' => array(
      'panel_slideshow_pane' => array(
        'title' => t('SLAC slideshow'),
        'admin' => t('SLAC slideshow'),
        'help' => t('Is available as content for a panel or dashboard display.'),
        'handler' => 'views_content_plugin_display_panel_pane',
        'path' => drupal_get_path('module', 'views_content') . '/plugins/views',
        'theme path' => drupal_get_path('module', 'views') . '/theme',
        'theme' => 'views_view',
        'register theme' => FALSE,
        'use ajax' => TRUE,
        'use pager' => TRUE,
        'use more' => TRUE,
        'accept attachments' => TRUE,
        'help topic' => 'display-pane',
      ),
    ),
  );
}
