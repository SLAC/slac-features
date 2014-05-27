<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Page basic Int Org'),
  'category' => t('Slac layouts'),
  'icon' => 'page_basic_io.png',
  'theme' => 'page_basic_io',
  'theme arguments' => array('id', 'content'),
  'css' => 'page_basic_io.css',
  'regions' => array(
    'header-date' => t('Header Date'),
    'top-menu' => t('Top menu'),
    'user-search' => t('User controls and search'),
    'header-menu' => t('Header menu'),
    'site-title' => t('Site title'),
    'main-menu' => t('Main menu'),
    'content' => t('Content'),
    'footer' => t('Footer')
  ),
);

