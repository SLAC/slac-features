<?php

/**
 * @file
 * ...
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('People list block'),
  'single' => TRUE,
  'description' => t('List of users on the site.'),
  'category' => t('People list'),
);

/**
 * Output function for the 'users_list' content type.
 *
 * Outputs the users_list for the current page.
 */
function slac_users_page_users_list_content_type_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $block->title = t('');
  $block->content = '';
  $header = array('data' => t('Name'), t('Details'));
  $rows = array();

  $query = db_select('users', 'u');
  $query->fields('u', array('uid'));
  $query->condition('u.uid', '0', '<>');
  $query->condition('u.uid', '1', '<>');
  $result = $query->execute();
  $total = 0;
  while($record = $result->fetchAssoc()) {
    if ($record['uid'] != 0 && $record['uid'] != 1) {
      $uid = $record['uid'];
      $total++;
      $account = user_load($uid);
      $account_view = user_view($account, 'full');
      $rows[$uid]['name_email']['data'] = l(format_username($account), 'user/' . $uid);
      $rows[$uid]['info']['data'] = drupal_render($account_view);
    }
  }

  $pager_limit = 10;
  $pager_element = 0;
  pager_default_initialize($total, $pager_limit, $pager_element);
  $current_page = pager_find_page($pager_element);
  $results_to_display = array_slice($rows, $current_page * $pager_limit, $pager_limit);

  //if (user_access('view users list')) {
    $block->content = theme(
      'table',
      array(
        'header' => $header,
        'rows' => $results_to_display,
        'attributes' => array(
          'width' => '50%',
          'class' => array('upeople-list-table')
        )
      )
    ).theme('pager');
  /*}
  else {
    $block->content = t('You are not authorized to view this content.');
  }*/

  return $block;
}
