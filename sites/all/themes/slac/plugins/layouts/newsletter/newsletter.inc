<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Newsletter template'),
  'category' => t('Slac layouts'),
  'icon' => 'newsletter.png',
  'theme' => 'newsletter',
  'theme arguments' => array('id', 'content'),
  'css' => 'newsletter.css',
  'regions' => array(
    'intro_text_left' => t('Intro text left'),
    'intro_text_right' => t('Intro text right'),
    'header_h1' => t('Header H1'),
    'header_h2' => t('Header H2'),
    'date' => t('Date'),
    'articles' => t('Articles'),
    'right' => t('Right blocks'),
    'footer_left' => t('Footer left'),
    'footer_right' => t('Footer right'),
  ),
);

