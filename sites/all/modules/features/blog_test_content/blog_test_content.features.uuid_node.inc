<?php
/**
 * @file
 * blog_test_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function blog_test_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 2,
  'title' => 'Tech Blog Sees \'Big Data Frontier\' Through LSST',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ed31d1e8-1fef-41ac-9254-ec4bcec5351d',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1373403600,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3e803fda-9628-4299-8fc5-a74c5d6ad661',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The Large Synoptic Survey Telescope (LSST) project faces a major milestone this month. The National Science Board will pass down its decision on whether to fund the next phase of LSST construction as part of the 2014 fiscal budget. At issue are hundreds of millions of dollars, and the fate of a three-gigapixel camera designed to take nightly pictures of the sky. With the success of several critical project reviews in the last eight months, there is every indication that LSST will get the green light. But how much the project will tell us about our solar system, the dark energy problem and more, will depend on how well we can process the information the telescope and its camera send back to us - an estimated sum of around ten petabytes of data per year.

Astronomy is a natural fit for big data science. The infinite frontier, the fact that data doesn’t have to be protected because of privacy or financial concerns, and the wide scope of heterogeneous information that studies of the sky provide all make astronomy the perfect sandbox for big data discovery. They also expose the difficulties of managing big data and deriving useful conclusions from heaps of structured and unstructured information.

Astrophysicist and Chair of Information and Statistics for LSST Kirk Borne has surveyed the sky for his entire career, and he says we don’t have a big data problem. Data storage isn’t a problem. The volume of data isn’t a problem. Our problem is pulling meaningful insights out of the data avalanche. It’s an issue across every field where big data makes itself available. From the financial markets to homeland security and medical research, massive amounts of data are only valuable if we can form conclusions from our findings and affect beneficial change.

Read the full article on SmartPlanet\'s blog "Thinking Tech."',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The Large Synoptic Survey Telescope (LSST) project faces a major milestone this month. The National Science Board will pass down its decision on whether to fund the next phase of LSST construction as part of the 2014 fiscal budget. At issue are hundreds of millions of dollars, and the fate of a three-gigapixel camera designed to take nightly pictures of the sky. With the success of several critical project reviews in the last eight months, there is every indication that LSST will get the green light. But how much the project will tell us about our solar system, the dark energy problem and more, will depend on how well we can process the information the telescope and its camera send back to us - an estimated sum of around ten petabytes of data per year.</p>
<p>Astronomy is a natural fit for big data science. The infinite frontier, the fact that data doesn’t have to be protected because of privacy or financial concerns, and the wide scope of heterogeneous information that studies of the sky provide all make astronomy the perfect sandbox for big data discovery. They also expose the difficulties of managing big data and deriving useful conclusions from heaps of structured and unstructured information.</p>
<p>Astrophysicist and Chair of Information and Statistics for LSST Kirk Borne has surveyed the sky for his entire career, and he says we don’t have a big data problem. Data storage isn’t a problem. The volume of data isn’t a problem. Our problem is pulling meaningful insights out of the data avalanche. It’s an issue across every field where big data makes itself available. From the financial markets to homeland security and medical research, massive amounts of data are only valuable if we can form conclusions from our findings and affect beneficial change.</p>
<p>Read the full article on SmartPlanet\'s blog "Thinking Tech."</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_blog_tags' => array(),
  'field_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 8,
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 2,
        'alt' => NULL,
        'title' => NULL,
        'width' => 1000,
        'height' => 1000,
        'uid' => 1,
        'filename' => 'lsst-starry.jpg',
        'uri' => 'public://lsst-starry.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 424781,
        'status' => 1,
        'timestamp' => 1374860984,
        'type' => 'image',
        'uuid' => 'e2787fc9-b62f-47e0-a705-cae4d8e41feb',
        'field_file_image_alt_text' => array(
          'und' => array(
            0 => array(
              'value' => 'Rendering of the Large Synoptic Survey Telescope, against the night sky.',
              'format' => NULL,
              'safe_value' => 'Rendering of the Large Synoptic Survey Telescope, against the night sky.',
            ),
          ),
        ),
        'field_file_image_title_text' => array(
          'und' => array(
            0 => array(
              'value' => 'Rendering of the Large Synoptic Survey Telescope, against the night sky.',
              'format' => NULL,
              'safe_value' => 'Rendering of the Large Synoptic Survey Telescope, against the night sky.',
            ),
          ),
        ),
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 1000,
          'height' => 1000,
        ),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 2,
  'comment_count' => 0,
  'name' => 'Mari Silbey',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-07-10 00:00:00 +0300',
);
  return $nodes;
}
