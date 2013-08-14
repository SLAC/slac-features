<?php
/**
 * @file
 * slac_faq_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_faq_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'General feedback',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fbf57dca-3b7d-4dba-8987-96e4f276b91f',
    'vocabulary_machine_name' => 'slac_faq_category',
  );
  return $terms;
}
