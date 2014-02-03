<?php

/**
 * @file
 *
 * Plugin to provide a year month context. Converts url blog/2014/02 to pass
 * argument 2014-02 to contextual filter.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Year/Month'),
  'description' => t('A context that grabs year/month combination and passes as single string for date contextual filter.'),
  'context' => 'ctools_plugins_context_create_year_month',
  'keyword' => 'year_month',
  'context name' => 'year_month',
  'no ui' => FALSE,
  'edit form' => 'ctools_plugins_context_year_month_settings_form',
  'convert list' => array(
    'year_month' => t('Year month'),
  ),
  'convert' => 'ctools_plugins_context_year_month_convert',
);

/**
 * It's important to remember that $conf is optional here, because contexts
 * are not always created from the UI.
 */
function ctools_plugins_context_create_year_month($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context('year_month');
  $context->plugin = 'year_month';

  $year = (int) arg($data['year']);
  $month = (int) arg($data['month']);

  $context->data = array('year' => $year, 'month' => $month);
  return $context;
}

/**
 * Convert a context into a string.
 */
function ctools_plugins_context_year_month_convert($context, $type) {
  switch ($type) {
    case 'year_month':
      $year = $context->data['year'];
      $month = $context->data['month'];
      
      if (empty($month)) {
        return $year;
      }

      return $year . '-' . $month;
  }
}

function ctools_plugins_context_year_month_settings_form($form, &$form_state) {
  $conf = &$form_state['conf'];

  $form['year'] = array(
    '#title' => t('Year uri position'),
    '#type' => 'textfield',
    '#default_value' => $conf['year'],
  );

  $form['month'] = array(
    '#title' => t('Month uri position'),
    '#type' => 'textfield',
    '#default_value' => $conf['month'],
  );

  return $form;
}

function ctools_plugins_context_year_month_settings_form_submit($form, &$form_state) {
  $form_state['conf']['year'] = $form_state['values']['year'];
  $form_state['conf']['month'] = $form_state['values']['month'];
}
