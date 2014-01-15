<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('One basic col page'),
  'category' => t('Slac layouts'),
  'icon' => 'one_col_basic.png',
  'theme' => 'one_col_basic',
  'theme arguments' => array('id', 'content'),
  'css' => 'one_col_basic.css',
  'regions' => array(
    'title' => t('Title'),
    'content' => t('Content')
  ),
);

