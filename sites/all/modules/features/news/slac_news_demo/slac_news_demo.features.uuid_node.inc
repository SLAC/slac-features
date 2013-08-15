<?php
/**
 * @file
 * slac_news_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_news_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'World\'s Most Powerful X-ray Laser Beam Refined to Scalpel Precision',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8db12f61-7ae0-42fd-9e69-cbcef31ed24e',
  'type' => 'slac_news',
  'language' => 'und',
  'created' => 1376423217,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2cca6931-0a7b-4b97-b003-2f69ec11e8ca',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;"><strong style="background-color: transparent;">Menlo Park, Calif.&nbsp;</strong>&mdash; With a thin sliver of diamond, scientists at the U.S. Department of Energy&rsquo;s (DOE) SLAC National Accelerator Laboratory have transformed the&nbsp;<u style="background-color: transparent;"><a href="http://www-public.slac.stanford.edu/lcls/aboutlcls.aspx" style="background-color: transparent; color: rgb(21, 115, 146);" target="_blank">Linac Coherent Light Source (LCLS)</a></u>&nbsp;into an even more precise tool for exploring the nanoworld. The improvements yield laser pulses focused to higher intensity in a much narrower band of X-ray wavelengths, and may enable experiments that have never before been possible.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">In a process called &ldquo;self-seeding,&rdquo; the diamond filters the laser beam to a single X-ray color, which is then amplified. Like trading a hatchet for a scalpel, the advance will give researchers more control in studying and manipulating matter at the atomic level and will deliver sharper images of materials, molecules and chemical reactions.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">&ldquo;The more control you have, the finer the details you can see,&rdquo; said Jerry Hastings, a SLAC scientist and co-author on the research, published this week in Nature Photonics. &ldquo;People have been talking about self-seeding for nearly 15 years. The method we incorporated at SLAC was proposed in 2010 by Gianluca Geloni, Vitali Kocharyan and Evgeni Saldin of the European XFEL and DESY research centers in Germany. When our team from SLAC and Argonne National Laboratory built it, we were surprised by how simple, robust and cost-effective the engineering turned out to be.&rdquo; Hastings added that laboratories around the world are already planning to incorporate this important advance into their own X-ray laser facilities.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">Self-seeding has the potential to produce X-ray pulses with significantly higher intensity than the current LCLS performance. The increased intensity in each pulse could be used to probe deep into complex materials to help answer questions about exotic substances like high-temperature superconductors or intricate electronic states like those found in topological insulators.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">The LCLS generates its laser beam by accelerating bunches of electrons to nearly the speed of light and setting them on a zigzag path with a series of magnets. This forces the electrons to emit X-rays, which are gathered into laser pulses that are a billion times brighter than any available before, and fast enough to scan samples in quadrillionths of a second.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">Without self-seeding these X-ray laser pulses contain&nbsp;<u style="background-color: transparent;"><a href="https://news.slac.stanford.edu/image/lcls-sase-v-seeded-pulse" style="background-color: transparent; color: rgb(21, 115, 146);" target="_blank">a range of wavelengths</a></u>&nbsp;(or colors) in an unpredictable pattern, not all of which experimenters can use. Until now, creating a narrower wavelength band at LCLS meant subtracting the unwanted wavelengths, resulting in a substantial loss of intensity.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">To create a precise X-ray wavelength band and make the LCLS even more &ldquo;laser-like,&rdquo; researchers installed a slice of diamond crystal halfway down the 130-meter bank of magnets where the X-rays are generated.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">Producing the narrower wavelength band is just the beginning. &ldquo;The resulting pulses could pack up to 10 times more intensity when we finish optimizing the system and add more undulators,&quot; said Zhirong Huang, a SLAC accelerator physicist and co-author, who has been a major contributor to the project.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">LCLS has already begun accepting proposals to use self-seeding for future experiments.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">The first tests of the LCLS self-seeding system have generated intense excitement among scientists the world over. Representatives from other X-ray laser facilities, including Swiss FEL, SACLA in Japan and the European XFEL, came to help, and also learn how to implement it at their own sites.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">According to Paul Emma, a co-author who was a key figure in the original commissioning of the LCLS and in implementing self-seeding, &ldquo;the entire group of observers was smiling from ear to ear.&quot; Emma, now working at Lawrence Berkeley National Lab, has a history of making tough jobs look easy, but he would only say, &quot;I was very happy to see it work.&quot;</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">The team included collaborators from the Technical Institute for Superhard and Novel Carbon Materials in Troitsk, Russia, which supplied the diamond filter, and Argonne National Laboratory, which designed the vacuum chamber to house it and the precision motion controls to adjust it. The research was supported by the DOE&rsquo;s Office of Science.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;"><strong style="background-color: transparent;">Menlo Park, Calif. </strong>— With a thin sliver of diamond, scientists at the U.S. Department of Energy’s (DOE) SLAC National Accelerator Laboratory have transformed the <u style="background-color: transparent;"><a href="http://www-public.slac.stanford.edu/lcls/aboutlcls.aspx" style="background-color: transparent; color: rgb(21, 115, 146);" target="_blank">Linac Coherent Light Source (LCLS)</a></u> into an even more precise tool for exploring the nanoworld. The improvements yield laser pulses focused to higher intensity in a much narrower band of X-ray wavelengths, and may enable experiments that have never before been possible.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">In a process called “self-seeding,” the diamond filters the laser beam to a single X-ray color, which is then amplified. Like trading a hatchet for a scalpel, the advance will give researchers more control in studying and manipulating matter at the atomic level and will deliver sharper images of materials, molecules and chemical reactions.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">“The more control you have, the finer the details you can see,” said Jerry Hastings, a SLAC scientist and co-author on the research, published this week in Nature Photonics. “People have been talking about self-seeding for nearly 15 years. The method we incorporated at SLAC was proposed in 2010 by Gianluca Geloni, Vitali Kocharyan and Evgeni Saldin of the European XFEL and DESY research centers in Germany. When our team from SLAC and Argonne National Laboratory built it, we were surprised by how simple, robust and cost-effective the engineering turned out to be.” Hastings added that laboratories around the world are already planning to incorporate this important advance into their own X-ray laser facilities.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">Self-seeding has the potential to produce X-ray pulses with significantly higher intensity than the current LCLS performance. The increased intensity in each pulse could be used to probe deep into complex materials to help answer questions about exotic substances like high-temperature superconductors or intricate electronic states like those found in topological insulators.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">The LCLS generates its laser beam by accelerating bunches of electrons to nearly the speed of light and setting them on a zigzag path with a series of magnets. This forces the electrons to emit X-rays, which are gathered into laser pulses that are a billion times brighter than any available before, and fast enough to scan samples in quadrillionths of a second.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">Without self-seeding these X-ray laser pulses contain <u style="background-color: transparent;"><a href="https://news.slac.stanford.edu/image/lcls-sase-v-seeded-pulse" style="background-color: transparent; color: rgb(21, 115, 146);" target="_blank">a range of wavelengths</a></u> (or colors) in an unpredictable pattern, not all of which experimenters can use. Until now, creating a narrower wavelength band at LCLS meant subtracting the unwanted wavelengths, resulting in a substantial loss of intensity.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">To create a precise X-ray wavelength band and make the LCLS even more “laser-like,” researchers installed a slice of diamond crystal halfway down the 130-meter bank of magnets where the X-rays are generated.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">Producing the narrower wavelength band is just the beginning. “The resulting pulses could pack up to 10 times more intensity when we finish optimizing the system and add more undulators," said Zhirong Huang, a SLAC accelerator physicist and co-author, who has been a major contributor to the project.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">LCLS has already begun accepting proposals to use self-seeding for future experiments.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">The first tests of the LCLS self-seeding system have generated intense excitement among scientists the world over. Representatives from other X-ray laser facilities, including Swiss FEL, SACLA in Japan and the European XFEL, came to help, and also learn how to implement it at their own sites.</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">According to Paul Emma, a co-author who was a key figure in the original commissioning of the LCLS and in implementing self-seeding, “the entire group of observers was smiling from ear to ear." Emma, now working at Lawrence Berkeley National Lab, has a history of making tough jobs look easy, but he would only say, "I was very happy to see it work."</p>
<p style="margin-top: 0px; margin-bottom: 13px; color: rgb(51, 51, 51); font-family: Helvetica, Arial, \'Liberation Sans\', FreeSans, sans-serif; line-height: 19px;">The team included collaborators from the Technical Institute for Superhard and Novel Carbon Materials in Troitsk, Russia, which supplied the diamond filter, and Argonne National Laboratory, which designed the vacuum chamber to house it and the precision motion controls to adjust it. The research was supported by the DOE’s Office of Science.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_news_citation' => array(),
  'field_slac_news_contact' => array(
    'und' => array(
      0 => array(
        'value' => 'Andy Freeberg, Media Relations Manager
SLAC National Accelerator Laboratory
Office: 650-926-4359
afreeberg@slac.stanford.edu',
        'format' => NULL,
        'safe_value' => 'Andy Freeberg, Media Relations Manager
SLAC National Accelerator Laboratory
Office: 650-926-4359
afreeberg@slac.stanford.edu',
      ),
    ),
  ),
  'field_slac_news_media' => array(
    'und' => array(
      0 => array(
        'fid' => 2,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_slac_news_source' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.nature.com/nphoton/journal/vaop/ncurrent/pdf/nphoton.2012.180.pdf',
        'title' => 'Nature Photonics',
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
        'uuid' => '0ce6dd19-dde1-4daa-ae83-1879947970ac',
      ),
      1 => array(
        'tid' => 15,
        'uuid' => '98be32f4-4f1a-4cbc-98be-01c4fc935bf8',
      ),
    ),
  ),
  'field_slac_news_type' => array(
    'und' => array(
      0 => array(
        'value' => 'Press Release',
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
  'date' => '2013-08-13 15:46:57 -0400',
  'author_uuid' => '5d2f65b3-dc8f-481f-b49e-da0ab182b92b',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Disorder can improve the performance of plastic solar cells, Stanford scientists say',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8e26bc1e-be6e-47b2-af31-9780bb060506',
  'type' => 'slac_news',
  'language' => 'und',
  'created' => 1376595915,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'eb850fab-95d9-45dc-9e52-9c4901fbad53',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Scientists have spent decades trying to build flexible plastic solar cells efficient enough to compete with conventional cells made of silicon. To boost performance, research groups have tried creating new plastic materials that enhance the flow of electricity through the solar cell. Several groups expected to achieve good results by redesigning pliant polymers of plastic into orderly, silicon-like crystals, but the flow of electricity did not improve.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Recently, scientists discovered that disorder at the molecular level actually improves the polymers&#39; performance. Now Stanford University researchers have an explanation for this surprising result. Their findings, published in the Aug. 4 online edition of the journal&nbsp;<a href="http://www.nature.com/nmat/index.html" style="outline: 0px; font-style: inherit;"><em>Nature Materials</em></a>, could speed up the development of low-cost, commercially available plastic solar cells.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">&quot;People used to think that if you made the polymers more like silicon they would perform better,&quot; said study co-author&nbsp;<a href="http://salleo.stanford.edu/" style="outline: 0px; font-style: inherit;">Alberto Salleo</a>, an associate professor of materials science and engineering at Stanford. &quot;But we found that polymers don&#39;t naturally form nice, well-ordered crystals. They form small, disordered ones, and that&#39;s perfectly fine.&quot;</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Instead of trying to mimic the rigid structure of silicon, Salleo and his colleagues recommend that scientists learn to cope with the inherently disordered nature of plastics.</p>
<h3 style="margin-top: 20px; outline: 0px; font-weight: inherit; font-size: 14px; font-family: \'normal Arial\', Helvetica, sans-serif; line-height: 17.265625px;"><strong>Speedy electrons</strong></h3>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;"><strong>&nbsp;</strong>In the study, the Stanford team focused on a class of organic materials known as&nbsp;<a href="http://www.nobelprize.org/nobel_prizes/chemistry/laureates/2000/popular.html" style="outline: 0px; font-style: inherit;">conjugated or semiconducting polymers</a>&nbsp;&ndash; chains of carbon atoms that have the properties of plastic, and the ability to absorb sunlight and conduct electricity.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Discovered nearly 40 years ago, semiconducting polymers have long been considered ideal candidates for ultrathin solar cells, light-emitting diodes and transistors. Unlike silicon crystals used in rooftop solar panels, semiconducting polymers are lightweight and can be processed at room temperature with ink-jet printers and other inexpensive techniques. So why aren&#39;t buildings today covered with plastic solar cells?</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">&quot;One reason they haven&#39;t been commercialized is because of poor performance,&quot; Salleo said. &quot;In a solar cell, electrons need to move through the materials fast, but semiconducting polymers have poor electron mobility.&quot;</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">To find out why, Salleo joined Rodrigo Noriega and Jonathan Rivnay, who were Stanford graduate students at the time, in analyzing more than two decades of experimental data. &quot;Over the years, many people designed stiffer polymers with the goal of making highly organized crystals, but the charge mobility remained relatively poor,&quot; Salleo said. &quot;Then several labs created polymers that looked disordered and yet had very high charge mobility. It was a puzzle why these new materials worked better than the more structured crystalline ones.&quot;</p>
<h3 style="margin-top: 20px; outline: 0px; font-weight: inherit; font-size: 14px; font-family: \'normal Arial\', Helvetica, sans-serif; line-height: 17.265625px;"><strong>X-ray analysis</strong></h3>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">To observe the disordered materials at the microscopic level, the Stanford team took samples to the&nbsp;<a href="http://slac.stanford.edu/" style="outline: 0px; font-style: inherit;">SLAC National Accelerator Laboratory</a>&nbsp;for X-ray analysis. The X-rays revealed a molecular structure resembling a fingerprint gone awry. Some polymers looked like amorphous strands of spaghetti, while others formed tiny crystals just a few molecules long.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">&quot;The crystals were so small and disordered you could barely infer their presence from X-rays,&quot; Salleo said. &quot;In fact, scientists had assumed they weren&#39;t there.&quot;</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">By analyzing light emissions from electricity flowing through the samples, the Stanford team determined that numerous small crystals were scattered throughout the material and connected by long polymer chains, like beads in a necklace. The small size of the crystals was a crucial factor in improving overall performance, Salleo said.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">&quot;Being small enables a charged electron to go through one crystal and rapidly move on to the next one,&quot; he said. &quot;The long polymer chain then carries the electron quickly through the material. That explains why they have a much higher charge mobility than larger, unconnected crystals.&quot;</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Another disadvantage of large crystalline polymers is that they tend to be insoluble and therefore cannot be produced by ink-jet printing or other cheap processing technologies, he added.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">&quot;Our conclusion is that you don&#39;t need to make something so rigid that it forms large crystals,&quot; Salleo said. &quot;You need to design something with small, disordered crystals packed close together and connected by polymer chains. Electrons will move through the crystals like on a superhighway, ignoring the rest of the plastic material, which is amorphous and poorly conducting.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">&quot;In some sense, the synthetic chemists were ahead of us, because they made these new materials but didn&#39;t know why they worked so well,&quot; he said. &quot;Now that they know, they can go out and design even better ones.&quot;</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">And Salleo offered a final piece of advice. &quot;Try to design a material that can live with as much disorder as possible,&quot; he said. &quot;Take the disorder for granted. Personally, I really like disorder. Just look at my office.&quot;</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Other authors of the study are postdoctoral scholar Koen Vandewal of Stanford; Felix Koch and Paul Smith of&nbsp;<a href="http://www.polytech.mat.ethz.ch/" style="outline: 0px; font-style: inherit;">ETH Zurich</a>; Natalie Stingelin of&nbsp;<a href="http://www3.imperial.ac.uk/materials" style="outline: 0px; font-style: inherit;">Imperial College London</a>; and Michael Toney of the SLAC&nbsp;<a href="http://ssrl.slac.stanford.edu/" style="outline: 0px; font-style: inherit;">Stanford Synchrotron Radiation Lightsource</a>.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">The study was supported by a Stanford&nbsp;<a href="http://camp.stanford.edu/" style="outline: 0px; font-style: inherit;">Center for Advanced Molecular Photovoltaics</a>&nbsp;award from the King Abdullah University of Science and Technology; and by the&nbsp;<a href="http://erc.europa.eu/" style="outline: 0px; font-style: inherit;">European Research Council</a>.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Scientists have spent decades trying to build flexible plastic solar cells efficient enough to compete with conventional cells made of silicon. To boost performance, research groups have tried creating new plastic materials that enhance the flow of electricity through the solar cell. Several groups expected to achieve good results by redesigning pliant polymers of plastic into orderly, silicon-like crystals, but the flow of electricity did not improve.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Recently, scientists discovered that disorder at the molecular level actually improves the polymers\' performance. Now Stanford University researchers have an explanation for this surprising result. Their findings, published in the Aug. 4 online edition of the journal <a href="http://www.nature.com/nmat/index.html" style="outline: 0px; font-style: inherit;"><em>Nature Materials</em></a>, could speed up the development of low-cost, commercially available plastic solar cells.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">"People used to think that if you made the polymers more like silicon they would perform better," said study co-author <a href="http://salleo.stanford.edu/" style="outline: 0px; font-style: inherit;">Alberto Salleo</a>, an associate professor of materials science and engineering at Stanford. "But we found that polymers don\'t naturally form nice, well-ordered crystals. They form small, disordered ones, and that\'s perfectly fine."</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Instead of trying to mimic the rigid structure of silicon, Salleo and his colleagues recommend that scientists learn to cope with the inherently disordered nature of plastics.</p>
<h3 style="margin-top: 20px; outline: 0px; font-weight: inherit; font-size: 14px; font-family: \'normal Arial\', Helvetica, sans-serif; line-height: 17.265625px;"><strong>Speedy electrons</strong></h3>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;"><strong> </strong>In the study, the Stanford team focused on a class of organic materials known as <a href="http://www.nobelprize.org/nobel_prizes/chemistry/laureates/2000/popular.html" style="outline: 0px; font-style: inherit;">conjugated or semiconducting polymers</a> – chains of carbon atoms that have the properties of plastic, and the ability to absorb sunlight and conduct electricity.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Discovered nearly 40 years ago, semiconducting polymers have long been considered ideal candidates for ultrathin solar cells, light-emitting diodes and transistors. Unlike silicon crystals used in rooftop solar panels, semiconducting polymers are lightweight and can be processed at room temperature with ink-jet printers and other inexpensive techniques. So why aren\'t buildings today covered with plastic solar cells?</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">"One reason they haven\'t been commercialized is because of poor performance," Salleo said. "In a solar cell, electrons need to move through the materials fast, but semiconducting polymers have poor electron mobility."</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">To find out why, Salleo joined Rodrigo Noriega and Jonathan Rivnay, who were Stanford graduate students at the time, in analyzing more than two decades of experimental data. "Over the years, many people designed stiffer polymers with the goal of making highly organized crystals, but the charge mobility remained relatively poor," Salleo said. "Then several labs created polymers that looked disordered and yet had very high charge mobility. It was a puzzle why these new materials worked better than the more structured crystalline ones."</p>
<h3 style="margin-top: 20px; outline: 0px; font-weight: inherit; font-size: 14px; font-family: \'normal Arial\', Helvetica, sans-serif; line-height: 17.265625px;"><strong>X-ray analysis</strong></h3>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">To observe the disordered materials at the microscopic level, the Stanford team took samples to the <a href="http://slac.stanford.edu/" style="outline: 0px; font-style: inherit;">SLAC National Accelerator Laboratory</a> for X-ray analysis. The X-rays revealed a molecular structure resembling a fingerprint gone awry. Some polymers looked like amorphous strands of spaghetti, while others formed tiny crystals just a few molecules long.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">"The crystals were so small and disordered you could barely infer their presence from X-rays," Salleo said. "In fact, scientists had assumed they weren\'t there."</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">By analyzing light emissions from electricity flowing through the samples, the Stanford team determined that numerous small crystals were scattered throughout the material and connected by long polymer chains, like beads in a necklace. The small size of the crystals was a crucial factor in improving overall performance, Salleo said.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">"Being small enables a charged electron to go through one crystal and rapidly move on to the next one," he said. "The long polymer chain then carries the electron quickly through the material. That explains why they have a much higher charge mobility than larger, unconnected crystals."</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Another disadvantage of large crystalline polymers is that they tend to be insoluble and therefore cannot be produced by ink-jet printing or other cheap processing technologies, he added.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">"Our conclusion is that you don\'t need to make something so rigid that it forms large crystals," Salleo said. "You need to design something with small, disordered crystals packed close together and connected by polymer chains. Electrons will move through the crystals like on a superhighway, ignoring the rest of the plastic material, which is amorphous and poorly conducting.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">"In some sense, the synthetic chemists were ahead of us, because they made these new materials but didn\'t know why they worked so well," he said. "Now that they know, they can go out and design even better ones."</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">And Salleo offered a final piece of advice. "Try to design a material that can live with as much disorder as possible," he said. "Take the disorder for granted. Personally, I really like disorder. Just look at my office."</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">Other authors of the study are postdoctoral scholar Koen Vandewal of Stanford; Felix Koch and Paul Smith of <a href="http://www.polytech.mat.ethz.ch/" style="outline: 0px; font-style: inherit;">ETH Zurich</a>; Natalie Stingelin of <a href="http://www3.imperial.ac.uk/materials" style="outline: 0px; font-style: inherit;">Imperial College London</a>; and Michael Toney of the SLAC <a href="http://ssrl.slac.stanford.edu/" style="outline: 0px; font-style: inherit;">Stanford Synchrotron Radiation Lightsource</a>.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 14px; line-height: 1.5em; font-family: \'normal Arial\', Helvetica, sans-serif;">The study was supported by a Stanford <a href="http://camp.stanford.edu/" style="outline: 0px; font-style: inherit;">Center for Advanced Molecular Photovoltaics</a> award from the King Abdullah University of Science and Technology; and by the <a href="http://erc.europa.eu/" style="outline: 0px; font-style: inherit;">European Research Council</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slac_news_citation' => array(),
  'field_slac_news_contact' => array(),
  'field_slac_news_media' => array(
    'und' => array(
      0 => array(
        'fid' => 1,
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_slac_news_source' => array(
    'und' => array(
      0 => array(
        'url' => 'http://news.stanford.edu/news/2013/august/disorder-solar-cells-080413.html',
        'title' => 'Stanford Report',
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_news_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 12,
        'uuid' => 'dad41187-6745-43bc-b95a-7851a7b2c825',
      ),
      1 => array(
        'tid' => 13,
        'uuid' => 'aaa4a1c8-fb65-4eeb-9bfe-909031f5e18b',
      ),
    ),
  ),
  'field_slac_news_type' => array(
    'und' => array(
      0 => array(
        'value' => 'News Article',
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
  'date' => '2013-08-15 15:45:15 -0400',
  'author_uuid' => '5d2f65b3-dc8f-481f-b49e-da0ab182b92b',
);
  return $nodes;
}
