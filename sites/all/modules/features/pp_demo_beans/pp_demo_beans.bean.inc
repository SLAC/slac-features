<?php
/**
 * @file
 * pp_demo_beans.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function pp_demo_beans_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'block_with_brochures';
  $bean_type->label = 'Gallery Block';
  $bean_type->options = '';
  $bean_type->description = 'Blocks with title, shaded background, list of brochures (image, title, download link).';
  $export['block_with_brochures'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'content_block';
  $bean_type->label = 'Content Block';
  $bean_type->options = '';
  $bean_type->description = 'Block heading, block title (inside the content area), text (wyiswyg enabled), image and link. All items except text are optional.';
  $export['content_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'content_block_large_image';
  $bean_type->label = 'Content Block large image';
  $bean_type->options = '';
  $bean_type->description = 'Block heading, block title (inside the content area), text (wyiswyg enabled), image (large image) and link. All items except text are optional.';
  $export['content_block_large_image'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'content_block_with_links';
  $bean_type->label = 'Content Block with links list';
  $bean_type->options = '';
  $bean_type->description = 'Block heading, block title (inside the content area), text (wyiswyg enabled), list of links and link. Text and list of links are required.';
  $export['content_block_with_links'] = $bean_type;

  return $export;
}
