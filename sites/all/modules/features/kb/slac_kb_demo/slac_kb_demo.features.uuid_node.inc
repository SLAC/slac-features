<?php
/**
 * @file
 * slac_kb_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_kb_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Man-made Material Shows Surprisingly Magnetic Personality',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '07a540b5-90f4-4e12-8b80-833d5766d04e',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1374763068,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0f0dea2a-700f-48d0-b247-7bf3fc37637e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. Mauris massa. Vestibulum lacinia arcu eget nulla. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(
    'und' => array(
      0 => array(
        'fid' => 5,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 34,
        'uuid' => '2e456207-aeca-43f3-b29c-0da0834feeac',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-25 17:37:48 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'Bienenstock, Michelson Elected to American Academy of Arts and Sciences ',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '26b4862b-52d6-4db1-97c9-d48f4b0c49cc',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1374763633,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3587a58a-79d5-42e6-9a65-e96ca2f22bca',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Nulla facilisi. Integer lacinia sollicitudin massa. Cras metus. Sed aliquet risus a tortor. Integer id quam. Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet. Vestibulum nisi lectus, commodo ac, facilisis ac, ultricies eu, pede. Ut orci risus, accumsan porttitor, cursus quis, aliquet eget, justo. Sed pretium blandit orci. Ut eu diam at pede suscipit sodales. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Nulla facilisi. Integer lacinia sollicitudin massa. Cras metus. Sed aliquet risus a tortor. Integer id quam. Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet. Vestibulum nisi lectus, commodo ac, facilisis ac, ultricies eu, pede. Ut orci risus, accumsan porttitor, cursus quis, aliquet eget, justo. Sed pretium blandit orci. Ut eu diam at pede suscipit sodales.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 36,
        'uuid' => '5441f982-c41e-47f9-a076-ba312679f181',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-25 17:47:13 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'SLAC Physicists Help Design, Build Cargo X-ray Scanners',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b52a2e4a-e717-434d-9be2-95410e5080d6',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1374763149,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '35f1d889-3183-4a63-94d8-01b3d10ec377',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Integer euismod lacus luctus magna. Quisque cursus, metus vitae pharetra auctor, sem massa mattis sem, at interdum magna augue eget diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Morbi lacinia molestie dui. Praesent blandit dolor. Sed non quam. In vel mi sit amet augue congue elementum. Morbi in ipsum sit amet pede facilisis laoreet. Donec lacus nunc, viverra nec, blandit vel, egestas et, augue. Vestibulum tincidunt malesuada tellus. Ut ultrices ultrices enim. Curabitur sit amet mauris. Morbi in dui quis est pulvinar ullamcorper. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Integer euismod lacus luctus magna. Quisque cursus, metus vitae pharetra auctor, sem massa mattis sem, at interdum magna augue eget diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Morbi lacinia molestie dui. Praesent blandit dolor. Sed non quam. In vel mi sit amet augue congue elementum. Morbi in ipsum sit amet pede facilisis laoreet. Donec lacus nunc, viverra nec, blandit vel, egestas et, augue. Vestibulum tincidunt malesuada tellus. Ut ultrices ultrices enim. Curabitur sit amet mauris. Morbi in dui quis est pulvinar ullamcorper.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 35,
        'uuid' => '35cbc66a-e794-4cac-bb15-e55d40106cfb',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-25 17:39:09 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'SLAC Study Reveals Active Site of Enzyme Linked to Stuttering',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'aa9a0145-25ef-427b-83a6-737e7d9456cb',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1374763118,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '35fa9e7d-b22a-4490-a8d3-c770762b0691',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Nulla metus metus, ullamcorper vel, tincidunt sed, euismod in, nibh. Quisque volutpat condimentum velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nam nec ante. Sed lacinia, urna non tincidunt mattis, tortor neque adipiscing diam, a cursus ipsum ante quis turpis. Nulla facilisi. Ut fringilla. Suspendisse potenti. Nunc feugiat mi a tellus consequat imperdiet. Vestibulum sapien. Proin quam. Etiam ultrices. Suspendisse in justo eu magna luctus suscipit. Sed lectus. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Nulla metus metus, ullamcorper vel, tincidunt sed, euismod in, nibh. Quisque volutpat condimentum velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nam nec ante. Sed lacinia, urna non tincidunt mattis, tortor neque adipiscing diam, a cursus ipsum ante quis turpis. Nulla facilisi. Ut fringilla. Suspendisse potenti. Nunc feugiat mi a tellus consequat imperdiet. Vestibulum sapien. Proin quam. Etiam ultrices. Suspendisse in justo eu magna luctus suscipit. Sed lectus.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 36,
        'uuid' => '5441f982-c41e-47f9-a076-ba312679f181',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-25 17:38:38 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'New Test Bed Probes the Origin of Pulses at LCLS',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0661ee71-6fb8-40ea-8f8d-864f9cfbc18d',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1375260347,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '63556029-330e-47cf-8e64-359a6ed5a5f3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'It all comes down to one tiny spot on a diamond-cut, highly pure copper plate. That\'s where every X-ray laser pulse at SLAC\'s Linac Coherent Light Source gets its start. That tiny spot must be close to perfect or it can impair and even halt LCLS operations.

SLAC in May 2013 opened a new test facility at the Accelerator Structure Test Area (ASTA) to study the complex physics and chemistry that cause that shiny copper slab, called a cathode, to degrade over time, and to identify ways to maintain and improve its performance.

"ASTA is the ideal place, the perfect place to test the cathode, RF (radio-frequency) gun and the laser for the future demands of LCLS and LCLS-II, the planned upgrade of LCLS," said Feng Zhou, a SLAC physicist who has served since March 2013 as a project leader for cathode research and development at ASTA.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>It all comes down to one tiny spot on a diamond-cut, highly pure copper plate. That\'s where every X-ray laser pulse at SLAC\'s Linac Coherent Light Source gets its start. That tiny spot must be close to perfect or it can impair and even halt LCLS operations.</p>
<p>SLAC in May 2013 opened a new test facility at the Accelerator Structure Test Area (ASTA) to study the complex physics and chemistry that cause that shiny copper slab, called a cathode, to degrade over time, and to identify ways to maintain and improve its performance.</p>
<p>"ASTA is the ideal place, the perfect place to test the cathode, RF (radio-frequency) gun and the laser for the future demands of LCLS and LCLS-II, the planned upgrade of LCLS," said Feng Zhou, a SLAC physicist who has served since March 2013 as a project leader for cathode research and development at ASTA.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(
    'und' => array(
      0 => array(
        'fid' => 1,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 41,
        'uuid' => 'af009c65-8760-454b-a942-c2424ed3c1c8',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-31 11:45:47 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'New Program Broadens the Reach of LCLS Crystallography Experiments',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ee7664c1-920e-4ec5-830d-a8264f71fc07',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1374763027,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7167c296-fbef-45a8-84fb-1b5398214775',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'A new screening program will allow researchers to quickly confirm whether precious biological samples yield useful information when struck by the intense X-ray pulses at SLAC\'s Linac Coherent Light Source (LCLS).

The Protein Crystal Screening Program opens up multiple 6-hour shifts at LCLS to both newcomers and returnees. It has two goals: to broaden access to LCLS and to improve the success and productivity of X-ray crystallography experiments during regular runs of more extended experiments, which are in such high demand that fewer than one in four proposals can be accepted.

Twenty-eight crystal screening slots are already scheduled for October 2013 through March 2014, and new proposals are now being sought for a batch of 20 screening shifts for the next LCLS run, which begins in April 2014. The deadline for those proposals is Oct. 22.

"This screening is potentially giving you an edge in telling you how to focus your time and effort to get the most out of an experiment," said SLAC\'s Marc Messerschmidt, an LCLS staff scientist who leads the upstart program.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>A new screening program will allow researchers to quickly confirm whether precious biological samples yield useful information when struck by the intense X-ray pulses at SLAC\'s Linac Coherent Light Source (LCLS).</p>
<p>The Protein Crystal Screening Program opens up multiple 6-hour shifts at LCLS to both newcomers and returnees. It has two goals: to broaden access to LCLS and to improve the success and productivity of X-ray crystallography experiments during regular runs of more extended experiments, which are in such high demand that fewer than one in four proposals can be accepted.</p>
<p>Twenty-eight crystal screening slots are already scheduled for October 2013 through March 2014, and new proposals are now being sought for a batch of 20 screening shifts for the next LCLS run, which begins in April 2014. The deadline for those proposals is Oct. 22.</p>
<p>"This screening is potentially giving you an edge in telling you how to focus your time and effort to get the most out of an experiment," said SLAC\'s Marc Messerschmidt, an LCLS staff scientist who leads the upstart program.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 33,
        'uuid' => '0d53e215-e34f-4097-a835-0870eaa81a0c',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-25 17:37:07 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'SLAC X-rays Resurrect 200-year-old Opera',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f7944543-0a51-4850-807f-ec2143a7d94d',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1375261105,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9ecb05c6-eb36-44ed-825c-a8030e41a416',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'At first glance the beautifully bound 1797 Luigi Cherubini opera Médée looks like an impeccably preserved relic of opera\'s golden age. However, flip to the final pages of the aria "Du trouble affreux qui me dévore" ("The terrible disorder that consumes me") and you see the problem: Thick smudges of carbon completely black out the closing lines.

Now, for the first time in over 200 years, Cherubini\'s most famous opera can be heard in full, thanks to physicists from the SLAC National Accelerator Laboratory. The scientists used X-rays to glimpse at the lost musical notes concealed under the carbon smear. (Listen to the found music here.)

"It was amazing to be able to see the complete aria," said physicist Uwe Bergmann, the interim director of the SLAC Linac Coherent Light Source. "For me, uncovering the composition of a genius\' work that had been lost for centuries is as thrilling as trying to uncover one of the big secrets of nature."

Musical mangling

Cherubini was widely considered to be one of the greatest composers of his time. Even Ludwig van Beethoven held him in high regard, admiring Cherubini\'s ability to "weave his polyphonic virtuosity, classical stylistic polish and a truly Romantic sense of drama into music of extraordinary depth and dramatic power."

When Cherubini first performed his operatic masterpiece Médée, the critics scoffed that it was simply too long. The legend goes that Cherubini, in an act of defiance, simply blacked out the closing lines to make the piece shorter. For centuries, the piece was performed in its incomplete form.

A visiting scholar at Stanford from Germany heard about how SLAC scientists uncovered hidden text in Archimedes\' writings and wondered if the same process could be used to restore Médée. A few email exchanges and tests later, the musical manuscript was in a custom-built frame on its way to the Stanford Synchrotron Radiation Lightsource (SSRL) at SLAC.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>At first glance the beautifully bound 1797 Luigi Cherubini opera Médée looks like an impeccably preserved relic of opera\'s golden age. However, flip to the final pages of the aria "Du trouble affreux qui me dévore" ("The terrible disorder that consumes me") and you see the problem: Thick smudges of carbon completely black out the closing lines.</p>
<p>Now, for the first time in over 200 years, Cherubini\'s most famous opera can be heard in full, thanks to physicists from the SLAC National Accelerator Laboratory. The scientists used X-rays to glimpse at the lost musical notes concealed under the carbon smear. (Listen to the found music here.)</p>
<p>"It was amazing to be able to see the complete aria," said physicist Uwe Bergmann, the interim director of the SLAC Linac Coherent Light Source. "For me, uncovering the composition of a genius\' work that had been lost for centuries is as thrilling as trying to uncover one of the big secrets of nature."</p>
<p>Musical mangling</p>
<p>Cherubini was widely considered to be one of the greatest composers of his time. Even Ludwig van Beethoven held him in high regard, admiring Cherubini\'s ability to "weave his polyphonic virtuosity, classical stylistic polish and a truly Romantic sense of drama into music of extraordinary depth and dramatic power."</p>
<p>When Cherubini first performed his operatic masterpiece Médée, the critics scoffed that it was simply too long. The legend goes that Cherubini, in an act of defiance, simply blacked out the closing lines to make the piece shorter. For centuries, the piece was performed in its incomplete form.</p>
<p>A visiting scholar at Stanford from Germany heard about how SLAC scientists uncovered hidden text in Archimedes\' writings and wondered if the same process could be used to restore Médée. A few email exchanges and tests later, the musical manuscript was in a custom-built frame on its way to the Stanford Synchrotron Radiation Lightsource (SSRL) at SLAC.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 39,
        'uuid' => '8efc6df4-8289-4403-a87e-540e0d355e31',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-31 11:58:25 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'X-ray Laser Brings Gold Exploration to the Nanoscale',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '63e5bb37-88ab-4355-a326-ae66f3c6282f',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1374763092,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b0015037-ad71-4771-a87b-dd571d6976e1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Curabitur sodales ligula in libero. Sed dignissim lacinia nunc. Curabitur tortor. Pellentesque nibh. Aenean quam. In scelerisque sem at dolor. Maecenas mattis. Sed convallis tristique sem. Proin ut ligula vel nunc egestas porttitor. Morbi lectus risus, iaculis vel, suscipit quis, luctus non, massa. Fusce ac turpis quis ligula lacinia aliquet. Mauris ipsum. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Curabitur sodales ligula in libero. Sed dignissim lacinia nunc. Curabitur tortor. Pellentesque nibh. Aenean quam. In scelerisque sem at dolor. Maecenas mattis. Sed convallis tristique sem. Proin ut ligula vel nunc egestas porttitor. Morbi lectus risus, iaculis vel, suscipit quis, luctus non, massa. Fusce ac turpis quis ligula lacinia aliquet. Mauris ipsum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(
    'und' => array(
      0 => array(
        'fid' => 2,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 37,
        'uuid' => '8007cf90-674c-4ff0-a0f2-25a0466cabec',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-25 17:38:12 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'X-ray Laser Pulses in Two Colors',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0ec0fc1d-d4d1-4c00-9a01-0d9e0af3e26a',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1375260181,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c1b7a2b9-0c29-463d-8c7d-028b8dfc39b4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Vestibulum sapien. Proin quam. Etiam ultrices. Suspendisse in justo eu magna luctus suscipit. Sed lectus. Integer euismod lacus luctus magna. Quisque cursus, metus vitae pharetra auctor, sem massa mattis sem, at interdum magna augue eget diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Morbi lacinia molestie dui. Praesent blandit dolor. Sed non quam. In vel mi sit amet augue congue elementum. Morbi in ipsum sit amet pede facilisis laoreet. Donec lacus nunc, viverra nec, blandit vel, egestas et, augue. 

Vestibulum tincidunt malesuada tellus. Ut ultrices ultrices enim. Curabitur sit amet mauris. Morbi in dui quis est pulvinar ullamcorper. Nulla facilisi. Integer lacinia sollicitudin massa. Cras metus. Sed aliquet risus a tortor. Integer id quam. Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet. 
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Vestibulum sapien. Proin quam. Etiam ultrices. Suspendisse in justo eu magna luctus suscipit. Sed lectus. Integer euismod lacus luctus magna. Quisque cursus, metus vitae pharetra auctor, sem massa mattis sem, at interdum magna augue eget diam. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Morbi lacinia molestie dui. Praesent blandit dolor. Sed non quam. In vel mi sit amet augue congue elementum. Morbi in ipsum sit amet pede facilisis laoreet. Donec lacus nunc, viverra nec, blandit vel, egestas et, augue. </p>
<p>Vestibulum tincidunt malesuada tellus. Ut ultrices ultrices enim. Curabitur sit amet mauris. Morbi in dui quis est pulvinar ullamcorper. Nulla facilisi. Integer lacinia sollicitudin massa. Cras metus. Sed aliquet risus a tortor. Integer id quam. Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 38,
        'uuid' => '8d607e80-fa1f-4fba-b812-35b84cf02f42',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-31 11:43:01 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'A New Tool to Split X-ray Laser Pulses',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2380ac5f-cb74-4788-a66e-3a1f4c11a01f',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1375260294,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd3c2d996-c759-43cf-a00d-db97863a5bc9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'A new tool at SLAC\'s Linac Coherent Light Source splits individual X-ray laser pulses into two pulses that can hit a target one right after another with precisely controlled timing, allowing scientists to trigger and measure specific ultrafast changes in atoms and molecules.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>A new tool at SLAC\'s Linac Coherent Light Source splits individual X-ray laser pulses into two pulses that can hit a target one right after another with precisely controlled timing, allowing scientists to trigger and measure specific ultrafast changes in atoms and molecules.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(
    'und' => array(
      0 => array(
        'fid' => 6,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 32,
        'uuid' => '0c8a1df9-c687-4ded-b8eb-dcea6e4b0c9f',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-31 11:44:54 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'Printing Innovations Provide 10-fold Improvement in Organic Electronics',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8d67d6e1-5edb-4505-952e-4dccb56cbbda',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1375261153,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'db32147e-6225-4450-a7fe-482beb45df85',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Menlo Park, Calif. — Through innovations to a printing process, researchers have made major improvements to organic electronics—a technology in demand for lightweight, low-cost solar cells, flexible electronic displays and tiny sensors. The printing method is fast and works with a variety of organic materials to produce semiconductors of strikingly higher quality than what has so far been achieved with similar methods.

Organic electronics have great promise for a variety of applications, but even the highest quality films available today fall short in how well they conduct electrical current. The team from the U.S. Department of Energy’s (DOE) SLAC National Accelerator Laboratory and Stanford University have developed a printing process they call FLUENCE—fluid-enhanced crystal engineering—that for some materials results in thin films capable of conducting electricity 10 times more efficiently than those created using conventional methods.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Menlo Park, Calif. — Through innovations to a printing process, researchers have made major improvements to organic electronics—a technology in demand for lightweight, low-cost solar cells, flexible electronic displays and tiny sensors. The printing method is fast and works with a variety of organic materials to produce semiconductors of strikingly higher quality than what has so far been achieved with similar methods.</p>
<p>Organic electronics have great promise for a variety of applications, but even the highest quality films available today fall short in how well they conduct electrical current. The team from the U.S. Department of Energy’s (DOE) SLAC National Accelerator Laboratory and Stanford University have developed a printing process they call FLUENCE—fluid-enhanced crystal engineering—that for some materials results in thin films capable of conducting electricity 10 times more efficiently than those created using conventional methods.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(
    'und' => array(
      0 => array(
        'fid' => 3,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 42,
        'uuid' => 'e4f02dd2-5fea-4f78-9932-78de63198263',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-31 11:59:13 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  $nodes[] = array(
  'title' => 'Harold Hwang Wins Top Korean Award',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '91092875-bcd7-4a86-b20b-a788a9621e82',
  'type' => 'kb_article',
  'language' => 'und',
  'created' => 1375260111,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f9de6023-c778-4014-a496-46bb720d0bd2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet. Vestibulum nisi lectus, commodo ac, facilisis ac, ultricies eu, pede. Ut orci risus, accumsan porttitor, cursus quis, aliquet eget, justo. Sed pretium blandit orci. Ut eu diam at pede suscipit sodales. Aenean lectus elit, fermentum non, convallis id, sagittis at, neque. Nullam mauris orci, aliquet et, iaculis et, viverra vitae, ligula. 

Nulla ut felis in purus aliquam imperdiet. Maecenas aliquet mollis lectus. Vivamus consectetuer risus et tortor. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta. ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Morbi mi. Quisque nisl felis, venenatis tristique, dignissim in, ultrices sit amet, augue. Proin sodales libero eget ante. Nulla quam. Aenean laoreet. Vestibulum nisi lectus, commodo ac, facilisis ac, ultricies eu, pede. Ut orci risus, accumsan porttitor, cursus quis, aliquet eget, justo. Sed pretium blandit orci. Ut eu diam at pede suscipit sodales. Aenean lectus elit, fermentum non, convallis id, sagittis at, neque. Nullam mauris orci, aliquet et, iaculis et, viverra vitae, ligula. </p>
<p>Nulla ut felis in purus aliquam imperdiet. Maecenas aliquet mollis lectus. Vivamus consectetuer risus et tortor. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec odio. Praesent libero. Sed cursus ante dapibus diam. Sed nisi. Nulla quis sem at nibh elementum imperdiet. Duis sagittis ipsum. Praesent mauris. Fusce nec tellus sed augue semper porta.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_kb_article_media' => array(
    'und' => array(
      0 => array(
        'fid' => 5,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_kb_categories' => array(
    'und' => array(
      0 => array(
        'tid' => 40,
        'uuid' => '9090165b-26d9-4584-8960-0556e596c3dc',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'date' => '2013-07-31 11:41:51 +0300',
  'author_uuid' => '8feecd34-79bc-478c-87fa-5646e70fc140',
);
  return $nodes;
}
