<?php
/**
 * @file
 * slac_faq_demo.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slac_faq_demo_taxonomy_default_vocabularies() {
  return array(
    'slac_faq_category' => array(
      'name' => 'FAQ Category',
      'machine_name' => 'slac_faq_category',
      'description' => 'Categories used by FAQs',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
