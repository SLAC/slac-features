<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Node author with prefix and suffix'),
  'icon' => 'icon_node.png',
  'description' => t('The author of the referenced node. Options: add prefix and suffix for author name, hide author name if author is Anonymous.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Node'),
  'defaults' => array(
    'link' => TRUE,
    'prefix' => '',
    'suffix' => '',
    'hide_if_anonymous' => FALSE,
  ),
  'render callback' => 'ctools_plugins_node_author_sp_content_type_render',
);

/**
 * Render the custom content type.
 */
function ctools_plugins_node_author_sp_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  // Get a shortcut to the node.
  $node = $context->data;
  $user = user_load($node->uid);

  // Build the content type block.
  $block = new stdClass();
  $block->module = 'ctools_plugins';
  $block->title = t('Author');
  $block->content = '';

  if ($conf['hide_if_anonymous'] == TRUE && $user->uid == 0) {
    return;
  }

  $prefix = ($conf['prefix'] != '') ? $conf['prefix'] . ' ' : '';
  $suffix = ($conf['suffix'] != '') ? ' ' . $conf['suffix'] . ' ' : '';
  $block->content = $prefix;
  $block->content .= !empty($conf['link']) ? theme('username', array('account' => $user, 'link_path' => 'user/' . $node->uid)) : check_plain(format_username($node));
  $block->content .= $suffix;
  $block->delta = $node->nid;

  return $block;
}

/**
 * Returns an edit form for custom type settings.
 */
function ctools_plugins_node_author_sp_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['prefix'] = array(
    '#title' => t('Prefix for node author'),
    '#type' => 'textfield',
    '#default_value' => $conf['prefix'],
    '#description' => t('Prefix for node author. Example: Submitted by.'),
  );

  $form['suffix'] = array(
    '#title' => t('Suffix for node author'),
    '#type' => 'textfield',
    '#default_value' => $conf['suffix'],
    '#description' => t('Suffix for node author.'),
  );

  $form['link'] = array(
    '#title' => t('Link to author profile'),
    '#type' => 'checkbox',
    '#default_value' => $conf['link'],
    '#description' => t('Check here to link to the node author profile.'),
  );

  $form['hide_if_anonymous'] = array(
    '#title' => t('Do not show author name if the author is Anonymous'),
    '#type' => 'checkbox',
    '#default_value' => $conf['hide_if_anonymous'],
    '#description' => t('The author name will not be displayed if the author of the node is Anonymous.'),
  );

  return $form;
}

/**
 * Submit handler for the custom type settings form.
 */
function ctools_plugins_node_author_sp_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Returns the administrative title for a type.
 */
function ctools_plugins_node_author_sp_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" author', array('@s' => $context->identifier));
}
