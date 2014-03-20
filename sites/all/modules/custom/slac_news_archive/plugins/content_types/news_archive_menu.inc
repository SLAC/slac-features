<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('News archive'),
  'defaults' => array(),
  'description' => t('Show years / months of news posts for easier navigation.'),
  'category' => t('News'),
  'render callback' => 'news_archive_menu_content_type_render',
);

/**
 * Plugin callback which render content
 * @param type $subtype
 * @param type $conf
 * @param type $panel_args
 * @param type $context
 * @return \stdClass
 */
function news_archive_menu_content_type_render(&$subtype, $conf, $panel_args, $context) {
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

  // Set default value for years and months.
  list($current_year, $current_month) = _slac_news_archive_get_current_yearmonth();

  $year_counters = _slac_news_archive_years();
  if (empty($year_counters)) {
    return '';
  }

  // Create the years items.
  foreach ($year_counters as $value) {
    $children = array();
    $year_attributes = array();

    // Check if the year item should has subitems
    if ($current_year == $value->years) {
      // add the classes for the current active year item
      $year_attributes = array('attributes' => array('class' => array('active-item', 'active-year')));

      $children = _slac_news_archive_get_year_children($current_year, $current_month);
    }

    $year_link_title = $value->years;
    $menu[] = array(
      'data' => l($year_link_title, 'news/archive/' . $value->years, $year_attributes),
      'children' => ($children) ? $children : '',
    );
  }
  $attributes = array(
    'id' => 'news-archive',
    'class' => 'news-archive-class',
  );
  $data = theme('item_list', array('items' => $menu, 'type' => 'ul', 'attributes' => $attributes));

  return $data;
}

/**
 * Create the months items.
 *
 * @param type $current_year
 * @param type $current_month
 * @return type
 */
function _slac_news_archive_get_year_children($current_year, $current_month) {
  $children = array();
  foreach (_slac_news_archive_months($current_year) as $value_months) {
    $month_attributes = array();

    // add the classes for the current active month item
    if ($current_month == $value_months->months) {
      $month_attributes = array('attributes' => array('class' => array('active-item', 'active-month')));
    }

    $month_names = date_month_names_untranslated();
    $children[] = array(
      'data' => l(
        $month_names[$value_months->months] . ' (' . $value_months->nid_count . ')',
        'news/archive/' . $current_year . '/' . sprintf('%02s', $value_months->months),
        $month_attributes),
    );
  }
  return $children;
}

/**
 * Empty form so we can have the default override title.
 */
function slac_news_archive_news_archive_menu_content_type_edit_form($form, &$form_state) {
  // Does nothing!
  return $form;
}

/**
 * Custom query of years items
 * @return type list of years and index of the counted nodes
 */
function _slac_news_archive_years() {
  $query = _slac_news_archive_count_query();

  $query->groupBy('years');
  $query->orderBy('years', 'DESC');
  $query->addExpression('COUNT(n.nid)', 'nid_count');
  $query->addExpression('YEAR(f.field_slac_news_date_value)', 'years');
  return $query->execute()->fetchAll();
}

/**
 * Custom query of months items
 * @param type $year
 * @return type list of months and index of the counted nodes
 */
function _slac_news_archive_months($year = NULL) {
  $query = _slac_news_archive_count_query();

  $query->addExpression('COUNT(nid)', 'nid_count');
  $query->addExpression('MONTH(f.field_slac_news_date_value)', 'months');
  $query->where('YEAR(f.field_slac_news_date_value) = :year', array(':year' => $year));
  $query->groupBy('months');
  $query->orderBy('months', 'ASC');
  return $query->execute()->fetchAll();
}

function _slac_news_archive_count_query() {
  $query = db_select('node', 'n');
  $query->condition('n.status', 1, '=');
  $query->condition('n.type', 'slac_news', '=');
  $query->join('field_data_field_slac_news_date', 'f', 'n.nid = f.entity_id');

  return $query;
}

/**
 * Return currently selected pair year-month.
 *
 * Can be:
 * - current year for /news
 * - specified year (year plus month) in argument for /news/archive/YYYY/MM
 * - node's date field /node/X
 */
function _slac_news_archive_get_current_yearmonth() {
  $arg0 = arg(0);
  $arg1 = arg(1);
  $arg2 = arg(2);
  $arg3 = arg(3);

  if ($arg0 == 'news' && $arg1 == 'archive') {
    return array($arg2, $arg3);
  }

  $node = node_load($arg1);
  if (empty($node) || $node->type != 'slac_news' || !isset($node->field_slac_news_date[LANGUAGE_NONE][0]['value'])) {
    return array(date('Y', REQUEST_TIME), 0);
  }

  // Anonymous function used for readibility (return value early).
  $date_value = $node->field_slac_news_date[LANGUAGE_NONE][0]['value'];
  $date = date_create($date_value);

  return array(
    $date->format('Y'),
    $date->format('m'),
  );
}
