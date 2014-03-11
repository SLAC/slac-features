<?php
/**
 * @file
 * slac_newsletter.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_newsletter_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Drupal newsletter',
    'description' => 'Drupal newsletter categories.',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8f6f2e46-5f43-4d37-b6e1-3a447bd80ef9',
    'vocabulary_machine_name' => 'newsletter',
    'metatags' => array(),
  );
  return $terms;
}
