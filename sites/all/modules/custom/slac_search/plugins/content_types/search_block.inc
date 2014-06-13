<?php

/**
 * Display Site Index block.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Slac Search'),
  'single' => TRUE,
  'defaults' => array(),
  'description' => t("SLAC search block"),
  'category' => t('SLAC'),
  'render callback' => 'search_block_content_type_render',
);

/**
 * Outputs site indexes.
 */
function search_block_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_search';
  $block->title = '';
  $block->content = drupal_get_form('search_block_search_form');

  return $block;
}

/**
 * Returns the administrative title.
 */
function search_block_content_type_admin_title($subtype, $conf) {
  return t('SLAC Search');
}

function search_block_search_form($form, &$form_state) {
  drupal_add_js(drupal_get_path('module', 'slac_search') . '/js/slac_search.js');
  drupal_add_library('system', 'jquery.cookie');

  $default_selection = isset($_COOKIE['Drupal_visitor_search_option']) ? $_COOKIE['Drupal_visitor_search_option'] : 'web';
  $default_value = ($default_selection === 'people') ? 1 : 0;
  $options = array(t('Web'), t('People'));
  $form = array();

  $form['keyword'] = array(
    '#type' => 'textfield',
    '#title' => '',
    '#prefix' => '<div id="slac-search-wrapper"><div id="slac-search">',
    '#suffix' => '</div>',
    '#attributes' => array('placeholder' => t('search web or people')),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('GO'),
    '#prefix' => '<div id="slac-search-button">',
    '#suffix' => '</div>'
  );
  $form['search_options'] = array(
    '#type' => 'radios',
    '#title' => '',
    '#options' => $options,
    '#default_value' => $default_value,
    '#prefix' => '<div id="slac-search-options">',
    '#suffix' => '</div></div>'
  );
  $form['#submit'] = array('search_block_search_form_submit');

  return $form;
}

function search_block_search_form_submit($form, &$form_state) {
  $form_selection = ($form_state['values']['search_options'] == 1) ? 'people' : 'web';
  $redirect_url = '';

  if ($form_selection === 'web') {
    // URL for WEB.
    $redirect_url = 'http://www-psearch.slac.stanford.edu/SLACSearch/app/slac/index?style=mainSite&qt=' . $form_state['values']['keyword'];
  }
  elseif ($form_selection === 'people'){
    // URL for People.
    $redirect_url = 'http://www-public.slac.stanford.edu/phonebook/dirsearch.aspx?lf=1&url=&gone=active&NAME=' . $form_state['values']['keyword'];
  }

  $form_state['redirect'] = $redirect_url;
}
