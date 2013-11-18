<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Basic 2 col'),
  'category' => t('Slac layouts'),
  'icon' => 'two_col.png',
  'theme' => 'two_col',
  'theme arguments' => array('id', 'content'),
  'css' => 'two_col.css',
  'regions' => array(
    'left' => t('Left Column'),
    'right' => t('Right Column')
  ),
);

