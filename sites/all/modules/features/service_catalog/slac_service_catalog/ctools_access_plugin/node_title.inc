<?php

/**
 * @file
 * Plugin to provide access control based upon node's title.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Node: title"),
  'description' => t('Control access by the nodes title.'),
  'callback' => 'ctools_node_title_ctools_access_check',
  'summary' => 'ctools_node_title_ctools_access_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'default' => array('title' => NULL),
  'settings form' => 'ctools_node_title_ctools_access_settings',
);

/**
 * Settings form for the 'by node_title' access plugin
 */
function ctools_node_title_ctools_access_settings($form, &$form_state, $conf) {

  $form['settings']['title'] = array(
    '#title' => t('Node title'),
    '#type' => 'textfield',
    '#description' => t('Exact title of the node.'),
    '#default_value' => $conf['title'],
  );
  return $form;
}

/**
 * Check for access.
 */
function ctools_node_title_ctools_access_check($conf, $context) {
  return (!empty($context->data) && $context->data->title == $conf['title']);
}

/**
 * Provide a summary description based upon the checked node_titles.
 */
function ctools_node_title_ctools_access_summary($conf, $context) {
  return t('Returns true if the nodes title matches.');
}

