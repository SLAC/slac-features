<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('2 col events'),
  'category' => t('Slac layouts'),
  'icon' => 'two_col_events.png',
  'theme' => 'two_col_events',
  'theme arguments' => array('id', 'content'),
  'css' => 'two_col_events.css',
  'regions' => array(
    'left' => t('Left Column'),
    'left_title' => t('Left Column Title'),
    'right' => t('Right Column'),
    'social_media' => t('Social media'),
    'inner_left' => t('Inner left'),
    'inner_right' => t('Inner right'),
    'inner_title' => t('Inner title'),
    'right_sidebar' => t('Right Sidebar'),
  ),
);

