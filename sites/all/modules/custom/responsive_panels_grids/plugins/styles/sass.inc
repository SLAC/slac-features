<?php

/**
 * @file
 * Definition of the 'sass' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('SASS container'),
  'description' => t('To be used with SASS layout'),
  'render region' => 'panels_sass_style_render_region',
);

function theme_panels_sass_style_render_region($vars) {
  $container_class = 'container-' . _panels_grid_unique_key($vars['display']->cache_key);
  return '<div class="' . $container_class . '">' . implode('', $vars['panes']) . '</div>';
}
