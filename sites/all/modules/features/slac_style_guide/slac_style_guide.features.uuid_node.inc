<?php
/**
 * @file
 * slac_style_guide.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_style_guide_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Style Guide',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3c966e05-e572-4bc5-a2ac-37f7fb662ffe',
  'type' => 'page',
  'language' => 'und',
  'created' => 1386277632,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '81ac3950-1f98-4037-8883-f437f9a50e53',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class=\'style-guide\'>
	<h1>Style guide used for SLAC Profiles</h1>
	<div class="styles style-1">
		<h2>The grid system</h2>
		<p>SLAC Profiles uses Susy grid systems</p>
		<div class="style-col1">

		</div>

	</div>

	<div class="styles style-2">
		<h2>Headings</h2>
		<p>All available styles for headings</p>
		<div class="style-col1">

		<pre>&lt;h1></pre>
		<h1>Heading H1</h1>
		<pre>&lt;h2></pre>
		<h2>Heading H2</h2>		
		<pre>&lt;h3></pre>
		<h3>Heading H3</h3>		
		<pre>&lt;h4></pre>
		<h4>Heading H4</h4>		
		<pre>&lt;h5></pre>
		<h5>Heading H5</h5>	
		<pre>&lt;h6></pre>
		<h6>Heading H6</h6>		
		</div>

	</div>
	
</div>',
        'summary' => '',
        'format' => 'unfiltered_html',
        'safe_value' => '<div class=\'style-guide\'>
	<h1>Style guide used for SLAC Profiles</h1>
	<div class="styles style-1">
		<h2>The grid system</h2>
		<p>SLAC Profiles uses Susy grid systems</p>
		<div class="style-col1">

		</div>

	</div>

	<div class="styles style-2">
		<h2>Headings</h2>
		<p>All available styles for headings</p>
		<div class="style-col1">

		<pre>&lt;h1></pre>
		<h1>Heading H1</h1>
		<pre>&lt;h2></pre>
		<h2>Heading H2</h2>		
		<pre>&lt;h3></pre>
		<h3>Heading H3</h3>		
		<pre>&lt;h4></pre>
		<h4>Heading H4</h4>		
		<pre>&lt;h5></pre>
		<h5>Heading H5</h5>	
		<pre>&lt;h6></pre>
		<h6>Heading H6</h6>		
		</div>

	</div>
	
</div>',
        'safe_summary' => '',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'date' => '2013-12-05 23:07:12 +0200',
  'author_uuid' => 'cc4fae8d-fb12-4bdd-8eb1-a2c65d0da3f4',
);
  return $nodes;
}
