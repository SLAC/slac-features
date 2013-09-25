<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Front Page 3 columns'),
  'category' => t('Slac layouts'),
  'icon' => 'frontpage.png',
  'theme' => 'frontpage',
  'theme arguments' => array('id', 'content'),
  'css' => 'frontpage.css',
  'regions' => array(
    'slider' => t('Slider'),
    'left' => t('Left sidebar'),
    'middletop' => t('Middle top'),
    'middleleft' => t('Middle left '),
    'middleright' => t('Middle right'),
    'right' => t('Right sidebar')
  ),
);

