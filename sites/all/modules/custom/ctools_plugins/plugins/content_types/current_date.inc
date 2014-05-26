<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Current date'),
  'defaults' => array(),
  'description' => t('Show the current PST time.'),
  'category' => t('SLAC'),
  'render callback' => 'ctools_plugins_current_date_content_type_render',
);

/**
 * Plugin callback which reder content
 * @param type $subtype
 * @param type $conf
 * @param type $panel_args
 * @param type $context
 * @return \stdClass
 */
function ctools_plugins_current_date_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'ctools_plugins';

  $block->title = t('Current Date');
  $block->content = '<div class="current-date">' . format_date(time(), 'custom', 'l, F d, Y', 'America/Los_Angeles') . '</div>';

  return $block;
}

/**
 * Returns the administrative title.
 */
function ctools_plugins_current_date_content_type_admin_title($subtype, $conf) {
  return t('Current Date');
}

/**
 * Returns an edit form for a block.
 */
function ctools_plugins_current_date_content_type_edit_form($form, &$form_state) {
  return $form;
}