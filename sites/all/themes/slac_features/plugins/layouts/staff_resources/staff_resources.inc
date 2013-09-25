<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Staff resources'),
  'category' => t('Slac layouts'),
  'icon' => 'staff_resources.png',
  'theme' => 'staff_resources',
  'theme arguments' => array('id', 'content'),
  'css' => 'staff_resources.css',
  'regions' => array(
    'staffresourcestop' => t('Resources top'),
    'rowonecolone' => t('First row first col'),
    'rowonecoltwo' => t('First row seccond col'),
    'rowonecolthree' => t('First row third col'),
    'rowtwocolone' => t('Seccond row first col'),
    'rowtwocoltwo' => t('Seccond row seccond col'),
    'rowtwocolthree' => t('Seccond row third col')
  ),
);

