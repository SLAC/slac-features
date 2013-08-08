<?php
/**
 * @file
 * slac_faq.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slac_faq_taxonomy_default_vocabularies() {
  return array(
    'slac_faq_category' => array(
      'name' => 'FAQ Category',
      'machine_name' => 'slac_faq_category',
      'description' => 'Categories used by FAQs',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
