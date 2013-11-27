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
	    'type' => 'text/css',
	    'media' => 'all'
	  ),
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
    '#prefix' => '<!--[if lt IE 9]>',
    '#suffix' => '</script><![endif]-->',
  );
	
	
	drupal_add_html_head($element_css, 'main_styles');
	drupal_add_html_head($element_modernizr, 'modernizr');
	drupal_add_html_head($selectivizr, 'selectivzr');
	
}

function slac_preprocess_node(&$variables, $hook) {
  $variables['unpublished'] = (!$variables['status']) ? TRUE : FALSE;
  $user = user_load($variables['uid']);
  $username = $user->name;

  // Unset links like "add comment", "read more" etc. for teaser.
  if ($variables['node']->type == 'blog' && $variables['teaser'] == TRUE && isset($variables['content']['links'])) {
    unset($variables['content']['links']);
  }
  elseif ($variables['node']->type == 'blog' && isset($variables['content']['links']['blog'])) {
    unset($variables['content']['links']['blog']);
  }

  // Load full user name from profile2 field.
  if (profile2_by_uid_load($variables['node']->uid, 'contact') && $variables['node']->type == 'blog') {
    $contact_profile = profile2_by_uid_load($variables['node']->uid, 'contact');
    if (isset($contact_profile->field_prf_contact_name[LANGUAGE_NONE][0]['value'])) {
      $username = $contact_profile->field_prf_contact_name[LANGUAGE_NONE][0]['value'];
    }
  }

  // Display username as a link to the Profile page.
  $username = '<a class="username" datatype="" property="foaf:name" typeof="sioc:UserAccount" about="/profile" xml:lang="" title="View user profile." href="/profile">' . $username . '</a>';

  $variables['pubdate'] = '<time pubdate datetime="' . format_date($variables['node']->created, 'custom', 'c') . '">' . format_date($variables['created'], 'custom', 'l, F j, Y') . '</time>';
  if ($variables['display_submitted']) {
    $variables['submitted'] = t('Posted by !username on !datetime', array('!username' => $username, '!datetime' => $variables['pubdate']));
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
