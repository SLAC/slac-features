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
    'name' => 'SLAC Newsletter',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd1d5a7fe-8e29-48f9-9a7b-1390b93b7e34',
    'vocabulary_machine_name' => 'newsletter',
    'metatags' => array(),
  );
  return $terms;
}
