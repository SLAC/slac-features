<?php
/**
 * @file
 * slac_forum.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function slac_forum_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|content|new-1|subtype"] = 'forum_mark_read';
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|content|new-1|type"] = 'forum_mark_read';
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|content|new-2|subtype"] = 'forum_list';
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|content|new-2|type"] = 'forum_list';
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|content|new-3"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|content|new-4"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|panels|center|2"] = 'new-3';
  $overrides["page_manager_handlers.forum_panel_context_container.conf|display|panels|center|3"] = 'new-4';
  $overrides["page_manager_handlers.forum_panel_context_container.export_module"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-1"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-3"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-4"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-6"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-7"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-8"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-9"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|panels|center|0"] = 'new-5';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|panels|center|1"] = 'new-6';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|panels|center|2"] = 'new-7';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|panels|center|3"] = 'new-8';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|panels|center|4"] = 'new-9';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|panels|center|5"] = 'new-10';
  $overrides["page_manager_handlers.forum_panel_context_forum.export_module"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|content|new-1"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|content|new-11"] = (object) array(
      'pid' => 'new-11',
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
    );
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|content|new-12"] = (object) array(
      'pid' => 'new-12',
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
    );
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|content|new-13"] = (object) array(
      'pid' => 'new-13',
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
    );
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|content|new-14"] = (object) array(
      'pid' => 'new-14',
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
      'position' => 3,
      'locks' => '',
    );
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|content|new-15"] = (object) array(
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
    );
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|content|new-2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|content|new-3"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|panels|center|0"] = 'new-11';
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|panels|center|1"] = 'new-12';
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|panels|center|2"] = 'new-13';
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|panels|center|3"] = 'new-14';
  $overrides["page_manager_handlers.forum_panel_context_top.conf|display|panels|center|4"] = 'new-15';
  $overrides["page_manager_handlers.forum_panel_context_top.export_module"]["DELETED"] = TRUE;

 return $overrides;
}
