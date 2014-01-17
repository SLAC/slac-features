<?php

define('SLAC_DRUSH_MODULES_TO_MERGE_FOLDER_NAME', 'modules_to_merge');

/**
 * Implements hook_drush_command().
 */
function slac_drush_drush_command() {
  $items = array();
  $items['slac-upc'] = array(
    'description' => dt('SLAC version of update code.'),
    'arguments'   => array(),
    'examples' => array(
      'Standard example' => 'drush slac-upc',
    ),
    'aliases' => array('supc'),
  );
  return $items;
}

function drush_slac_drush_slac_upc() {

  drush_print('Running SLAC updates.');

  if (!module_exists('update')) {
    module_enable(array('update'));
    drush_log('Module update enabled.', 'ok');
  }

  // Run cron to make sure all patched modules are locked.
  // @see slac_drush_cron().
  drush_invoke('core-cron');

  // Update all the code. Locked modules will be avoided.
  drush_invoke('pm-updatecode');

  // Profiles folder will be deleted if core has been updated so we need
  // to restore it with git.
  exec('cd ' . DRUPAL_ROOT . ' && git checkout -- profiles');

  // Download updates of patched modules.
  exec('rm -rf ' . DRUPAL_ROOT . '/' . SLAC_DRUSH_MODULES_TO_MERGE_FOLDER_NAME . '/*');

  // Check what patched modules need update and download their code.
  $patched_modules = variable_get('slac_drush_patched_modules', array());

  $backend_options = array(
    'integrate' => FALSE,
  );
  $updatestatus_options = array();
  $values = drush_invoke_process("@self", 'pm-updatestatus', $patched_modules, $updatestatus_options, $backend_options);
  $patched_modules_that_need_update = array_keys($values['object']);
  if (!empty($patched_modules_that_need_update)) {
    drush_invoke('pm-download', $patched_modules_that_need_update);
  }

  if (module_exists('update')) {
    module_disable(array('update'));
    drush_log('Module update disabled.', 'ok');
  }

  drush_print('');
  drush_print('');
  drush_print('');
  drush_print('Now you need to run "drush updatedb" to update database for updated modules.');

  if (!empty($patched_modules)) {
    drush_print('Remember manually update following modules: ' . implode(' ', $patched_modules) . '. They were downloaded to folder ' . SLAC_DRUSH_MODULES_TO_MERGE_FOLDER_NAME);
  }

  drush_print('');
}

/**
 * Implements hook_drush_pm_download_destination_alter().
 */
function slac_drush_drush_pm_download_destination_alter(&$project, $release) {
  $patched_modules = variable_get('slac_drush_patched_modules', array());
  if (isset($patched_modules[$project['name']])) {
    $project['project_install_location'] = 'modules_to_merge';
  }
}
