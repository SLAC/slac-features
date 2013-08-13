<?php
/**
 * @file
 * slac_wiki.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slac_wiki_taxonomy_default_vocabularies() {
  return array(
    'slac_wiki_tags' => array(
      'name' => 'Tags (SLAC WIKI)',
      'machine_name' => 'slac_wiki_tags',
      'description' => 'Autocomplete free tagging for wiki entries',
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
