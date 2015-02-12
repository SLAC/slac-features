<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Calendar Two Column Flex'),
  'category' => t('Slac layouts'),
  'icon' => 'calendar_two_column.png',
  'theme' => 'calendartwocolumn',
  'theme arguments' => array('id', 'content'),
  'css' => 'calendar_two_column.css',
  'regions' => array(
    'title' => t('Title'),
    'left' => t('Left Sidebar'),
    'center' => t('Center Column'),
    'right' => t('Right Sidebar'),
    'list-left'=>t('List Left'),
    'list-right'=> t('List Right'),
  ),
);

