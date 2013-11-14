<?php

/**
 * @file
 * Definition of the 'example' panel style.
 */
// Plugin definition
$plugin = array(
  'title' => t('Other Example style'),
  'description' => t('Display other example of style'),
  'render pane' => 'slac_block_style_otherexample_style_render_pane',
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_slac_block_style_otherexample_style_render_pane($vars) {
  $output = '';
  $output .= '<div class="region region-otherexample-style">';
  $output .= '<h2 class="panel-title panel-title-otherexample-style">' . $vars['content']->title . '</h2>';
  $output .= '<div class="pane-body-otherexample-style">' . $vars['content']->content . '</div>';
  $output .= '</div>';
  return $output;
}

