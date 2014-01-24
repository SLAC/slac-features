<?php

/**
 * Class views_plugin_display_feed_pane.
 */

class views_plugin_display_feed_pane extends views_plugin_display_feed {
  function option_definition () {
    $options = parent::option_definition();

    $options['pane'] = array('default' => FALSE, 'bool' => TRUE);

    return $options;
  }

  function options_summary(&$categories, &$options) {
    // It is very important to call the parent function here:
    parent::options_summary($categories, $options);

    $options['pane'] = array(
      'category' => 'attachment',
      'title' => t('Provide Pane'),
      'value' => $this->get_option('pane') ? t('Yes') : t('No'),
    );
  }

  /**
   * Provide the default form for setting options.
   */
  function options_form(&$form, &$form_state) {
    // It is very important to call the parent function here:
    parent::options_form($form, $form_state);

    if ($form_state['section'] == 'pane') {
      $form['#title'] .= t('Provide panels pane');
      $form['pane'] = array(
        '#type' => 'checkbox',
        '#title' => t('Provide'),
        '#description' => t('If this option is enabled you would be able to place feed icon as panels pane.'),
        '#default_value' => $this->get_option('pane'),
      );
    }
  }

  /**
   * Perform any necessary changes to the form values prior to storage.
   * There is no need for this function to actually store the data.
   */
  function options_submit(&$form, &$form_state) {
    // It is very important to call the parent function here:
    parent::options_submit($form, $form_state);

    if ($form_state['section'] == 'pane') {
      $this->set_option($form_state['section'], $form_state['values'][$form_state['section']]);
    }
  }
}

