<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  STARTERKIT_preprocess_html($variables, $hook);
  STARTERKIT_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // STARTERKIT_preprocess_node_page() or STARTERKIT_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

function slac_preprocess_html(&$variables) {
	global $base_url;
	
	$element_css = array(
	  '#tag' => 'link', 
	  '#attributes' => array(
	    'href' => $base_url . '/' . drupal_get_path('theme', 'slac') . '/css/styles.css',
	    'rel' => 'stylesheet',
	    'media' => 'all'
	  ),
	  '#weight' => '-99999',
	);
	$element_modernizr = array(
	  '#tag' => 'script', 
	  '#attributes' => array(
	    'src' => $base_url . '/' . drupal_get_path('theme', 'slac') . '/js/modernizr-2.6.2-respond-1.1.0.min.js'
	  ),
	  '#suffix' => '</script>'
	);	
	
  $selectivizr = array(
    '#tag' => 'script',
    '#attributes' => array(
      'src' => $base_url . '/' . drupal_get_path('theme', 'slac') . '/js/selectivizr-min.js',
    ),
    //'#prefix' => '<!--[if lt IE 9]>',
    //'#suffix' => '</script><![endif]-->',
    '#suffix' => '</script>',
  );

	drupal_add_html_head($element_css, 'main_styles');
	drupal_add_html_head($element_modernizr, 'modernizr');
	drupal_add_html_head($selectivizr, 'selectivzr');

  // Add chosen on all pages.
  $chosen_path = libraries_get_path('chosen_v1.1.0');
  if (!empty($chosen_path)) {
    drupal_add_js($chosen_path . '/chosen.jquery.js');
  }
}

/**
 * Preprocess for node.tpl.php templates.
 */
function slac_preprocess_node(&$variables, $hook) {
  $variables['unpublished'] = (!$variables['status']) ? TRUE : FALSE;

  // Unset links like "add comment", "read more" etc. for teaser.
  if ($variables['node']->type == 'blog' && $variables['teaser'] == TRUE && isset($variables['content']['links'])) {
    unset($variables['content']['links']);
  }
  elseif ($variables['node']->type == 'blog' && isset($variables['content']['links']['blog'])) {
    unset($variables['content']['links']['blog']);
  }

  // Add pubdate to submitted variable.
  $variables['pubdate'] = '<time pubdate datetime="' . format_date($variables['node']->created, 'custom', 'c') . '">' . $variables['date'] . '</time>';
  if ($variables['node']->type == 'blog' && drupal_get_profile() == 'slac_people' && $variables['display_submitted']) {
    $variables['pubdate'] = '<time pubdate datetime="' . format_date($variables['node']->created, 'custom', 'c') . '">' . format_date($variables['created'], 'custom', 'l, F j, Y') . '</time>';
    $variables['submitted'] = t('Posted on !datetime', array('!datetime' => $variables['pubdate']));
  }
  elseif ($variables['node']->type == 'slac_news' || $variables['node']->type == 'kb_article' && $variables['display_submitted']) {
    $variables['pubdate'] = '<time pubdate datetime="' . format_date($variables['node']->created, 'custom', 'c') . '">' . format_date($variables['created'], 'custom', 'm/d/Y') . '</time>';
    $variables['submitted'] = $variables['pubdate'];
  }
  elseif ($variables['display_submitted']) {
    $variables['submitted'] = t('Submitted by !username on !datetime', array('!username' => $variables['name'], '!datetime' => $variables['pubdate']));
  }

  // Add a class for the view mode.
  if (!$variables['teaser']) {
    $variables['classes_array'][] = 'view-mode-' . $variables['view_mode'];
  }

  // Add a class to show node is authored by current user.
  if ($variables['uid'] && $variables['uid'] == $GLOBALS['user']->uid) {
    $variables['classes_array'][] = 'node-by-viewer';
  }

  $variables['title_attributes_array']['class'][] = 'node__title';
  $variables['title_attributes_array']['class'][] = 'node-title';

  // Use templates like node--event--teaser.tpl.php.
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
}

function slac_menu_link(array $variables) {
  $element = $variables['element'];
  $original_link = $element['#original_link'];
  $depth = 'depth-' . $original_link['depth'];
  $menu_name = 'item-' . $original_link['menu_name'];

  $variables['element']['#attributes']['class'][] = $depth;
  $variables['element']['#attributes']['class'][] = $menu_name;

  return theme_menu_link($variables);
}

function slac_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {

    $form['search_block_form']['#attributes']['placeholder'] = t('search web or people');
    $form['actions']['submit']['#value'] = t('GO'); // Change the text on the submit button

  }
}

function slac_preprocess_page_basic_eo(&$variables) {
  $logo_path = theme_get_setting('logo_path');
  $logo_link = theme_get_setting('logo_link');
  $default_logo = theme_get_setting('default_logo');
  $default_link = theme_get_setting('default_link');

  if (isset($logo_path) && $logo_path != '' && isset($default_logo) && $default_logo == 0) {
    $variables['logo_path'] = file_create_url($logo_path);
  }
  else {
    $variables['logo_path'] = '/sites/all/themes/slac/logo.png';
  }
  if (isset($logo_link) && $logo_link != '') {
    $variables['logo_link'] = $logo_link;
  }
  else {
    $variables['logo_link'] = ('http://www6.slac.stanford.edu');
  }
}

function slac_preprocess_page_basic_io(&$variables) {
  $logo_path = theme_get_setting('logo_path');
  $default_logo = theme_get_setting('default_logo');

  if (isset($logo_path) && $logo_path != '' && isset($default_logo) && $default_logo == 0) {
    $variables['logo_path'] = file_create_url($logo_path);
  }
  else {
    $variables['logo_path'] = '/sites/all/themes/slac/logo.png';
  }
}

function slac_preprocess_page_basic(&$variables) {
  $logo_path = theme_get_setting('logo_path');
  $default_logo = theme_get_setting('default_logo');

  if (isset($logo_path) && $logo_path != '' && isset($default_logo) && $default_logo == 0) {
    $variables['logo_path'] = file_create_url($logo_path);
  }
  else {
    $variables['logo_path'] = '/sites/all/themes/slac/logo.png';
  }
}