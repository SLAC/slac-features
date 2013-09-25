<?php
/**
 * @file
 * slac_event_demo.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slac_event_demo_taxonomy_default_vocabularies() {
  return array(
    'category_colors' => array(
      'name' => 'Category colors',
      'rdf_mapping' => array(
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
      ),
      'machine_name' => 'category_colors',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'event_categories' => array(
      'name' => 'Event Categories',
      'rdf_mapping' => array(
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
      ),
      'machine_name' => 'event_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'events_tags' => array(
      'name' => 'Events Tags',
      'rdf_mapping' => array(
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
      ),
      'machine_name' => 'events_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
