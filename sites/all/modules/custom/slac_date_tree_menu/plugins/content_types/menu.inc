<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Date Tree Menu'),
  'icon' => 'icon_node.png',
  'description' => t('The date tree menu by posted date.'),
  'category' => t('Activity'),
  'render callback' => 'slac_date_tree_menu_menu_render',
);

function slac_date_tree_menu_menu_render($subtype, $conf, $panel_args, $context) {
  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'date_tree_menu';

  $block->title = t('Blog Archive');
  $block->content = slac_date_tree_menu_create_menu();

  return $block;
}

function slac_date_tree_menu_create_menu() {

  /* if (!$data = cache_get('slac-archive-plugin')) {
    cache_set('slac-archive-plugin');
    } */

  $menu = array();
  foreach (_slac_date_tree_menu_years() as $value) {
    $children = array();
    if (_slac_date_tree_menu_months()) {
      foreach (_slac_date_tree_menu_months() as $value_months) {
        $children[] = array(
          'data' => l($value_months->months . '(' . $value_months->nid_count . ')', 'blog/archive/' . $value_months->months_numeric),
        );
      }
      $menu[] = array(
        'data' => l($value->years . '(' . $value->nid_count . ')', 'blog/archive/' . $value->years),
        'children' => ($children) ? $children : '',
      );
    }
  }
    $type = 'ul';
    $attributes = array(
      'id' => 'blog-archive',
      'class' => 'blog-archive-class',
    );
  return theme('item_list', array('items' => $menu, 'type' => $type, 'attributes' => $attributes));
}

function _slac_date_tree_menu_years() {
  $query = db_select('node', 'n')
      ->condition('n.status', 1, '=')
      ->condition('n.type', 'blog', '=')
      ->groupBy('years');
  $query->addExpression('COUNT(nid)', 'nid_count');
  $query->addExpression('FROM_UNIXTIME(created,\'%Y\')', 'years');
  return $query->execute()->fetchAll();
}

function _slac_date_tree_menu_months($year = NULL) {
  $query = db_select('node', 'n')
      ->condition('n.status', 1, '=')
      ->condition('n.type', 'blog', '=')
      //->condition('FROM_UNIXTIME(created,\'%Y\')', $year, '=')
      ->fields('n', array('created'))
      ->groupBy('months');
  $query->addExpression('COUNT(nid)', 'nid_count');
  $query->addExpression('FROM_UNIXTIME(created,\'%M\')', 'months');
  $query->addExpression('FROM_UNIXTIME(created,\'%m\')', 'months_numeric');
  return $query->execute()->fetchAll();
}