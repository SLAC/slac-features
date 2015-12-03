<?php

/**
 * @file
 * To implement admin configurations for landing pages.
 */

/**
 * Callback from webform_insightly_menu().
 *
 * Form to processes all tpl files.
 * To configure custom path and rescan the template files.
 */
function landing_page_templates_form($form, &$form_state) {
  $form['template_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to templates'),
    '#default_value' => variable_get('landing_page_templates_custom_path', ''),
    '#description' => t('Enter the custom path to template folder that holds landing page tpl files, Eg.,
      "sites/all/themes/bartik/templates/landing_pages/". By default template folders of active theme and
      template folder of landing page module will be scanned. Naming of the tpl should be
      landing-page--{type}.tpl.php'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Re-scan template files',
  );
  return $form;
}

/**
 * Callback for admin configuration form.
 *
 * If a custom path is set, set it into a variable.
 */
function landing_page_templates_form_submit($form, &$form_state) {
  $custom_path = $form_state['values']['template_path'];
  variable_set('landing_page_templates_custom_path', $custom_path);
  // Get list of all landing page template files.
  $template_list = landing_page_get_templates($custom_path);
  variable_set('landing_page_templates_list', $template_list);
  drupal_set_message(t('Template configuration is up to date.'));
}

/**
 * Get the template type from all the tpl files in
 * the templates folder.
 *
 * If a custom path is set, take all the tpl files from
 * the folder, By default system scans the tpl files from the current
 * active theme's templates folder and landing page module's template folder.
 * The tpl file format is landing-page--{type}.tpl.php,
 *
 * returns $template_list
 *   List of template names in the template folders.
 */
function landing_page_get_templates() {
  $paths_to_scan = array();
  $template_list = array('default' => 'default');

  // Get active theme's templates path.
  $theme = variable_get('theme_default');
  $theme_path = drupal_get_path('theme', $theme)  . '/templates/';
  $theme_directory_path = opendir($theme_path);

  // Get landing page module's template path.
  $landing_page_module_path = drupal_get_path('module', 'landing_page')  . '/templates/';
  $module_directory_path = opendir($landing_page_module_path);

  // Get custom templete path configured by admin.
  $custom_path = variable_get('landing_page_templates_custom_path');
  if ($custom_path) {
    $custom_directory_path = opendir($custom_path);
    $paths_to_scan[] = $custom_directory_path;
  }

  // Push paths to be scanned, in to an array.
  $paths_to_scan[] = $theme_directory_path;
  $paths_to_scan[] = $module_directory_path;
  foreach ($paths_to_scan as $directory_path) {
    while ($file_entry = readdir($directory_path)) {
      if (strpos($file_entry, 'landing-page--') === 0) {
        $template_files[] = $file_entry;
      }
    }
    foreach ($template_files as $key => $value) {
      $template = basename($value);
      $template_name = str_replace('landing-page--', '', $template);
      $template_type = str_replace('.tpl.php', '', $template_name);
      $template_list[$template_type] = $template_type;
    }
  }
  return $template_list;
}
