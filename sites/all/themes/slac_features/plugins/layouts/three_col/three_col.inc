<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Basic 3 col'),
  'category' => t('Slac layouts'),
  'icon' => 'three_col.png',
  'theme' => 'three_col',
  'theme arguments' => array('id', 'content'),
  'css' => 'three_col.css',
  'regions' => array(
    'left' => t('Left Column'),
    'mainmiddleright' => t('Main Middle+Right Column'),
    'middle' => t('Middle Column'),
    'right' => t('Right Column')
  ),
);

