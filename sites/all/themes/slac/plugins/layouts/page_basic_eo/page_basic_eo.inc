<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Page basic Ext Org'),
  'category' => t('Slac layouts'),
  'icon' => 'page_basic_eo.png',
  'theme' => 'page_basic_eo',
  'theme arguments' => array('id', 'content'),
  'css' => 'page_basic_eo.css',
  'regions' => array(
    'user-search' => t('User controls and search'),
    'header-menu' => t('Header menu'),
    'site-title' => t('Site title'),
    'main-menu' => t('Main menu'),
    'content' => t('Content'),
    'footer-first' => t('Footer First'),
    'footer-seccond' => t('Footer Seccond')
  ),
);

