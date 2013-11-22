<?php
/**
 * @file
 */

require_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'system') . "/system.admin.inc";

/**
 * Provides module enable/disable interface.
 */
function slac_admin_modules_form($form, $form_state = array()) {
  $demo_modules = array(
    'slac_blog_demo',
  );
  $demo_modules_objects = array();

  // Get current list of modules.
  $files = system_rebuild_module_data();

  foreach ($demo_modules as $demo_module) {
    if (isset($files[$demo_module])) {
      $demo_modules_objects[$demo_module] = $files[$demo_module];
    }
  }

  if(empty($demo_modules_objects)) {
    return;
  }

  // Remove hidden modules from display list.
  $visible_files = $demo_modules_objects;
  foreach ($visible_files as $filename => $file) {
    if (!empty($file->info['hidden'])) {
      unset($visible_files[$filename]);
    }
  }

  uasort($visible_files, 'system_sort_modules_by_info_name');

  // Display confirmation form.
  if (!empty($form_state['storage'])) {
    return slac_admin_modules_form_confirm_form($visible_files, $form_state['storage']);
  }

  //$modules = array();
  $form['modules'] = array('#tree' => TRUE);

  // Used when displaying modules that are required by the installation profile.
  require_once DRUPAL_ROOT . '/includes/install.inc';

  // Iterate through each of the modules.
  foreach ($visible_files as $filename => $module) {
    $extra = array();
    $extra['enabled'] = (bool) $module->status;
    /*if (!empty($module->info['required'] )) {
      $extra['disabled'] = TRUE;
    }*/
    $form['modules'][$module->info['package']][$filename] = _system_modules_build_row($module->info, $extra);
  }

  // Add basic information to the fieldsets.
  foreach (element_children($form['modules']) as $package) {
    $form['modules'][$package] += array(
      '#type' => 'fieldset',
      '#title' => t($package),
      '#collapsible' => TRUE,
      '#theme' => 'system_modules_fieldset',
      '#header' => array(
        array('data' => t('Enabled'), 'class' => array('checkbox')),
        t('Name'),
        t('Version'),
        t('Description'),
        //array('data' => t('Operations'), 'colspan' => 3),
      ),
    );
  }

  // Lastly, sort all fieldsets by title.
  uasort($form['modules'], 'element_sort_by_title');

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );
  $form['#action'] = url('demo-modules');

  return $form;
}

/**
 * Submit callback;
 */
function slac_admin_modules_form_submit($form, &$form_state) {
  system_modules_submit($form, $form_state);
  $form_state['redirect'] = 'demo-modules';
}

/**
 * Display confirmation form for required modules.
 */
function slac_admin_modules_form_confirm_form($modules, $storage) {
  $items = array();

  $form['validation_modules'] = array('#type' => 'value', '#value' => $modules);
  $form['status']['#tree'] = TRUE;
  $form['text'] = array('#markup' => theme('item_list', array('items' => $items)));

  if ($form) {
    // Set some default form values
    $form = confirm_form(
      $form,
      t('Continue configuration'),
      'demo-modules',
      t('Would you like to continue?'),
      t('Continue'),
      t('Cancel'));
    return $form;
  }
}