<?php
/**
 * @file
 * slac_service_catalog_demo.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slac_service_catalog_demo_taxonomy_default_vocabularies() {
  return array(
    'slac_sc_catalog_category' => array(
      'name' => 'Service Catalog category',
      'machine_name' => 'slac_sc_catalog_category',
      'description' => 'Designates primary service catalog categories',
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
    'slac_sc_catalog_eligibility' => array(
      'name' => 'Service Catalog eligibility',
      'machine_name' => 'slac_sc_catalog_eligibility',
      'description' => 'Define a list of eligibility requirements for the service offered',
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
    'slac_sc_catalog_self_help' => array(
      'name' => 'Service Catalog Self Help',
      'machine_name' => 'slac_sc_catalog_self_help',
      'description' => 'Self help topics',
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