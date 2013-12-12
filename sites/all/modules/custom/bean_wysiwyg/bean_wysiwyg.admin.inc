<?php
/**
 * @file
 */

/**
 * Settings form for configuration of the Bean wysiwyg module.
 */
function bean_wysiwyg_settings_form($form_state) {
  $options = array();
  foreach (bean_get_types() as $bean_type) {
    $options[$bean_type->type] = $bean_type->getLabel();
  }
  $form['bean_wysiwyg_types_enabled'] = array(
    '#title' => t('Bean types'),
    '#description' => t('Bean types available in the wysiwyg plugin.'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => variable_get('bean_wysiwyg_types_enabled', array()),
  );

  return system_settings_form($form);
}