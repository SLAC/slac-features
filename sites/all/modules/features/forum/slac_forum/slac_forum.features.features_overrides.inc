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
  $overrides["page_manager_handlers.forum_panel_context_container.export_type"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_container.in_code_only"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_container.table"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_container.type"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|configuration|admin_title"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|configuration|body"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|configuration|context"] = 'argument_forum_id_1';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|configuration|format"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|configuration|override_title"] = 0;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|configuration|override_title_text"] = '';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|configuration|substitute"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|configuration|title"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|locks"] = '';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|pid"] = 'new-10';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|position"] = 4;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|subtype"] = 'forum_topic_legend';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-10|type"] = 'forum_topic_legend';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|configuration|admin_title"] = '';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|configuration|body"] = '<div></div>';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|configuration|context"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|configuration|format"] = 'full_html';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|configuration|substitute"] = 1;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|configuration|title"] = '';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|pid"] = 'new-5';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|position"] = 5;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|subtype"] = 'custom';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-5|type"] = 'custom';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-6|pid"] = 'new-6';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-6|position"] = 0;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-6|subtype"] = 'forum_mark_read';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-6|type"] = 'forum_mark_read';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-7|pid"] = 'new-7';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-7|position"] = 1;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-7|subtype"] = 'forum_list';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-7|type"] = 'forum_list';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-8|locks"] = '';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-8|pid"] = 'new-8';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-8|position"] = 2;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-8|shown"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-8|subtype"] = 'forum_topic_list';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-8|type"] = 'forum_topic_list';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-9|pid"] = 'new-9';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-9|position"] = 3;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-9|shown"] = FALSE;
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-9|subtype"] = 'forum_topic_list_sort';
  $overrides["page_manager_handlers.forum_panel_context_forum.conf|display|content|new-9|type"] = 'forum_topic_list_sort';
  $overrides["page_manager_handlers.forum_panel_context_forum.export_type"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.in_code_only"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.table"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_forum.type"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.export_type"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.in_code_only"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.table"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.forum_panel_context_top.type"]["DELETED"] = TRUE;

 return $overrides;
}
