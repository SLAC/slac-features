<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('2 col article'),
  'category' => t('Slac layouts'),
  'icon' => 'two_col_article.png',
  'theme' => 'two_col_article',
  'theme arguments' => array('id', 'content'),
  'css' => 'two_col_article.css',
  'regions' => array(
    'left' => t('Left Column'),
    'left_title' => t('Left Column Title'),
    'left_author' => t('Left Column Author'),
    'social_media' => t('Social Media'),
    'right' => t('Right Column')
  ),
);

