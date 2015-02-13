<?php
/**
 * @file
 * Quickstats plugin.
 */

$plugin = array(
  'title' => t('Event Series'),
  'description' => t('Displays Event Series for Events Calendar.'),
  'category' => t('SLAC'),
  'single' => TRUE,
  'edit form' => 'slac_event_series_pane_edit_form',
  'render callback' => 'slac_event_series_pane_render',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * An edit form for the pane's settings.
 */
function slac_event_series_pane_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Events Series Pane.
 */
function slac_event_series_pane_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->title = t('Seminar Series Block');
  $block->content = '<h2>' . t('Event Series') . '</h2>';
  $block->content .= slac_event_series_render($context);
  return $block;
}

/**
 * Renders the output for the event series.
 */
function slac_event_series_render($context) {
  $term_links = array();
  $vid = db_select('taxonomy_vocabulary', 'tv')
  ->fields('tv', array('vid'))
  ->condition('machine_name', 'event_categories')
  ->execute()
  ->fetchColumn();
  if ($vid) {
    if ($terms = taxonomy_get_tree($vid)) {
      foreach ($terms as $term) {
        $term_links[] = l($term->name, drupal_lookup_path('alias', 'taxonomy/term/'.$term->tid));
      }
    }
  }
  return theme('item_list', array(
    'items' => $term_links,
    'type' => 'ul',
    'attributes' => array('id' => 'series-list'),
    'container_id' => 'series-list-container',
  ));
}
