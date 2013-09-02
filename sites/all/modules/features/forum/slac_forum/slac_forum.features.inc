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
    $data['forum_panel_context_container']->conf['display']->content['new-1']->subtype = 'forum_mark_read'; /* WAS: 'forum_list' */
    $data['forum_panel_context_container']->conf['display']->content['new-1']->type = 'forum_mark_read'; /* WAS: 'forum_list' */
    $data['forum_panel_context_container']->conf['display']->content['new-2']->subtype = 'forum_list'; /* WAS: 'forum_legend' */
    $data['forum_panel_context_container']->conf['display']->content['new-2']->type = 'forum_list'; /* WAS: 'forum_legend' */
    $data['forum_panel_context_container']->conf['display']->content['new-3'] = (object) array(
          'pid' => 'new-3',
          'panel' => 'center',
          'type' => 'forum_legend',
          'subtype' => 'forum_legend',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => '',
        ); /* WAS: '' */
    $data['forum_panel_context_container']->conf['display']->content['new-4'] = (object) array(
          'pid' => 'new-4',
          'panel' => 'center',
          'type' => 'custom',
          'subtype' => 'custom',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'admin_title' => '',
            'title' => '',
            'body' => '<div></div>',
            'format' => 'full_html',
            'substitute' => 1,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['forum_panel_context_container']->conf['display']->panels['center']['2'] = 'new-3'; /* WAS: '' */
    $data['forum_panel_context_container']->conf['display']->panels['center']['3'] = 'new-4'; /* WAS: '' */
    unset($data['forum_panel_context_container']->export_module);
  }
  if (isset($data['forum_panel_context_forum'])) {
    $data['forum_panel_context_forum']->conf['display']->content['new-10'] = (object) array(
          'pid' => 'new-10',
          'panel' => 'center',
          'type' => 'custom',
          'subtype' => 'custom',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'admin_title' => '',
            'title' => '',
            'body' => '<div></div>',
            'format' => 'full_html',
            'substitute' => 1,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 5,
          'locks' => array(),
        ); /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-5'] = (object) array(
          'pid' => 'new-5',
          'panel' => 'center',
          'type' => 'forum_mark_read',
          'subtype' => 'forum_mark_read',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-6'] = (object) array(
          'pid' => 'new-6',
          'panel' => 'center',
          'type' => 'forum_list',
          'subtype' => 'forum_list',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => '',
        ); /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-7'] = (object) array(
          'pid' => 'new-7',
          'panel' => 'center',
          'type' => 'forum_topic_list',
          'subtype' => 'forum_topic_list',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => '',
        ); /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-8'] = (object) array(
          'pid' => 'new-8',
          'panel' => 'center',
          'type' => 'forum_topic_list_sort',
          'subtype' => 'forum_topic_list_sort',
          'shown' => FALSE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->content['new-9'] = (object) array(
          'pid' => 'new-9',
          'panel' => 'center',
          'type' => 'forum_topic_legend',
          'subtype' => 'forum_topic_legend',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => '',
        ); /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->panels['center']['0'] = 'new-5'; /* WAS: 'new-1' */
    $data['forum_panel_context_forum']->conf['display']->panels['center']['1'] = 'new-6'; /* WAS: 'new-2' */
    $data['forum_panel_context_forum']->conf['display']->panels['center']['2'] = 'new-7'; /* WAS: 'new-3' */
    $data['forum_panel_context_forum']->conf['display']->panels['center']['3'] = 'new-8'; /* WAS: 'new-4' */
    $data['forum_panel_context_forum']->conf['display']->panels['center']['4'] = 'new-9'; /* WAS: '' */
    $data['forum_panel_context_forum']->conf['display']->panels['center']['5'] = 'new-10'; /* WAS: '' */
    unset($data['forum_panel_context_forum']->conf['display']->content['new-1']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-2']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-3']);
    unset($data['forum_panel_context_forum']->conf['display']->content['new-4']);
    unset($data['forum_panel_context_forum']->export_module);
  }
  if (isset($data['forum_panel_context_top'])) {
    $data['forum_panel_context_top']->conf['display']->content['new-11'] = (object) array(
          'pid' => 'new-11',
          'panel' => 'center',
          'type' => 'forum_list',
          'subtype' => 'forum_list',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => '',
        ); /* WAS: '' */
    $data['forum_panel_context_top']->conf['display']->content['new-12'] = (object) array(
          'pid' => 'new-12',
          'panel' => 'center',
          'type' => 'forum_legend',
          'subtype' => 'forum_legend',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => '',
        ); /* WAS: '' */
    $data['forum_panel_context_top']->conf['display']->content['new-13'] = (object) array(
          'pid' => 'new-13',
          'panel' => 'center',
          'type' => 'forum_statistics',
          'subtype' => 'forum_statistics',
          'shown' => TRUE,
          'access' => array(
            'plugins' => array(
              0 => array(
                'name' => 'role',
                'settings' => array(
                  'rids' => array(
                    0 => 3,
                  ),
                ),
                'context' => 'logged-in-user',
                'not' => FALSE,
              ),
            ),
          ),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => '',
        ); /* WAS: '' */
    $data['forum_panel_context_top']->conf['display']->content['new-14'] = (object) array(
          'pid' => 'new-14',
          'panel' => 'center',
          'type' => 'forum_mark_read',
          'subtype' => 'forum_mark_read',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'argument_forum_id_1',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['forum_panel_context_top']->conf['display']->content['new-15'] = (object) array(
          'pid' => 'new-15',
          'panel' => 'center',
          'type' => 'custom',
          'subtype' => 'custom',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'admin_title' => '',
            'title' => '',
            'body' => '<div></div>',
            'format' => 'full_html',
            'substitute' => 1,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
        ); /* WAS: '' */
    $data['forum_panel_context_top']->conf['display']->panels['center']['0'] = 'new-11'; /* WAS: 'new-1' */
    $data['forum_panel_context_top']->conf['display']->panels['center']['1'] = 'new-12'; /* WAS: 'new-2' */
    $data['forum_panel_context_top']->conf['display']->panels['center']['2'] = 'new-13'; /* WAS: 'new-3' */
    $data['forum_panel_context_top']->conf['display']->panels['center']['3'] = 'new-14'; /* WAS: '' */
    $data['forum_panel_context_top']->conf['display']->panels['center']['4'] = 'new-15'; /* WAS: '' */
    unset($data['forum_panel_context_top']->conf['display']->content['new-1']);
    unset($data['forum_panel_context_top']->conf['display']->content['new-2']);
    unset($data['forum_panel_context_top']->conf['display']->content['new-3']);
    unset($data['forum_panel_context_top']->export_module);
  }
}
