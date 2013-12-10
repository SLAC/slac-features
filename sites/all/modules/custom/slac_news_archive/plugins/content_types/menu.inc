<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  //'single' => TRUE,
  'title' => t('News archive'),
  'icon' => 'icon_node.png',
  'description' => t('Show years / months of news posts for easier navigation.'),
  'category' => t('NEWS'),
  'render callback' => 'slac_news_archive_menu_render',
);

/**
 * Plugin callback which reder content
 * @param type $subtype
 * @param type $conf
 * @param type $panel_args
 * @param type $context
 * @return \stdClass
 */
function slac_news_archive_menu_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_news_archive';

  $block->title = t('News Archive');
  $block->content = slac_news_archive_create_list();

  return $block;
}

/**
 * Generate list of years and months
 * @return rendered list with items
 */
function slac_news_archive_create_list() {

  $menu = array();
  $menu_item = menu_get_item();

  //set default value for years and months
  $years = date('Y');
  $months = date('m');

  // set values for years and months by the current page arguments
  if ($menu_item['original_map'][0] == 'node') {
    $years = date('Y', $menu_item['page_arguments'][0]->created);
    $months = date('m', $menu_item['page_arguments'][0]->created);
  }
  elseif ($menu_item['original_map'][0] == 'news') {
    if (isset($menu_item['page_arguments'][1])) {
      if (is_numeric($menu_item['page_arguments'][1])) {
        $years = $menu_item['page_arguments'][1];
      }
      elseif (isset($menu_item['page_arguments'][1]->data)) {
        if (is_numeric($menu_item['page_arguments'][1]->data)) {
          $years = $menu_item['page_arguments'][1]->data;
        }
      }
    }
    $months = isset($menu_item['page_arguments'][2]) ? $menu_item['page_arguments'][2] : $months;
  }

  // get cached list if already cached
  if ($data = cache_get('slac_news_archive_plugin' . $years, 'cache_menu')) {
    return $data->data;
  }

  if (_slac_news_archive_years()) {
    // create the years items
    foreach (_slac_news_archive_years() as $value) {
      $children = array();
      $year_attributes = array();

      // the inactive year items display the count of nodes
      $year_count = ' (' . $value->nid_count . ')';

      //check if the year item should has subitems
      if ($years == $value->years) {

        // create the months items
        foreach (_slac_news_archive_months($value->years) as $value_months) {
          $month_attributes = array();
          $year_count = '';

          // add the classes for the current active month item
          if ($months == $value_months->months_numeric) {
            $month_attributes = array('attributes' => array('class' => array('active-item', 'active-month')));
          }

          // add the classes for the current active year item
          $year_attributes = array('attributes' => array('class' => array('active-item', 'active-year')));

          $children[] = array(
            'data' => l(
                $value_months->months . ' (' . $value_months->nid_count . ')', 'news/archive/' . $value->years . '/' . $value_months->months_numeric, $month_attributes),
          );
        }
      }
      $menu[] = array(
        'data' => l($value->years . $year_count, 'news/archive/' . $value->years, $year_attributes),
        'children' => ($children) ? $children : '',
      );
    }
  }
  $type = 'ul';
  $attributes = array(
    'id' => 'news-archive',
    'class' => 'news-archive-class',
  );
  $data = theme('item_list', array('items' => $menu, 'type' => $type, 'attributes' => $attributes));

  // set cache
  cache_set('slac_news_archive_plugin' . $years, $data, 'cache_menu');
  return $data;
}

/**
 * Custom query of years items
 * @return type list of years and index of the counted nodes
 */
function _slac_news_archive_years() {
  $query = db_select('node', 'n')
      ->condition('n.status', 1, '=')
      ->condition('n.type', 'slac_news', '=')
      ->groupBy('years')
      ->orderBy('years', 'DESC');
  $query->addExpression('COUNT(nid)', 'nid_count');
  $query->addExpression('FROM_UNIXTIME(created,\'%Y\')', 'years');
  return $query->execute()->fetchAll();
}

/**
 * Custom query of months items
 * @param type $year
 * @return type list of months and index of the counted nodes
 */
function _slac_news_archive_months($year = NULL) {
  $query = db_select('node', 'n')
      ->condition('n.status', 1, '=')
      ->condition('n.type', 'slac_news', '=')
      ->fields('n', array('created'))
      ->groupBy('months')
      ->orderBy('months_numeric', 'DESC');
  $query->where('FROM_UNIXTIME(created,\'%Y\') = :year', array(':year' => $year));
  $query->addExpression('COUNT(nid)', 'nid_count');
  $query->addExpression('FROM_UNIXTIME(created,\'%M\')', 'months');
  $query->addExpression('FROM_UNIXTIME(created,\'%m\')', 'months_numeric');
  return $query->execute()->fetchAll();
}