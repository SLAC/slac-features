<?php

/**
 * Display RSS Block.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('RSS Block'),
  'single' => TRUE,
  'defaults' => array(),
  'description' => t("RSS Block with aggregated data."),
  'category' => t('RSS Block'),
  'render callback' => 'rss_block_content_type_render',
);

/**
 * Outputs site indexes.
 */
function rss_block_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'slac_rss';
  $block->title = t('RSS Feeds');

  $content = '';
  if (isset($conf['feed']->fid)) {
    $feed = $conf['feed'];
    $view = views_get_view('slac_rss_block');
    $view->set_arguments(array($feed->fid));
    $view->set_items_per_page($conf['limit']);
    $content = $view->preview('rss_block');
    if (empty($view->result)) {
      $content = t('There is no content for selected RSS feed.');
    }
  }
  $block->content = $content;

  return $block;
}

/**
 * Returns the administrative title.
 */
function rss_block_content_type_admin_title($subtype, $conf) {
  return t('RSS Block');
}

/**
 * Returns an edit form for a block.
 */
function slac_rss_block_rss_block_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $period = drupal_map_assoc(array(900, 1800, 3600, 7200, 10800, 21600, 32400, 43200, 64800, 86400, 172800, 259200, 604800, 1209600, 2419200), 'format_interval');

  $form['fids'] = array(
    '#type' => 'hidden',
    '#default_value' => ((bool) $conf['fids']) ? $conf['fids'] : time(),
  );
  $form['feed_title'] = array(
    '#title' => t('RSS Feed title'),
    '#type' => 'textfield',
    '#description' => t('RSS feed title'),
    '#default_value' => ((bool) $conf['feed']->title) ? $conf['feed']->title : '',
    '#required' => TRUE,
  );
  $form['feed_link'] = array(
    '#title' => t('RSS Feed link'),
    '#type' => 'textfield',
    '#description' => t('RSS feed link'),
    '#default_value' => ((bool) $conf['feed']->url) ? $conf['feed']->url : '',
    '#required' => TRUE,
  );
  $form['refresh'] = array(
    '#type' => 'select',
    '#title' => t('Update interval'),
    '#default_value' => ((bool) $conf['feed']->refresh) ? $conf['feed']->refresh : 3600,
    '#options' => $period,
    '#description' => t('The length of time between feed updates. Default limit is 1 hour.'),
  );
  $form['limit'] = array(
    '#title' => t('Number of items to display'),
    '#type' => 'textfield',
    '#size' => 5,
    '#description' => t('Number of items that will be displayed in the block. Default limit is 10.'),
    '#default_value' => ((bool) $conf['limit']) ? $conf['limit'] : 10,
  );

  return $form;
}

/**
 * Validation function.
 */
function slac_rss_block_rss_block_content_type_edit_form_validate(&$form, &$form_state) {
  $fid = db_query('SELECT fid FROM aggregator_feed WHERE title = :title', array(':title' => $form_state['values']['feed_title']))->fetchField();
  $saved_fids = variable_get('rss_block_fids', array());
  $timestamp = $form_state['values']['fids'];
  if (!empty($fid) && isset($saved_fids[$timestamp])) {
    if ($saved_fids[$timestamp] != $fid) {
      form_set_error('feed_title', t('A feed with this title exists already, select other title.'));
    }
  }
  elseif (!empty($fid)) {
    form_set_error('feed_title', t('A feed with this title exists already, select other title.'));
  }
}

/**
 * Submit function.
 */
function slac_rss_block_rss_block_content_type_edit_form_submit(&$form, &$form_state) {
  $timestamp = $form_state['conf']['fids'] = $form_state['values']['fids'];
  if (isset($form_state['values']['feed_title'])) {
    $title = $form_state['conf']['feed_title'] = $form_state['values']['feed_title'];
  }
  else {
    $title = 'RSS Feed';
  }

  $refresh = $form_state['conf']['refresh'] = $form_state['values']['refresh'];

  if (isset($form_state['values']['feed_link'])) {
    $feed_link = $form_state['conf']['feed_link'] = trim($form_state['values']['feed_link']);

    $fid = 0;
    if (_item_exists_get_fid($feed_link, $title)) {
      $fid = _item_exists_get_fid($feed_link, $title);
      $edit_feed = array(
        'fid' => $fid,
        'url' => $feed_link,
        'title' => $title,
        'refresh' => $refresh,
        'category' => '',
        'block' => 0,
      );
      aggregator_save_feed($edit_feed);
    }
    else {
      $saved_fids = variable_get('rss_block_fids', array());
      if ($saved_fids[$timestamp] != 0) {
        $edit_feed = array(
          'fid' => $saved_fids[$timestamp],
        );
        // Remove old rss feed.
        aggregator_save_feed($edit_feed);
      }
      $edit_feed = array(
        'url' => $feed_link,
        'title' => $title,
        'refresh' => $refresh,
        'category' => '',
        'block' => 0,
      );
      aggregator_save_feed($edit_feed);
      if (_item_exists_get_fid($feed_link, $title)) {
        $fid = _item_exists_get_fid($feed_link, $title);
      }
      $saved_fids = variable_get('rss_block_fids', array());
      $saved_fids[$timestamp] = $fid;
      variable_set('rss_block_fids', $saved_fids);
    }
    // Load feed.
    $feed = $form_state['conf']['feed'] = aggregator_feed_load($fid);
    // Refresh RSS feed.
    aggregator_refresh($feed);
  }
  if (isset($form_state['values']['limit'])) {
    $form_state['conf']['limit'] = $form_state['values']['limit'];
  }
}

/**
 * Returns fid if exists feed with this title and url.
 */
function _item_exists_get_fid($link, $title) {
  $fid = db_query('SELECT fid FROM aggregator_feed WHERE url = :url AND title = :title', array(':url' => $link, ':title' => $title))->fetchField();
  if(is_numeric($fid)){
    return $fid;
  }
  return FALSE;
}