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
  'title' => 'KIPAC',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'dde2e529-5ddf-41da-bee1-42fe1abf2cc6',
  'type' => 'wiki_page',
  'language' => 'und',
  'created' => 1392718314,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '39c22772-b0ad-48b0-8c7e-fb89e40ed68b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The Kavli Institute for Particle Astrophysics and Cosmology, or KIPAC, was inaugurated in 2003 as an independent laboratory of Stanford University to serve as a bridge between the disciplines of astrophysics, cosmology and particle physics. KIPAC\'s members work in the Physics and Applied Physics Departments on the Stanford campus and at the SLAC National Accelerator Laboratory. Its mission is to bring the resources of modern computational, experimental, observational and theoretical science to bear on our understanding of the universe at large.',
        'summary' => '',
        'format' => 'markdown',
        'safe_value' => '<p>The Kavli Institute for Particle Astrophysics and Cosmology, or KIPAC, was inaugurated in 2003 as an independent laboratory of Stanford University to serve as a bridge between the disciplines of astrophysics, cosmology and particle physics. KIPAC\'s members work in the Physics and Applied Physics Departments on the Stanford campus and at the SLAC National Accelerator Laboratory. Its mission is to bring the resources of modern computational, experimental, observational and theoretical science to bear on our understanding of the universe at large.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_wiki_attachment' => array(),
  'field_slac_wiki_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 81,
        'uuid' => '2e3e21c1-6218-4fd6-ba95-c0ba2261f447',
      ),
      1 => array(
        'tid' => 80,
        'uuid' => 'd24c8773-a95e-4ce7-b89e-e95d5071b504',
      ),
    ),
  ),
  'metatags' => array(),
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-02-18 12:11:54 +0200',
  'author_uuid' => '66d6487e-8334-4a34-bab2-e13b28411aab',
);
  $nodes[] = array(
  'title' => 'LCLS',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1486bfa2-b160-4614-9ed4-3c040d14ab3c',
  'type' => 'wiki_page',
  'language' => 'und',
  'created' => 1392718482,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '458fe05e-a671-46d6-9338-1682893730d8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'SLAC\'s two-mile-long linear accelerator (or linac) has begun a new phase of its career, with the creation of the Linac Coherent Light Source (LCLS).

For nearly 50 years, SLAC\'s linac has produced high-energy electrons for cutting-edge physics experiments. Now, scientists continue this tradition of discovery by using the linac to drive a new kind of laser, creating X-ray pulses of unprecedented brilliance.

LCLS produces pulses of X-rays more than a billion times brighter than the most powerful existing sources, the so-called synchrotron sources which are also based on large electron accelerators.

The LCLS will create X-rays that can \'see\' atoms and molecules

The ultrafast X-ray pulses are used much like flashes from a high-speed strobe light, enabling scientists to take stop-motion pictures of atoms and molecules in motion, shedding light on the fundamental processes of chemistry, technology, and life itself.
Probing the Ultrasmall

The diameter of a human hair is about 1/1000 of an inch. The wavelength of visible light is about 50 times smaller than this, so ordinary microscopes can easily resolve a hair. But a molecule, about 10,000 times smaller than a hair, is too small to be resolved with visible light. X-rays, with wavelengths that are even smaller than a molecule, are ideal for imaging at the atomic scale.
Capturing the Ultrafast

The atomic and molecular world is abuzz with frenetic motion. Because they are so small and light, molecules and atoms react incredibly quickly to forces that act on them. Chemical reactions, in which molecules join or split, can take place in mere quadrillionths of a second.

The ultrafast LCLS X-ray flash captures images of these events with a “shutter speed” of less than 100 femtoseconds (100 femtoseconds = 1/10 of a trillionth of a second).',
        'summary' => '',
        'format' => 'markdown',
        'safe_value' => '<p>SLAC\'s two-mile-long linear accelerator (or linac) has begun a new phase of its career, with the creation of the Linac Coherent Light Source (LCLS).</p>
<p>For nearly 50 years, SLAC\'s linac has produced high-energy electrons for cutting-edge physics experiments. Now, scientists continue this tradition of discovery by using the linac to drive a new kind of laser, creating X-ray pulses of unprecedented brilliance.</p>
<p>LCLS produces pulses of X-rays more than a billion times brighter than the most powerful existing sources, the so-called synchrotron sources which are also based on large electron accelerators.</p>
<p>The LCLS will create X-rays that can \'see\' atoms and molecules</p>
<p>The ultrafast X-ray pulses are used much like flashes from a high-speed strobe light, enabling scientists to take stop-motion pictures of atoms and molecules in motion, shedding light on the fundamental processes of chemistry, technology, and life itself.<br />
Probing the Ultrasmall</p>
<p>The diameter of a human hair is about 1/1000 of an inch. The wavelength of visible light is about 50 times smaller than this, so ordinary microscopes can easily resolve a hair. But a molecule, about 10,000 times smaller than a hair, is too small to be resolved with visible light. X-rays, with wavelengths that are even smaller than a molecule, are ideal for imaging at the atomic scale.<br />
Capturing the Ultrafast</p>
<p>The atomic and molecular world is abuzz with frenetic motion. Because they are so small and light, molecules and atoms react incredibly quickly to forces that act on them. Chemical reactions, in which molecules join or split, can take place in mere quadrillionths of a second.</p>
<p>The ultrafast LCLS X-ray flash captures images of these events with a “shutter speed” of less than 100 femtoseconds (100 femtoseconds = 1/10 of a trillionth of a second).</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_wiki_attachment' => array(),
  'field_slac_wiki_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 82,
        'uuid' => 'ed74c4da-8dc1-4c4a-a0e0-237fe1f4c657',
      ),
      1 => array(
        'tid' => 80,
        'uuid' => 'd24c8773-a95e-4ce7-b89e-e95d5071b504',
      ),
      2 => array(
        'tid' => 79,
        'uuid' => '251bc38b-888f-4b13-9e19-e25c0d389cfa',
      ),
    ),
  ),
  'metatags' => array(),
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-02-18 12:14:42 +0200',
  'author_uuid' => '66d6487e-8334-4a34-bab2-e13b28411aab',
);
  $nodes[] = array(
  'title' => 'Sample wiki page',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9311f0a8-9ac2-434e-a0b2-ba3b699f69c8',
  'type' => 'wiki_page',
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
        'tid' => 78,
        'uuid' => 'a4f4d562-1da3-4d8e-8ed7-b621b919ea9e',
      ),
      1 => array(
        'tid' => 77,
        'uuid' => '79b2e381-eb13-4e93-9ff8-77a7568ff802',
      ),
    ),
  ),
  'metatags' => array(),
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
  'subscriptions_notify' => TRUE,
  'date' => '2013-08-15 22:22:17 +0300',
  'author_uuid' => '66d6487e-8334-4a34-bab2-e13b28411aab',
);
  $nodes[] = array(
  'title' => 'SLAC National Accelerator Laboratory',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b1e592d8-429a-470f-ba32-a880487c9ffb',
  'type' => 'wiki_page',
  'language' => 'und',
  'created' => 1392720268,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5bee297d-e59b-43f1-8626-38c6f93e22d3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Since its opening in 1962, SLAC National Accelerator Laboratory has been helping create the future. Six scientists have been awarded Nobel prizes for work done at SLAC, and more than 1,000 scientific papers are published each year based on research at the lab. As our second half-century unfolds, we’re just getting started.',
        'summary' => '',
        'format' => 'markdown',
        'safe_value' => '<p>Since its opening in 1962, SLAC National Accelerator Laboratory has been helping create the future. Six scientists have been awarded Nobel prizes for work done at SLAC, and more than 1,000 scientific papers are published each year based on research at the lab. As our second half-century unfolds, we’re just getting started.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_wiki_attachment' => array(),
  'field_slac_wiki_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 79,
        'uuid' => '251bc38b-888f-4b13-9e19-e25c0d389cfa',
      ),
      1 => array(
        'tid' => 80,
        'uuid' => 'd24c8773-a95e-4ce7-b89e-e95d5071b504',
      ),
    ),
  ),
  'metatags' => array(),
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-02-18 12:44:28 +0200',
  'author_uuid' => '66d6487e-8334-4a34-bab2-e13b28411aab',
);
  $nodes[] = array(
  'title' => 'PULSE',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0ed78430-082f-48eb-bc45-586dbc54907c',
  'type' => 'wiki_page',
  'language' => 'und',
  'created' => 1392718589,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e251ed64-af7b-42c7-b285-9386d9a1c0e1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The PULSE mission is to advance the frontiers of ultrafast science.

PULSE is a Stanford independent laboratory providing world leadership in ultrafast and short wavelength science and technology. 

One of the primary tools of PULSE is the Linac Coherent Light Source (LCLS) at SLAC, the world’s first hard X-ray free electron laser. The LCLS is about a billion times brighter than any X-ray source ever produced in the laboratory.

PULSE science is motivated by the transformational research opportunities of ultrafast and high field science with X-rays. PULSE is developing science not possible before the LCLS.
What is "ultrafast?"

The motion of atoms inside molecules during a chemical transformation, or the atomic motion that accompanies a phase change from solid to liquid occurs very fast—on the order of one trillionth of a second, or a picosecond. The electrons that rearrange in bonds when light is absorbed or during a chemical transition can move more than one thousand times faster than that—on the order of a femtosecond or less. To capture, view, and probe this motion, we need to have laser pulses much shorter than one picosecond.
What is "high field?"

The environment inside a molecule or between atoms in a solid is characterized by very strong electric and magnetic fields over very short distances (Angstroms). High-field lasers can probe this energy scale by producing light fields with strength comparable to this atomic binding field, or many volts per Angstrom.
What are X-rays?

X-rays are a form of light with a very short wavelength. X-ray microscopes have a very high spatial resolution, capable of viewing individual atoms inside a molecule or in a solid.
Why is the LCLS so special?

Simply put, LCLS is the first tool in human history capable of producing light with a wavelength on the scale of atomic length, field strength, and time. For the first time we will be able to "see" quantum processes on the atomic scale. Our challenge is to make this happen.',
        'summary' => '',
        'format' => 'markdown',
        'safe_value' => '<p>The PULSE mission is to advance the frontiers of ultrafast science.</p>
<p>PULSE is a Stanford independent laboratory providing world leadership in ultrafast and short wavelength science and technology.</p>
<p>One of the primary tools of PULSE is the Linac Coherent Light Source (LCLS) at SLAC, the world’s first hard X-ray free electron laser. The LCLS is about a billion times brighter than any X-ray source ever produced in the laboratory.</p>
<p>PULSE science is motivated by the transformational research opportunities of ultrafast and high field science with X-rays. PULSE is developing science not possible before the LCLS.<br />
What is "ultrafast?"</p>
<p>The motion of atoms inside molecules during a chemical transformation, or the atomic motion that accompanies a phase change from solid to liquid occurs very fast—on the order of one trillionth of a second, or a picosecond. The electrons that rearrange in bonds when light is absorbed or during a chemical transition can move more than one thousand times faster than that—on the order of a femtosecond or less. To capture, view, and probe this motion, we need to have laser pulses much shorter than one picosecond.<br />
What is "high field?"</p>
<p>The environment inside a molecule or between atoms in a solid is characterized by very strong electric and magnetic fields over very short distances (Angstroms). High-field lasers can probe this energy scale by producing light fields with strength comparable to this atomic binding field, or many volts per Angstrom.<br />
What are X-rays?</p>
<p>X-rays are a form of light with a very short wavelength. X-ray microscopes have a very high spatial resolution, capable of viewing individual atoms inside a molecule or in a solid.<br />
Why is the LCLS so special?</p>
<p>Simply put, LCLS is the first tool in human history capable of producing light with a wavelength on the scale of atomic length, field strength, and time. For the first time we will be able to "see" quantum processes on the atomic scale. Our challenge is to make this happen.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_wiki_attachment' => array(),
  'field_slac_wiki_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 83,
        'uuid' => '5126cb7c-69eb-4895-a0e6-a3aba3eda83a',
      ),
      1 => array(
        'tid' => 79,
        'uuid' => '251bc38b-888f-4b13-9e19-e25c0d389cfa',
      ),
    ),
  ),
  'metatags' => array(),
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-02-18 12:16:29 +0200',
  'author_uuid' => '66d6487e-8334-4a34-bab2-e13b28411aab',
);
  return $nodes;
}
