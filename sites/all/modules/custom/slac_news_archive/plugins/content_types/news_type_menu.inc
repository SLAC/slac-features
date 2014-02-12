<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('News By'),
  'defaults' => array(),
  'category' => t('News'),
  'render callback' => 'news_type_menu_content_type_render',
);

/**
 * Plugin callback which render content
 * @param type $subtype
 * @param type $conf
 * @param type $panel_args
 * @param type $context
 * @return \stdClass
 */
function news_type_menu_content_type_render(&$subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_news_types';

  $block->title = t('News By');
  $block->content = slac_news_types_create_list();

  return $block;
}

/**
 * Generate list of years and months
 * @return rendered list with items
 */
function slac_news_types_create_list() {
  $attributes = array();
  $path = current_path();
  if (drupal_get_path_alias($path) == 'news') {
    $attributes = array('attributes' => array('class' => array('active-item', 'active-type')));
  }
  $menu = array(array('data' => l('All News', 'news', $attributes)));

  $vid = _get_vid('news_types');
  if (!is_numeric($vid)) {
    return;
  }

  $terms = taxonomy_term_load_multiple(array(), array('vid' => $vid));
  $sorted_terms = _get_filtered_terms($terms);
  foreach ($sorted_terms as $term) {
    $attributes = array();
    $link_title = $term->name;
    $link_argument = str_replace(' ', '-', trim(strtolower($term->name)));
    $attributes = _get_attributes($link_argument);
    $menu[] = array(
      'data' => l($link_title, 'news/' . $link_argument, $attributes),
    );
  }

  $attributes = array(
    'id' => 'news-types-menu',
    'class' => 'menu',
  );
  $data = theme('item_list', array('items' => $menu, 'type' => 'ul', 'attributes' => $attributes));

  return $data;
}

/**
 * Empty form so we can have the default override title.
 */
function slac_news_archive_news_type_menu_content_type_edit_form($form, &$form_state) {
  // Does nothing!
  return $form;
}

/**
 * Get VID by vocabulary machine name.
 */
function _get_vid($vocabulary_name) {
  $vid = db_query('SELECT vid FROM {taxonomy_vocabulary} WHERE machine_name = :name', array(':name' => $vocabulary_name))->fetchField();

  if ($vid) {
    return $vid;
  }
  else {
    return FALSE;
  }
}

/**
 * Sorts and filters terms.
 */
function _get_filtered_terms($terms) {
  $count_table = array();
  $name_table = array();
  foreach ($terms as $tid => $value) {
    $count = count(taxonomy_select_nodes($tid, FALSE));
    if ($count > 0) {
      $name_table[$tid] = $value->name;
      $count_table[$tid] = $count;
    }
    else {
      unset($terms[$tid]);
    }
  }
  array_multisort($count_table, SORT_DESC, $name_table, SORT_STRING, $terms);
  return $terms;
}

function _get_attributes($link_argument) {
  $attributes = array();
  $current_argument = arg(1);
  $arg = isset($current_argument) ? strtolower(arg(1)) : '';
  if (arg(0) == 'news' && strtolower($arg) == $link_argument) {
    $attributes = array('attributes' => array('class' => array('active-item', 'active-type')));
  }
  return $attributes;
}
