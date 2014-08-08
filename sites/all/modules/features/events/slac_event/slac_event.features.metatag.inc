<?php
/**
 * @file
 * slac_event.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function slac_event_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:event.
  $config['node:event'] = array(
    'instance' => 'node:event',
    'config' => array(
      'og:image' => array(
        'value' => '[node:field_event_image]',
      ),
    ),
  );

  return $config;
}
