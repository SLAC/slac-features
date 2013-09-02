<?php
/**
 * @file
 * slac_forum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_forum_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_forum_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function slac_forum_default_page_manager_handlers_alter(&$data) {
  if (isset($data['forum_panel_context_container'])) {
    unset($data['forum_panel_context_container']->export_type);
    unset($data['forum_panel_context_container']->in_code_only);
    unset($data['forum_panel_context_container']->table);
    unset($data['forum_panel_context_container']->type);
  }
  if (isset($data['forum_panel_context_forum'])) {
    $data['forum_panel_context_forum']->conf['display']->content['new-10']->configuration['context'] = 'argument_forum_id_1'; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-10']->configuration['override_title'] = 0; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-10']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-10']->locks = ''; /* WAS: array() */
    $data['forum_panel_context_forum']->conf['display']->content['new-10']->pid = 'new-10'; /* WAS: 'new-5' */
    $data['forum_panel_context_forum']->conf['display']->content['new-10']->position = 4; /* WAS: 5 */
    $data['forum_panel_context_forum']->conf['display']->content['new-10']->subtype = 'forum_topic_legend'; /* WAS: 'custom' */
    $data['forum_panel_context_forum']->conf['display']->content['new-10']->type = 'forum_topic_legend'; /* WAS: 'custom' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->configuration['admin_title'] = ''; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->configuration['body'] = '<div></div>'; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->configuration['format'] = 'full_html'; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->configuration['substitute'] = 1; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->configuration['title'] = ''; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->pid = 'new-5'; /* WAS: 'new-6' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->position = 5; /* WAS: 0 */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->subtype = 'custom'; /* WAS: 'forum_mark_read' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5']->type = 'custom'; /* WAS: 'forum_mark_read' */
    $data['forum_panel_context_forum']->conf['display']->content['new-6']->pid = 'new-6'; /* WAS: 'new-7' */
    $data['forum_panel_context_forum']->conf['display']->content['new-6']->position = 0; /* WAS: 1 */
    $data['forum_panel_context_forum']->conf['display']->content['new-6']->subtype = 'forum_mark_read'; /* WAS: 'forum_list' */
    $data['forum_panel_context_forum']->conf['display']->content['new-6']->type = 'forum_mark_read'; /* WAS: 'forum_list' */
    $data['forum_panel_context_forum']->conf['display']->content['new-7']->pid = 'new-7'; /* WAS: 'new-8' */
    $data['forum_panel_context_forum']->conf['display']->content['new-7']->position = 1; /* WAS: 2 */
    $data['forum_panel_context_forum']->conf['display']->content['new-7']->subtype = 'forum_list'; /* WAS: 'forum_topic_list' */
    $data['forum_panel_context_forum']->conf['display']->content['new-7']->type = 'forum_list'; /* WAS: 'forum_topic_list' */
    $data['forum_panel_context_forum']->conf['display']->content['new-8']->locks = ''; /* WAS: array() */
    $data['forum_panel_context_forum']->conf['display']->content['new-8']->pid = 'new-8'; /* WAS: 'new-9' */
    $data['forum_panel_context_forum']->conf['display']->content['new-8']->position = 2; /* WAS: 3 */
    $data['forum_panel_context_forum']->conf['display']->content['new-8']->shown = TRUE; /* WAS: FALSE */
    $data['forum_panel_context_forum']->conf['display']->content['new-8']->subtype = 'forum_topic_list'; /* WAS: 'forum_topic_list_sort' */
    $data['forum_panel_context_forum']->conf['display']->content['new-8']->type = 'forum_topic_list'; /* WAS: 'forum_topic_list_sort' */
    $data['forum_panel_context_forum']->conf['display']->content['new-9']->pid = 'new-9'; /* WAS: 'new-10' */
    $data['forum_panel_context_forum']->conf['display']->content['new-9']->position = 3; /* WAS: 4 */
    $data['forum_panel_context_forum']->conf['display']->content['new-9']->shown = FALSE; /* WAS: TRUE */
    $data['forum_panel_context_forum']->conf['display']->content['new-9']->subtype = 'forum_topic_list_sort'; /* WAS: 'forum_topic_legend' */
    $data['forum_panel_context_forum']->conf['display']->content['new-9']->type = 'forum_topic_list_sort'; /* WAS: 'forum_topic_legend' */
    unset($data['forum_panel_context_forum']->conf['display']->content['new-10']->configuration['admin_title']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-10']->configuration['body']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-10']->configuration['format']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-10']->configuration['substitute']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-10']->configuration['title']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-5']->configuration['context']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-5']->configuration['override_title']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-5']->configuration['override_title_text']);
    unset($data['forum_panel_context_forum']->export_type);
    unset($data['forum_panel_context_forum']->in_code_only);
    unset($data['forum_panel_context_forum']->table);
    unset($data['forum_panel_context_forum']->type);
  }
  if (isset($data['forum_panel_context_top'])) {
    unset($data['forum_panel_context_top']->export_type);
    unset($data['forum_panel_context_top']->in_code_only);
    unset($data['forum_panel_context_top']->table);
    unset($data['forum_panel_context_top']->type);
  }
}
