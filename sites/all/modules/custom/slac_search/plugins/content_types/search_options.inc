<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Slac Search options'),
  'single' => TRUE,
  'defaults' => array(),
  'description' => t("SLAC search options - set search options in cookies."),
  'category' => t('SLAC'),
  'render callback' => 'search_options_content_type_render',
);

/**
 * Outputs site indexes.
 */
function search_options_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_search';
  $block->title = '';

  $block->content = drupal_get_form('search_options_search_form');

  return $block;
}

/**
 * Returns the administrative title.
 */
function search_options_content_type_admin_title($subtype, $conf) {
  return t('SLAC Search options');
}

/**
 * Returns forms for default search option setting.
 */
function search_options_search_form($form, &$form_state) {
  $default_selection = isset($_COOKIE['Drupal_visitor_search_option']) ? $_COOKIE['Drupal_visitor_search_option'] : 'web';
  $form = array();

  $form['intro_description'] = array(
    '#type' => 'markup',
    '#markup' => t('You can set your default search option below. This sets a cookie in your browser that will persist for one year or until you delete your cookies.If you use multiple browsers, you will need to set your default for each browser.'),
    '#prefix' => '<div class="search-description">',
    '#suffix' => '</div>',
  );
  $form['search_option_value'] = array(
    '#type' => 'markup',
    '#markup' => t('Your current search option: ') . '<strong>' . $default_selection . '</strong>',
    '#prefix' => '<div class="search-description">',
    '#suffix' => '</div>',
  );
  $form['set_web'] = array(
    '#type' => 'submit',
    '#name' => 'web',
    '#value' => t('Set web as default'),
    '#submit' => array('search_options_search_form_submit'),
  );
  $form['set_people'] = array(
    '#type' => 'submit',
    '#name' => 'people',
    '#value' => t('Set people as default'),
    '#submit' => array('search_options_search_form_submit'),
  );
  $form['note'] = array(
    '#type' => 'markup',
    '#markup' => t('Note: Due to cybersecurity settings, this form may not work on some IE browsers. In such cases, deleting all cookie files, and reloading the page will fix the issue.'),
    '#prefix' => '<div class="search-description">',
    '#suffix' => '</div>',
  );

  return $form;
}

/**
 * Callback for form submit.
 */
function search_options_search_form_submit($form, &$form_state) {
  if (isset($form_state['clicked_button']['#name'])) {
    $option = $form_state['clicked_button']['#name'];
    if ($option === 'web' || $option === 'people') {
      user_cookie_save(array('search_option' => $option));
    }
  }
}
