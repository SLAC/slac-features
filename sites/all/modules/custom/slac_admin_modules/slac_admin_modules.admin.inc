<?php
/**
 * @file
 */

require_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'system') . "/system.admin.inc";

/**
 * Provides module enable/disable interface.
 */
function slac_admin_modules_form($form, $form_state = array()) {
  $demo_modules = module_invoke_all('demo_modules');
  $demo_modules_objects = array();

  // Get current list of modules.
  $files = system_rebuild_module_data();

  foreach ($demo_modules as $demo_module) {
    if (isset($files[$demo_module])) {
      $demo_modules_objects[$demo_module] = $files[$demo_module];
    }
  }

  if (empty($demo_modules_objects)) {
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
  
  // Help text explaining what the page does
  $form['description'] = array(
    '#markup' => '<p>' . t('Uncheck and click "Save configuration" to remove demo content from the site.') . '</p>',
  );

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
      '#theme' => 'slac_admin_modules_fieldset',
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

/**
 * Returns HTML for the modules form.
 */
function theme_slac_admin_modules_fieldset($variables) {
  $form = $variables['form'];

  // Individual table headers.
  $rows = array();
  // Iterate through all the modules, which are
  // children of this fieldset.
  foreach (element_children($form) as $key) {
    // Stick it into $module for easier accessing.
    $module = $form[$key];
    $row = array();
    unset($module['enable']['#title']);
    $row[] = array('class' => array('checkbox'), 'data' => drupal_render($module['enable']));
    $label = '<label';
    if (isset($module['enable']['#id'])) {
      $label .= ' for="' . $module['enable']['#id'] . '"';
    }
    $row[] = $label . '><strong>' . drupal_render($module['name']) . '</strong></label>';
    $row[] = drupal_render($module['version']);
    // Add the description, along with any modules it requires.
    $description = drupal_render($module['description']);
    if ($module['#requires']) {
      $description .= '<div class="admin-requirements">' . t('Requires: !module-list', array('!module-list' => implode(', ', $module['#requires']))) . '</div>';
    }
    if ($module['#required_by']) {
      $description .= '<div class="admin-requirements">' . t('Required by: !module-list', array('!module-list' => implode(', ', $module['#required_by']))) . '</div>';
    }
    $row[] = array('data' => $description, 'class' => array('description'));
    $rows[] = $row;
  }

  return theme('table', array('header' => $form['#header'], 'rows' => $rows));
}