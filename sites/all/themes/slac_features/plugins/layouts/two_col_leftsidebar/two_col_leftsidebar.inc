<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Basic 2 col with leftsidebar'),
  'category' => t('Slac layouts'),
  'icon' => 'two_col_leftsidebar.png',
  'theme' => 'two_col_leftsidebar',
  'theme arguments' => array('id', 'content'),
  'css' => 'two_col_leftsidebar.css',
  'regions' => array(
    'left' => t('Left Column'),
    'right' => t('Right Column')
  ),
);

