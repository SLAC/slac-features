<?php


$plugin = array(

  'single' => TRUE,
  'title' => t('Search Redirect'),  // Title to show up on the pane screen.
  'description' => t('Redirects to external search'), // Description to show up on the pane screen.
  'category' => t('SLAC'), // A category to put this under.
  'edit form' => 'slac_search_redirect_pane_edit_form', // A function that will return the settings form for the pane.
  'render callback' => 'slac_search_redirect_pane_render', // A function that will return the renderable content.
  'admin info' => 'slac_search_redirect_pane_admin_info', // A function that will return the information displayed on the admin screen (optional).
  'defaults' => array( // Array of defaults for the settings form.
    'text' => '',
  ),
);


/**
 * An edit form for the pane's settings.
 */
function slac_search_redirect_pane_edit_form($form, &$form_state) {

  return $form;
}

/**
 * Creates search form that redirects to external search.
 */
function slac_redirect_search_create_form() {
  
  return drupal_get_form('slac_redirect_search_form');

}

function slac_redirect_search_form() {
  $form = array();

  $form['search_redirect_keyword'] = array(
    '#type' => 'textfield',
    '#size' => 30,
    '#maxlength' => 128,
    '#required' => TRUE,
    '#attributes' => array('placeholder' => t('search web or people')),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('GO'),
  );

  return $form;

}

function slac_redirect_search_form_submit($form, &$form_state) {
    $form_state['redirect'] = 'http://www-psearch.slac.stanford.edu/SLACSearch/app/slac/index?style=mainSite&qt=' . $form_state['values']['search_redirect_keyword'];
}

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function slac_search_redirect_pane_render($subtype, $conf, $args, $contexts) {

  $content = slac_redirect_search_create_form();

  $block = new stdClass();

  // initial content is blank
  $block->title = t('Search for stuff'); // This will be overridden by the user within the panel options.
  $block->content = $content;

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function slac_search_redirect_pane_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $conf['text'];
    return $block;
  }
}
