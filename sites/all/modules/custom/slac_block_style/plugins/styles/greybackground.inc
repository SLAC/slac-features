<?php

/**
 * @file
 * Definition of the 'example' panel style.
 */
// Plugin definition
$plugin = array(
  'title' => t('Grey background style'),
  'description' => t('This style will apply grey background'),
  'render pane' => 'slac_block_style_greybackground_style_render_pane',
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_slac_block_style_greybackground_style_render_pane($vars) {
  if (isset($vars['content']->title) && $vars['content']->content) {
    if (is_array($vars['content']->content)) {
      $content = drupal_render($vars['content']->content);
    }
    else {
      $content = $vars['content']->content;
    }
    $pane_settings_css_class = isset($vars['pane']->css['css_class']) ? $vars['pane']->css['css_class'] : '';
    $output = '';
    $output .= '<div class="panel-pane region-grey-background-style ' . $pane_settings_css_class . '">';
    $output .= '<h2 class="panel-title panel-title-grey-background-style">' . $vars['content']->title . '</h2>';
    $output .= '<div class="pane-body-grey-background-style">' . $content . '</div>';
    $output .= '</div>';

    return $output;
  }
}

