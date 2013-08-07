<?php
/**
 * @file
 * slac_wiki.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function slac_wiki_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'slac_wiki_layout';
  $layout->admin_title = 'Wiki';
  $layout->admin_description = 'Panel layout for SLAC wiki';
  $layout->category = 'SLAC';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '69.9086298671361',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '30.0913701328639',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $export['slac_wiki_layout'] = $layout;

  return $export;
}
