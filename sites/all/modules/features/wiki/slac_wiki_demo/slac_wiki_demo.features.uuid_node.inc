<?php
/**
 * @file
 * slac_wiki_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_wiki_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Sample wiki page',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '33dc15f2-0a9d-4d80-8971-bc81aef3196c',
  'type' => 'slac_wiki_page',
  'language' => 'und',
  'created' => 1376594537,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '53499690-9b87-4199-ac6b-ad2782f60b9b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '##This is heading 2##
###This is heading 3###
####This is heading 4####

**This is bold Text**
*This is italic text*

`// This is a code block
function foo() {
   return \'bar\';
}
` 

> This is a block quote: Darkness cannot drive out darkness; only light can do that. Hate cannot drive out hate; only love can do that.

1.  This is a number list
2.  This is item2
3.  This is item3

This is an un-ordered list

*   Some list item
*   Some other list item
*   Another list item

Definition list

Apple
:   Apple is delicious food

Orange
:   Orange is an awesome piece of nurition

This is a table

| Column1 | Column2 |
| ------- | ------- |
| Col1Row1 | Col2Row1 |
| Col1Row2 | Col2Row2 |

[This is a link to stanford](http://www.stanford.edu)

Below is a logo of google images
![Google](http://images.google.com/intl/en_ALL/images/logos/images_logo_lg.gif "Google")',
        'summary' => '',
        'format' => 'markdown',
        'safe_value' => '<h2>This is heading 2</h2>
<h3>This is heading 3</h3>
<h4>This is heading 4</h4>
<p><strong>This is bold Text</strong><br />
<em>This is italic text</em></p>
<p><code>// This is a code block<br />
function foo() {<br />
   return \'bar\';<br />
}</code></p>
<blockquote><p>This is a block quote: Darkness cannot drive out darkness; only light can do that. Hate cannot drive out hate; only love can do that.</p>
</blockquote>
<ol>
<li>This is a number list</li>
<li>This is item2</li>
<li>This is item3</li>
</ol>
<p>This is an un-ordered list</p>
<ul>
<li>Some list item</li>
<li>Some other list item</li>
<li>Another list item</li>
</ul>
<p>Definition list</p>
<dl>
<dt>Apple</dt>
<dd>Apple is delicious food</dd>
<dt>Orange</dt>
<dd>Orange is an awesome piece of nurition</dd>
</dl>
<p>This is a table</p>
<table>
<tr>
<th>Column1</th>
<th>Column2</th>
</tr>
<tbody>
<tr>
<td>Col1Row1</td>
<td>Col2Row1</td>
</tr>
<tr>
<td>Col1Row2</td>
<td>Col2Row2</td>
</tr>
</tbody>
</table>
<p><a href="http://www.stanford.edu">This is a link to stanford</a></p>
<p>Below is a logo of google images<br />
<img src="http://images.google.com/intl/en_ALL/images/logos/images_logo_lg.gif" alt="Google" title="Google" /></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_wiki_attachment' => array(),
  'field_slac_wiki_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 10,
        'uuid' => 'a4f4d562-1da3-4d8e-8ed7-b621b919ea9e',
      ),
      1 => array(
        'tid' => 11,
        'uuid' => '79b2e381-eb13-4e93-9ff8-77a7568ff802',
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
  'data' => 'b:0;',
  'date' => '2013-08-15 15:22:17 -0400',
  'author_uuid' => '5d2f65b3-dc8f-481f-b49e-da0ab182b92b',
);
  return $nodes;
}
