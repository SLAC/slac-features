<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Blog archive'),
  'defaults' => array(),
  'description' => t('Show years / months of blog posts for easier navigation.'),
  'category' => t('Blog'),
  'render callback' => 'blog_archive_menu_content_type_render',
);

/**
 * Plugin callback which reder content
 * @param type $subtype
 * @param type $conf
 * @param type $panel_args
 * @param type $context
 * @return \stdClass
 */
function blog_archive_menu_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_blog_archive';

  $block->title = t('Blog Archive');
  $block->content = slac_blog_archive_create_list();

  return $block;
}

/**
 * Generate list of years and months
 * @return rendered list with items
 */
function slac_blog_archive_create_list() {

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
  elseif ($menu_item['original_map'][0] == 'blog') {
    $years = isset($menu_item['page_arguments'][1]) ? $menu_item['page_arguments'][1] : $years;
  }

  if (_slac_blog_archive_years()) {
    // create the years items
    foreach (_slac_blog_archive_years() as $value) {
      $children = array();
      $year_attributes = array();

      //check if the year item should has subitems
      if ($years == $value->years) {

        // create the months items
        foreach (_slac_blog_archive_months($value->years) as $value_months) {
          $month_attributes = array();
          $months = isset($menu_item['page_arguments'][2]) ? $menu_item['page_arguments'][2] : 0;

          if ($months == $value_months->months_numeric) {
            $month_attributes = array('attributes' => array('class' => array('active-item', 'active-month')));
          }

          // add the classes for the current active year item
          $year_attributes = array('attributes' => array('class' => array('active-item', 'active-year')));

          $children[] = array(
            'data' => l(
                $value_months->months . ' (' . $value_months->nid_count . ')', 'blog/archive/' . $value->years . '/' . $value_months->months_numeric, $month_attributes),
          );
        }
      }
      $menu[] = array(
        'data' => l($value->years, 'blog/archive/' . $value->years, $year_attributes),
        'children' => ($children) ? $children : '',
      );
    }
  }
  $type = 'ul';
  $attributes = array(
    'id' => 'blog-archive',
    'class' => 'blog-archive-class',
  );
  $data = theme('item_list', array('items' => $menu, 'type' => $type, 'attributes' => $attributes));

  return $data;
}

/**
 * Custom query of years items
 * @return type list of years and index of the counted nodes
 */
function _slac_blog_archive_years() {
  $query = db_select('node', 'n')
      ->condition('n.status', 1, '=')
      ->condition('n.type', 'blog', '=')
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
function _slac_blog_archive_months($year = NULL) {
  $query = db_select('node', 'n')
      ->condition('n.status', 1, '=')
      ->condition('n.type', 'blog', '=')
      ->fields('n', array('created'))
      ->groupBy('months')
      ->orderBy('months_numeric', 'DESC');
  $query->where('FROM_UNIXTIME(created,\'%Y\') = :year', array(':year' => $year));
  $query->addExpression('COUNT(nid)', 'nid_count');
  $query->addExpression('FROM_UNIXTIME(created,\'%M\')', 'months');
  $query->addExpression('FROM_UNIXTIME(created,\'%m\')', 'months_numeric');
  return $query->execute()->fetchAll();
}