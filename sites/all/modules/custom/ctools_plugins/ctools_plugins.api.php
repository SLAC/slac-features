<?php

/**
 * Implements hook_ctools_block_content_type_pre_render().
 *
 * This hook is triggered right before pane block is built.
 *
 * This can be used to set different current path for menu displayed through
 * panels. In this way we simply change current path ($_GET['q']) right before
 * rendering menu and restore that path after menu is built.
 *
 * @arg $subtype -- id of the menu (if menu block).
 */
function mymodule_ctools_block_content_type_pre_render($subtype, $conf) {
  $arg0 = arg(0);
  if ($arg0 != 'original_path' || $subtype != 'superfish-1') {
    return;
  }
  $current_path = &drupal_static(__FUNCTION__);
  $current_path = current_path();

  menu_set_active_item('custom_path');
}

/**
 * Implements hook_ctools_block_content_type_post_render().
 *
 * This hook is triggered after pane block is built.
 *
 * Restore previous path.
 */
function mymodule_ctools_block_content_type_post_render($subtype, $conf) {
  $current_path = &drupal_static('slac_service_catalog_ctools_block_content_type_pre_render');
  if (empty($current_path) || $subtype != 'superfish-1') {
    return;
  }

  menu_set_active_item($current_path);
  $current_path = '';
}