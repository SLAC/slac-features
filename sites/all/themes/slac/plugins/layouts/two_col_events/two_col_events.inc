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
    'right' => t('Right Column')
  ),
);

