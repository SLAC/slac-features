<?php

/**
 * @file
 * Definition of the 'example' panel style.
 */
// Plugin definition
$plugin = array(
  'title' => t('Example style 2'),
  'description' => t('Display example of style'),
  'render pane' => 'slac_block_style_example_style_render_pane',
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_slac_block_style_example_style_render_pane($vars) {
  $output = '';
  $output .= '<div class="region region-example-style">';
  $output .= '<h2 class="panel-title panel-title-example-style">' . $vars['content']->title . '</h2>';
  $output .= '<div class="pane-body-example-style">' . $vars['content']->content . '</div>';
  $output .= '</div>';
  return $output;
}

