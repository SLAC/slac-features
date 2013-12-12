<?php
/**
 * @file WYSIWYG plugin.
 */

/**
 * Implements hook_INCLUDE_plugin().
 */
function bean_wysiwyg_bean_plugin() {
  bean_wysiwyg_include_browser_js();

  $plugins['bean_wysiwyg'] = array(
    'title' => t('Block Insert'),
    'icon path' => drupal_get_path('module', 'bean_wysiwyg') . '/plugins/bean/images',
    'icon file' => 'bean_button.png',
    'icon title' => t('Block insert'),
    'js path' => drupal_get_path('module', 'bean_wysiwyg') . '/plugins/bean',
    'js file' => 'bean.js',
    'css path' => drupal_get_path('module', 'bean_wysiwyg') . '/plugins/bean',
    'css file' => 'bean.css',
    'icon title' => t('Block Insert'),
    'settings' => array(),
  );
  return $plugins;
}

/**
 * Prepares the page to be able to launch the block insert browser.
 *
 * Defines default variables.
 */
function bean_wysiwyg_include_browser_js() {
  static $included;
  if ($included) {
    return;
  }
  $included = TRUE;
  $javascript = bean_wysiwyg_browser_js();
  foreach ($javascript as $key => $definitions) {
    foreach ($definitions as $definition) {
      $function = 'drupal_add_' . $key;
      // Since the arguments to pass are variable, use call_user_func_array().
      // This will not handle all potential drupal_add_*() functions directly
      // but covers the js and library needed here, which are unlikely to be
      // expanded since this function is only a workaround for a wysiwyg limitation.
      call_user_func_array($function, $definition);
    }
  }
}
