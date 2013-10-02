<?php

/**
 * Settings form for panels grid.
 */
function panels_grid_settings($form, &$form_state) {
  $form['panels_grid_files_directory'] = array(
    '#type' => 'textfield',
    '#title' => t('Files path'),
    '#description' => t('Provide writable directory where Panels Grids will store SASS and compiled CSS files. If no path provided default public files directory to be used.'),
    '#default_value' => variable_get('panels_grid_files_directory', ''),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
  );

  return $form;
}

function panels_grid_settings_validate($form, $form_state) {
  $directory = $form_state['values']['panels_grid_files_directory'];
  if (!is_dir($directory) && !drupal_mkdir($directory, NULL, TRUE)) {
    form_set_error('panels_grid_files_directory', t('Directory is not writable.'));
  }
}

function panels_grid_settings_submit($form, $form_state) {
  variable_set('panels_grid_files_directory', $form_state['values']['panels_grid_files_directory']);
  _panels_grid_prepare_compass_project();
  drupal_set_message(t('Settings saved.'));
}
