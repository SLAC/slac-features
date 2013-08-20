<?php
/**
 * @file
 * slac_event_demo.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function slac_event_demo_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'56\',
      \'uid\' => \'1\',
      \'title\' => "Photon Science Seminar: Commissioning the New LCLS \'XTCAV\'",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d0926c20-6b6b-400d-9495-c74b00372990\',
      \'nid\' => \'56\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375273624\',
      \'changed\' => \'1375273624\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2b32f5d3-f65b-474d-a737-88dda4c100f7\',
      \'revision_timestamp\' => \'1375273624\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'14\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-07-31T12:30:00\',
            \'value2\' => \'2013-07-31T14:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/photon-science-seminar-commissioning-new-lcls-xtcav\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375273624\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'62\',
      \'uid\' => \'1\',
      \'title\' => \'FACET & Test Facilities User Meeting and SAREC Review\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'954b0d6f-2f21-475d-9802-078097c8603a\',
      \'nid\' => \'62\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375285961\',
      \'changed\' => \'1375285961\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3ad46f52-dee1-484d-aad5-1d6cf988987e\',
      \'revision_timestamp\' => \'1375285961\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-08-03T06:45:00\',
            \'value2\' => \'2013-08-03T11:45:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/facet-test-facilities-user-meeting-and-sarec-review-0\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375285961\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'61\',
      \'uid\' => \'1\',
      \'title\' => \'Organic and Carbon Nanostructures for Energy Conversion and Energy Storage Devices\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'23de0379-5579-4046-bf44-39e37659269b\',
      \'nid\' => \'61\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375285836\',
      \'changed\' => \'1375285836\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'69d6e367-a3ec-498b-b5e5-e92b38ded8f8\',
      \'revision_timestamp\' => \'1375285836\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'14\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-08-02T15:45:00\',
            \'value2\' => \'2013-08-02T17:45:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/organic-and-carbon-nanostructures-energy-conversion-and-energy-storage-devices\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375285836\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'59\',
      \'uid\' => \'1\',
      \'title\' => \'8th International Conference on Inelastic X-ray Scattering\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f4dd3e7a-275a-4d73-bc22-acb9eaedcb5a\',
      \'nid\' => \'59\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375273799\',
      \'changed\' => \'1375273799\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8c61df9b-86da-4634-b537-0b74003e7d7a\',
      \'revision_timestamp\' => \'1375273799\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'14\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-08-05T12:30:00\',
            \'value2\' => \'2013-08-05T15:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/8th-international-conference-inelastic-x-ray-scattering\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375273799\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'63\',
      \'uid\' => \'1\',
      \'title\' => \'Science and Engineering of Solid-state Thermoelectric Energy Conversion\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3d0c5079-105c-413c-aa94-900503871823\',
      \'nid\' => \'63\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375286038\',
      \'changed\' => \'1375286038\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'93f76c9c-d27b-4310-9dae-8204851e86a3\',
      \'revision_timestamp\' => \'1375286038\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-08-04T06:00:00\',
            \'value2\' => \'2013-08-04T16:00:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/science-and-engineering-solid-state-thermoelectric-energy-conversion\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375286038\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => "SLAC Colloquium: \'A Walk on the Dark Side\'",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'70119b67-8b57-4fa5-9336-6b5f0164eace\',
      \'nid\' => \'10\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1374770117\',
      \'changed\' => \'1375273433\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a84a4454-aa42-41ca-84c6-2279395211c0\',
      \'revision_timestamp\' => \'1375273433\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-08-01T12:30:00\',
            \'value2\' => \'2013-08-01T16:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/slac-colloquium-walk-dark-side\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1374770117\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'58\',
      \'uid\' => \'1\',
      \'title\' => "SLAC Colloquium: \'Do WIMPs Rule? The LUX Experiment and the Search for Cosmic Dark Matter\'",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cdcfb9c2-dd40-40d3-970c-575edbbb3151\',
      \'nid\' => \'58\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375273739\',
      \'changed\' => \'1375273739\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ac7d4c2e-548f-49fe-97fd-357848cab389\',
      \'revision_timestamp\' => \'1375273739\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-07-29T07:30:00\',
            \'value2\' => \'2013-07-29T12:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/slac-colloquium-do-wimps-rule-lux-experiment-and-search-cosmic-dark-matter\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375273739\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'57\',
      \'uid\' => \'1\',
      \'title\' => "SLAC Colloquium: \'LZ and the future of WIMPs\'",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'81a99845-4846-4884-afe1-838942891ad5\',
      \'nid\' => \'57\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375273675\',
      \'changed\' => \'1375273675\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'be271241-c04a-441d-9964-f3ad2fd22f68\',
      \'revision_timestamp\' => \'1375273675\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-07-25T09:30:00\',
            \'value2\' => \'2013-07-25T12:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/slac-colloquium-lz-and-future-wimps\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375273675\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'64\',
      \'uid\' => \'1\',
      \'title\' => \'July 8, 9 SLAC Colloquia Postponed for One Week\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'602dcc95-4dc8-4c3c-a008-57bbe6ada0ca\',
      \'nid\' => \'64\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375364520\',
      \'changed\' => \'1375364520\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c19c0e28-8b0e-4b73-8d2b-e1df8654368e\',
      \'revision_timestamp\' => \'1375364520\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-08-08T12:45:00\',
            \'value2\' => \'2013-08-08T14:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(),
      \'field_slac_event_scientific_area\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Particle Physics\',
            \'format\' => NULL,
            \'safe_value\' => \'Particle Physics\',
          ),
        ),
      ),
      \'field_slac_event_organization\' => array(
        \'und\' => array(
          array(
            \'value\' => \'SLAC events\',
            \'format\' => NULL,
            \'safe_value\' => \'SLAC events\',
          ),
        ),
      ),
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Due to unforeseen circumstances, both the July 8 and July 9 SLAC Colloquia have been postponed until July 17 and July 18, locations to be determined.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Due to unforeseen circumstances, both the July 8 and July 9 SLAC Colloquia have been postponed until July 17 and July 18, locations to be determined.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_slac_event_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'66\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375364520\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'65\',
      \'uid\' => \'1\',
      \'title\' => \'Photon Science Seminar Today: Shedding Light into Rapidly Changing, Opaque Plasmas\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cd64c872-d63b-4a27-a453-caafaf811988\',
      \'nid\' => \'65\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375364867\',
      \'changed\' => \'1375364867\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d7856b6a-d54d-4a05-b84e-b1d5c6875229\',
      \'revision_timestamp\' => \'1375364867\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-08-24T12:30:00\',
            \'value2\' => \'2013-08-24T14:30:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>At today\'s Photon Science Seminar, Marta Fajardo of IST in Portugal will discuss how matter behaves under conditions of extreme temperature, pressure, density and electromagnetic fields. IST (Instituto Superior Técnico) is a Technical University of Lisbon engineering school.</p>\\r\\n<p>Her talk, \\"4D-HD for high-energy-density plasmas: shedding light into rapidly changing, opaque plasmas,\\" begins at 3 p.m. in Building 901\'s Redtail Hawk conference room.</p>\\r\\n<p>The talk will highlight how high-energy-density states of matter occur in astrophysical scenarios and also during every high-intensity laser-solid interaction, when a solid is heated to the plasma state. Although such states are easy to produce, the high densities last only briefly, and since visible radiation cannot penetrate them, traditional diagnostics leave an incomplete picture of these plasmas.</p>\\r\\n<p>Fajardo will discuss how high-harmonic radiation from laser-gas interactions, with photon energies in the extreme ultraviolet spectrum, is capable of probing solid density matter. This source, she will explain, has many unique qualities:</p>\\r\\n<ul>\\r\\n<li>\\r\\n\\t\\tIt holds the record for the shortest pulses ever produced, in the attosecond range.</li>\\r\\n<li>\\r\\n\\t\\tIt essentially behaves like a laser, with linear polarization, small divergence and full spatio-temporal coherence.</li>\\r\\n<li>\\r\\n\\t\\tIt has a \\"bonus\\" feature: a multicolored discrete spectrum.</li>\\r\\n</ul>\\r\\n<p>These characteristics allow for applications such as nanometer-scale coherent imaging. Different techniques, such as diffraction imaging and 3-D holography, have been demonstrated by Fajardo\'s research groups and other researchers. Recent improvements have allowed single-shot imaging and opened the way for attosecond time resolution.</p>\\r\\n<p>Fajardo will describe the use of high-harmonic generation (HHG) for opacity measurements and the development of an extreme ultraviolet (XUV) plasma refractive index diagnostic equipped with a wave-front sensor, as well as recent advances in XUV holography and plans to measure warm dense plasmas produced at SLAC\'s Linac Coherent Light Source (LCLS) with these techniques.</p>\\r\\n<p>Tapping into the potential of HHG sources as a probe, one goal, according to Fajardo, is to shine some light into matter under extreme conditions through ultrafast imaging of dense plasmas.</p>",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>At today\'s Photon Science Seminar, Marta Fajardo of IST in Portugal will discuss how matter behaves under conditions of extreme temperature, pressure, density and electromagnetic fields. IST (Instituto Superior Técnico) is a Technical University of Lisbon engineering school.<br />\\nHer talk, \\"4D-HD for high-energy-density plasmas: shedding light into rapidly changing, opaque plasmas,\\" begins at 3 p.m. in Building 901\'s Redtail Hawk conference room.<br />\\nThe talk will highlight how high-energy-density states of matter occur in astrophysical scenarios and also during every high-intensity laser-solid interaction, when a solid is heated to the plasma state. Although such states are easy to produce, the high densities last only briefly, and since visible radiation cannot penetrate them, traditional diagnostics leave an incomplete picture of these plasmas.<br />\\nFajardo will discuss how high-harmonic radiation from laser-gas interactions, with photon energies in the extreme ultraviolet spectrum, is capable of probing solid density matter. This source, she will explain, has many unique qualities:</p>\\n<ul><li>\\n\\t\\tIt holds the record for the shortest pulses ever produced, in the attosecond range.</li>\\n<li>\\n\\t\\tIt essentially behaves like a laser, with linear polarization, small divergence and full spatio-temporal coherence.</li>\\n<li>\\n\\t\\tIt has a \\"bonus\\" feature: a multicolored discrete spectrum.</li>\\n</ul><p>These characteristics allow for applications such as nanometer-scale coherent imaging. Different techniques, such as diffraction imaging and 3-D holography, have been demonstrated by Fajardo\'s research groups and other researchers. Recent improvements have allowed single-shot imaging and opened the way for attosecond time resolution.<br />\\nFajardo will describe the use of high-harmonic generation (HHG) for opacity measurements and the development of an extreme ultraviolet (XUV) plasma refractive index diagnostic equipped with a wave-front sensor, as well as recent advances in XUV holography and plans to measure warm dense plasmas produced at SLAC\'s Linac Coherent Light Source (LCLS) with these techniques.<br />\\nTapping into the potential of HHG sources as a probe, one goal, according to Fajardo, is to shine some light into matter under extreme conditions through ultrafast imaging of dense plasmas.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_slac_event_tags\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'67\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375364867\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'60\',
      \'uid\' => \'1\',
      \'title\' => \'Electroweak Production: The Path to SUSY?\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c1ff29b2-1f4e-4c4e-aa87-cb1d19326041\',
      \'nid\' => \'60\',
      \'type\' => \'event\',
      \'language\' => \'und\',
      \'created\' => \'1375285329\',
      \'changed\' => \'1375285329\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e6038d00-56d8-4977-8a6d-9b8faeac38b7\',
      \'revision_timestamp\' => \'1375285329\',
      \'revision_uid\' => \'1\',
      \'field_slac_event_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'14\',
          ),
        ),
      ),
      \'field_slac_event_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2013-08-08T14:45:00\',
            \'value2\' => \'2013-08-08T16:45:00\',
            \'timezone\' => \'Europe/Helsinki\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'date\',
          ),
        ),
      ),
      \'field_slac_event_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://news.slac.stanford.edu/announcement/electroweak-production-path-susy\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_slac_event_scientific_area\' => array(),
      \'field_slac_event_organization\' => array(),
      \'body\' => array(),
      \'field_slac_event_tags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1375285329\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
