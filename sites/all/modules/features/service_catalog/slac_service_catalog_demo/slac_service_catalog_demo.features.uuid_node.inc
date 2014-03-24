<?php
/**
 * @file
 * slac_service_catalog_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_service_catalog_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Enterprise application group',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b3dfbf5e-19a5-41bc-94f8-d2b125eb875e',
  'type' => 'slac_sc_catalog_item',
  'language' => 'und',
  'created' => 1377535764,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0809a5ec-f056-410f-ab72-bda63b0bed4c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="field field-name-field-service-overview field-type-text-long field-label-hidden">
	<div class="field-items">
		<div class="field-item even">
			<p>Our goal is to provide superior client support while helping our partners maximize their IT investment. We work closely with Computer Resource Consulting (CRC) Desktop Support to provide comprehensive, responsive technology assistance for your entire organization.</p>
		</div>
	</div>
</div>

<div class="field field-name-body field-type-text-with-summary field-label-hidden">
	<div class="field-items">
		<div class="field-item even">
			<h2>Features and benefits</h2>

			<ul>
				<li>Campus infrastructure integration</li>
				<li>Regular and scheduled maintenance</li>
				<li>Prioritized HelpSU problem resolution</li>
				<li>Security auditing and system hardening</li>
				<li>User and workgroup management</li>
			</ul>

			<h2>Getting started</h2>

			<p>To learn more about contract server support, please contact&nbsp;<a href="https://stanfordwho.stanford.edu/SWApp/auth/lookup?search=Noah%20Abrahamson">Noah Abrahamson</a>&nbsp;or&nbsp;<a href="http://helpsu.stanford.edu/">submit a HelpSU request</a>.</p>

			<h2>Learn more</h2>

			<ul>
				<li><a href="https://itservices.stanford.edu/service/contract-support/server">Server Group (CRC)</a></li>
				<li><a href="https://itservices.stanford.edu/service/server-support/businessdocuments">Business Documents for Contract Support — Server Support</a></li>
			</ul>
		</div>
	</div>
</div>

<p>&nbsp;</p>
',
        'summary' => 'The Server Support service provides complete server management, including installation and stabilization, monitoring, security, user management, and integration with the campus infrastructure, for systems running modern Mac OS X Server and Windows Server operating systems.',
        'format' => 'full_html',
        'safe_value' => ' <div class="field field-name-field-service-overview field-type-text-long field-label-hidden">
<div class="field-items">
<div class="field-item even">
<p>Our goal is to provide superior client support while helping our partners maximize their IT investment. We work closely with Computer Resource Consulting (CRC) Desktop Support to provide comprehensive, responsive technology assistance for your entire organization.</p>
</div>
</div>
</div>
<div class="field field-name-body field-type-text-with-summary field-label-hidden">
<div class="field-items">
<div class="field-item even">
<h2>Features and benefits</h2>
<ul><li>Campus infrastructure integration</li>
<li>Regular and scheduled maintenance</li>
<li>Prioritized HelpSU problem resolution</li>
<li>Security auditing and system hardening</li>
<li>User and workgroup management</li>
</ul><h2>Getting started</h2>
<p>To learn more about contract server support, please contact <a href="https://stanfordwho.stanford.edu/SWApp/auth/lookup?search=Noah%20Abrahamson">Noah Abrahamson</a> or <a href="http://helpsu.stanford.edu/">submit a HelpSU request</a>.</p>
<h2>Learn more</h2>
<ul><li><a href="https://itservices.stanford.edu/service/contract-support/server">Server Group (CRC)</a></li>
<li><a href="https://itservices.stanford.edu/service/server-support/businessdocuments">Business Documents for Contract Support — Server Support</a></li>
</ul></div>
</div>
</div>
<p> </p>
 ',
        'safe_summary' => ' <p>The Server Support service provides complete server management, including installation and stabilization, monitoring, security, user management, and integration with the campus infrastructure, for systems running modern Mac OS X Server and Windows Server operating systems.</p>
 ',
      ),
    ),
  ),
  'field_slac_sc_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
        'uuid' => 'cf2ef1a1-ee93-434b-a103-a0a123dcc6aa',
      ),
    ),
  ),
  'field_slac_sc_eligibility' => array(),
  'field_slac_sc_rate' => array(),
  'field_slac_sc_request_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.slac.stanford.edu',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_sc_requirements' => array(
    'und' => array(
      0 => array(
        'value' => 'Demonstrate need for support',
        'format' => NULL,
        'safe_value' => 'Demonstrate need for support',
      ),
      1 => array(
        'value' => 'L2 Access or above',
        'format' => NULL,
        'safe_value' => 'L2 Access or above',
      ),
    ),
  ),
  'field_slac_sc_service_overview' => array(
    'und' => array(
      0 => array(
        'value' => 'The Server Support service provides complete server management, including installation and stabilization, monitoring, security, user management, and integration with the campus infrastructure, for systems running modern Mac OS X Server and Windows Server operating systems.',
        'format' => NULL,
        'safe_value' => 'The Server Support service provides complete server management, including installation and stabilization, monitoring, security, user management, and integration with the campus infrastructure, for systems running modern Mac OS X Server and Windows Server operating systems.',
      ),
    ),
  ),
  'field_slac_sc_support' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Support is provided by SLAC IT services.</p>
',
        'format' => 'full_html',
        'safe_value' => ' <p>Support is provided by SLAC IT services.</p>
 ',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'path' => array(
    'pid' => 26,
    'source' => 'node/1',
    'alias' => 'services/service/enterprise-application-group',
    'language' => 'und',
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-26 19:49:24 +0300',
  'author_uuid' => '8387e0ab-2272-428b-b6f3-790625549a25',
);
  $nodes[] = array(
  'title' => 'Contract Support',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '89ec451c-8822-49bf-b4c9-560f8cee2244',
  'type' => 'slac_sc_catalog_item',
  'language' => 'und',
  'created' => 1377536170,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3e9cb6c4-dd27-4d28-966e-2bbb5c462b9d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="field field-name-field-service-overview field-type-text-long field-label-hidden">
	<div class="field-items">
		<div class="field-item even">
			<p>OnCall Services is a great way for departments to supplement existing support staff during vacations and other leaves, or to handle special projects. For small groups that don’t need full-time support, we can offer scheduled or pre-arranged occasional support in your office. For faculty, staff, and students, OnCall Services offers a cost-effective way to get expert computer assistance from highly knowledgeable technical staff who understand Stanford’s unique computing environment.</p>
		</div>
	</div>
</div>

<div class="field field-name-body field-type-text-with-summary field-label-hidden">
	<div class="field-items">
		<div class="field-item even">
			<h2>Features</h2>

			<p>We offer a wide range of services, including:</p>

			<ul>
				<li>Diagnose and troubleshoot almost any computer problem</li>
				<li>Proactive system security checkups and updates</li>
				<li>Setup and installation of new machines</li>
				<li>Install and upgrade Mac and Windows operating systems</li>
				<li>Install and troubleshoot Stanford-supported applications or licensed third-party applications (you supply the license)</li>
				<li>Add peripherals such as printers or scanners</li>
				<li>Help protect and backup important data</li>
				<li>Remove prying spyware and contain virus outbreaks</li>
				<li>PDA setup and configuration</li>
				<li>Project work, such as computer upgrades or departmental moves</li>
				<li>&nbsp;</li>
			</ul>
		</div>
	</div>
</div>

<p>&nbsp;</p>
',
        'summary' => 'OnCall Services is a great way for departments to supplement existing support staff during vacations and other leaves, or to handle special projects. ',
        'format' => 'full_html',
        'safe_value' => ' <div class="field field-name-field-service-overview field-type-text-long field-label-hidden">
<div class="field-items">
<div class="field-item even">
<p>OnCall Services is a great way for departments to supplement existing support staff during vacations and other leaves, or to handle special projects. For small groups that don’t need full-time support, we can offer scheduled or pre-arranged occasional support in your office. For faculty, staff, and students, OnCall Services offers a cost-effective way to get expert computer assistance from highly knowledgeable technical staff who understand Stanford’s unique computing environment.</p>
</div>
</div>
</div>
<div class="field field-name-body field-type-text-with-summary field-label-hidden">
<div class="field-items">
<div class="field-item even">
<h2>Features</h2>
<p>We offer a wide range of services, including:</p>
<ul><li>Diagnose and troubleshoot almost any computer problem</li>
<li>Proactive system security checkups and updates</li>
<li>Setup and installation of new machines</li>
<li>Install and upgrade Mac and Windows operating systems</li>
<li>Install and troubleshoot Stanford-supported applications or licensed third-party applications (you supply the license)</li>
<li>Add peripherals such as printers or scanners</li>
<li>Help protect and backup important data</li>
<li>Remove prying spyware and contain virus outbreaks</li>
<li>PDA setup and configuration</li>
<li>Project work, such as computer upgrades or departmental moves</li>
<li> </li>
</ul></div>
</div>
</div>
<p> </p>
 ',
        'safe_summary' => ' <p>OnCall Services is a great way for departments to supplement existing support staff during vacations and other leaves, or to handle special projects. </p>
 ',
      ),
    ),
  ),
  'field_slac_sc_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
        'uuid' => 'cf2ef1a1-ee93-434b-a103-a0a123dcc6aa',
      ),
    ),
  ),
  'field_slac_sc_eligibility' => array(
    'und' => array(
      0 => array(
        'tid' => 21,
        'uuid' => 'db10ac33-21ec-4d40-bee7-1c34780f1b40',
      ),
      1 => array(
        'tid' => 24,
        'uuid' => 'f3037fca-b840-4394-9c4e-03ea14b6c4bf',
      ),
      2 => array(
        'tid' => 1,
        'uuid' => '00e2fef3-0966-49ed-8f3d-e3f8d1cd46c0',
      ),
    ),
  ),
  'field_slac_sc_rate' => array(
    'und' => array(
      0 => array(
        'value' => 'Please see table',
        'format' => NULL,
        'safe_value' => 'Please see table',
      ),
    ),
  ),
  'field_slac_sc_request_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.slac.stanford.edu',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_sc_requirements' => array(),
  'field_slac_sc_service_overview' => array(
    'und' => array(
      0 => array(
        'value' => 'OnCall Services is a great way for departments to supplement existing support staff during vacations and other leaves, or to handle special projects. For small groups that don’t need full-time support, we can offer scheduled or pre-arranged occasional support in your office. For faculty, staff, and students, OnCall Services offers a cost-effective way to get expert computer assistance from highly knowledgeable technical staff who understand Stanford’s unique computing environment.',
        'format' => NULL,
        'safe_value' => 'OnCall Services is a great way for departments to supplement existing support staff during vacations and other leaves, or to handle special projects. For small groups that don’t need full-time support, we can offer scheduled or pre-arranged occasional support in your office. For faculty, staff, and students, OnCall Services offers a cost-effective way to get expert computer assistance from highly knowledgeable technical staff who understand Stanford’s unique computing environment.',
      ),
    ),
  ),
  'field_slac_sc_support' => array(
    'und' => array(
      0 => array(
        'value' => '<p>If you have questions about how OnCall Services can assist you, please submit a HelpSU request or call or 5-HELP (725-4357).</p>
',
        'format' => 'full_html',
        'safe_value' => ' <p>If you have questions about how OnCall Services can assist you, please submit a HelpSU request or call or 5-HELP (725-4357).</p>
 ',
      ),
      1 => array(
        'value' => '<p>Services are available either in your campus office or at our offices on campus. Carry-In services are performed by appointment and need to be arranged in advance.</p>
',
        'format' => 'full_html',
        'safe_value' => ' <p>Services are available either in your campus office or at our offices on campus. Carry-In services are performed by appointment and need to be arranged in advance.</p>
 ',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'path' => array(
    'pid' => 27,
    'source' => 'node/2',
    'alias' => 'services/service/contract-support',
    'language' => 'und',
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-26 19:56:10 +0300',
  'author_uuid' => '8387e0ab-2272-428b-b6f3-790625549a25',
);
  $nodes[] = array(
  'title' => 'MySQL & Oracle',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bc3952cd-bf55-4273-9af4-9668539aa2d8',
  'type' => 'slac_sc_catalog_item',
  'language' => 'und',
  'created' => 1377536036,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6a46ab90-371c-490f-9b48-7679886d1764',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="field field-name-field-service-overview field-type-text-long field-label-hidden">
	<div class="field-items">
		<div class="field-item even">
			<p>A variety of complementary Database Administration-related services such as Oracle Real Application Cluster (RAC) support are also available via Ntirety. The Database Administration service provides reliable, secure, and cost-effective database administration, including maintenance, monitoring, and backup.</p>

			<p>24x7 support is provided for production or critical development databases. In addition to standard, day-to-day administrative and maintenance activities, production or critical development databases are continuously monitored to detect potential problems, proactively addressing problems before they can affect service delivery.</p>

			<p>The Database Administration service is available by subscription and is charged monthly to your department’s IT Services bill.</p>
		</div>
	</div>
</div>

<div class="field field-name-body field-type-text-with-summary field-label-hidden">
	<div class="field-items">
		<div class="field-item even">
			<h2>Features</h2>

			<ul>
				<li>monitors and tunes production database environments</li>
				<li>rapidly responds to critical issues</li>
				<li>provides backup and recovery, prevents database outage</li>
				<li>works directly with clients to solve database issues</li>
			</ul>

			<h2>Getting started</h2>

			<p>To order the Database Administration service use&nbsp;<a href="http://orderit.stanford.edu/">OrderIT</a>&nbsp;or submit a&nbsp;<a href="http://helpsu.stanford.edu/?pcat=dba">HelpSU request</a>&nbsp;under the Request Category: Billable Services and the Request Type: Database Administration Services.</p>

			<h2>Learn more</h2>

			<ul>
				<li><a href="https://itservices.stanford.edu/service/databaseadministration/businessdocuments">Business Documents for Database Administration</a></li>
			</ul>
		</div>
	</div>
</div>

<p>&nbsp;</p>
',
        'summary' => 'The Database Administration service provides reliable, secure, and cost-effective database administration, including maintenance, monitoring, and backup.',
        'format' => 'full_html',
        'safe_value' => ' <div class="field field-name-field-service-overview field-type-text-long field-label-hidden">
<div class="field-items">
<div class="field-item even">
<p>A variety of complementary Database Administration-related services such as Oracle Real Application Cluster (RAC) support are also available via Ntirety. The Database Administration service provides reliable, secure, and cost-effective database administration, including maintenance, monitoring, and backup.</p>
<p>24x7 support is provided for production or critical development databases. In addition to standard, day-to-day administrative and maintenance activities, production or critical development databases are continuously monitored to detect potential problems, proactively addressing problems before they can affect service delivery.</p>
<p>The Database Administration service is available by subscription and is charged monthly to your department’s IT Services bill.</p>
</div>
</div>
</div>
<div class="field field-name-body field-type-text-with-summary field-label-hidden">
<div class="field-items">
<div class="field-item even">
<h2>Features</h2>
<ul><li>monitors and tunes production database environments</li>
<li>rapidly responds to critical issues</li>
<li>provides backup and recovery, prevents database outage</li>
<li>works directly with clients to solve database issues</li>
</ul><h2>Getting started</h2>
<p>To order the Database Administration service use <a href="http://orderit.stanford.edu/">OrderIT</a> or submit a <a href="http://helpsu.stanford.edu/?pcat=dba">HelpSU request</a> under the Request Category: Billable Services and the Request Type: Database Administration Services.</p>
<h2>Learn more</h2>
<ul><li><a href="https://itservices.stanford.edu/service/databaseadministration/businessdocuments">Business Documents for Database Administration</a></li>
</ul></div>
</div>
</div>
<p> </p>
 ',
        'safe_summary' => ' <p>The Database Administration service provides reliable, secure, and cost-effective database administration, including maintenance, monitoring, and backup.</p>
 ',
      ),
    ),
  ),
  'field_slac_sc_category' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
        'uuid' => 'ac074ab7-4b52-4911-a6b0-3d92f247aa2a',
      ),
    ),
  ),
  'field_slac_sc_eligibility' => array(
    'und' => array(
      0 => array(
        'tid' => 24,
        'uuid' => 'f3037fca-b840-4394-9c4e-03ea14b6c4bf',
      ),
      1 => array(
        'tid' => 11,
        'uuid' => '9d88d219-f7e7-4354-b6ce-accadf586640',
      ),
    ),
  ),
  'field_slac_sc_rate' => array(
    'und' => array(
      0 => array(
        'value' => '$50 per database',
        'format' => NULL,
        'safe_value' => '$50 per database',
      ),
    ),
  ),
  'field_slac_sc_request_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.slac.stanford.edu',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_sc_requirements' => array(),
  'field_slac_sc_service_overview' => array(
    'und' => array(
      0 => array(
        'value' => 'IT Services has partnered with Ntirety Corporation to support Oracle and Microsoft SQL databases for the Stanford community. This service is available to faculty and staff in academic and administrative departments that require database administration for applications, or standalone databases operating on Stanford infrastructure.',
        'format' => NULL,
        'safe_value' => 'IT Services has partnered with Ntirety Corporation to support Oracle and Microsoft SQL databases for the Stanford community. This service is available to faculty and staff in academic and administrative departments that require database administration for applications, or standalone databases operating on Stanford infrastructure.',
      ),
    ),
  ),
  'field_slac_sc_support' => array(
    'und' => array(
      0 => array(
        'value' => '24x7 support for production or critical development databases.
',
        'format' => 'plain_text',
        'safe_value' => '<p>24x7 support for production or critical development databases.</p>
',
      ),
      1 => array(
        'value' => 'Notification to an administrator within 15 minutes of an alert or emergency declaration by the customer. Response back to customer within 30 minutes of receipt of the alert by the administrator.',
        'format' => 'plain_text',
        'safe_value' => '<p>Notification to an administrator within 15 minutes of an alert or emergency declaration by the customer. Response back to customer within 30 minutes of receipt of the alert by the administrator.</p>
',
      ),
      2 => array(
        'value' => 'Standard development and test database support is provided Monday through Friday, 8 a.m. to 5 p.m.',
        'format' => 'plain_text',
        'safe_value' => '<p>Standard development and test database support is provided Monday through Friday, 8 a.m. to 5 p.m.</p>
',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'path' => array(
    'pid' => 28,
    'source' => 'node/3',
    'alias' => 'services/service/mysql-oracle',
    'language' => 'und',
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-26 19:53:56 +0300',
  'author_uuid' => '8387e0ab-2272-428b-b6f3-790625549a25',
);
  $nodes[] = array(
  'title' => 'Conference computing for visitors',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f9a95a47-73ba-4724-9e64-6966f2706a6e',
  'type' => 'slac_sc_catalog_item',
  'language' => 'und',
  'created' => 1377535854,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7cd09391-5cdc-42a2-80d2-ece053ab13e8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Computing Resources for Short Term Visitors</h2>

<p>Visitors of SLAC who are attending conferences, meetings, or short collaborations should review the following computing resources that are available for public use. Visitors staying longer than a few days or those requiring access to SLAC-only resources should register as an Active User with the&nbsp;<a href="http://www.slac.stanford.edu/grp/rd/sluo/SLUO.html#SLUO">SLAC Users Organization</a>&nbsp;to become eligible to open a SLAC computer account.<br>
	&nbsp;</p>

<table border="0" cellpadding="5" cellspacing="0" width="100%">
	<tbody>
		<tr>
			<td width="10"><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif"></td>
			<td width="200"><a href="http://www2.slac.stanford.edu/comp/net/wireless/visitor_net.htm">SLAC Visitor Network</a></td>
			<td>:: Information about the public computing network at SLAC</td>
		</tr>
		<tr>
			<td><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif"></td>
			<td><a href="http://www2.slac.stanford.edu/comp/net/wireless/">Wireless Networking</a></td>
			<td>:: Wireless ( 802.11b ) network access at SLAC</td>
		</tr>
		<tr>
			<td><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif"></td>
			<td><a href="http://www2.slac.stanford.edu/computing/helpdesk/visitor/resources.asp">Computing Resources</a></td>
			<td>:: Computing resources for public use at SLAC</td>
		</tr>
	</tbody>
</table>

<p>&nbsp;</p>

<h2>Conference Computing Information</h2>

<p>Organizers of conferences held at SLAC should review the following information regarding the setup of conferences and talks.</p>

<table border="0" cellpadding="5" cellspacing="0" width="100%">
	<tbody>
		<tr>
			<td width="10"><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif"></td>
			<td width="200"><a href="http://www.slac.stanford.edu/grp/pao/slaconly.conference.html">Overview</a></td>
			<td>:: General conference computing information</td>
		</tr>
		<tr>
			<td><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif"></td>
			<td><a href="http://www2.slac.stanford.edu/computing/helpdesk/visitor/confchecklist.asp">Checklist</a></td>
			<td>:: Issues and caveats</td>
		</tr>
		<tr>
			<td><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif"></td>
			<td><a href="http://www2.slac.stanford.edu/computing/helpdesk/visitor/computingsetup.asp">Conference Room Setups</a></td>
			<td>:: Conference room layouts and equipment types</td>
		</tr>
	</tbody>
</table>

<p>&nbsp;</p>
',
        'summary' => 'Visitors of SLAC who are attending conferences, meetings, or short collaborations should review the following computing resources that are available for public use. ',
        'format' => 'full_html',
        'safe_value' => ' <h2>Computing Resources for Short Term Visitors</h2>
<p>Visitors of SLAC who are attending conferences, meetings, or short collaborations should review the following computing resources that are available for public use. Visitors staying longer than a few days or those requiring access to SLAC-only resources should register as an Active User with the <a href="http://www.slac.stanford.edu/grp/rd/sluo/SLUO.html#SLUO">SLAC Users Organization</a> to become eligible to open a SLAC computer account.<br /><br />
	 </p>
<table border="0" cellpadding="5" cellspacing="0" width="100%"><tbody><tr><td width="10"><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif" /></td>
<td width="200"><a href="http://www2.slac.stanford.edu/comp/net/wireless/visitor_net.htm">SLAC Visitor Network</a></td>
<td>:: Information about the public computing network at SLAC</td>
</tr><tr><td><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif" /></td>
<td><a href="http://www2.slac.stanford.edu/comp/net/wireless/">Wireless Networking</a></td>
<td>:: Wireless ( 802.11b ) network access at SLAC</td>
</tr><tr><td><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif" /></td>
<td><a href="http://www2.slac.stanford.edu/computing/helpdesk/visitor/resources.asp">Computing Resources</a></td>
<td>:: Computing resources for public use at SLAC</td>
</tr></tbody></table><p> </p>
<h2>Conference Computing Information</h2>
<p>Organizers of conferences held at SLAC should review the following information regarding the setup of conferences and talks.</p>
<table border="0" cellpadding="5" cellspacing="0" width="100%"><tbody><tr><td width="10"><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif" /></td>
<td width="200"><a href="http://www.slac.stanford.edu/grp/pao/slaconly.conference.html">Overview</a></td>
<td>:: General conference computing information</td>
</tr><tr><td><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif" /></td>
<td><a href="http://www2.slac.stanford.edu/computing/helpdesk/visitor/confchecklist.asp">Checklist</a></td>
<td>:: Issues and caveats</td>
</tr><tr><td><img src="http://www2.slac.stanford.edu/computing/helpdesk/images/arrow2.gif" /></td>
<td><a href="http://www2.slac.stanford.edu/computing/helpdesk/visitor/computingsetup.asp">Conference Room Setups</a></td>
<td>:: Conference room layouts and equipment types</td>
</tr></tbody></table><p> </p>
 ',
        'safe_summary' => ' <p>Visitors of SLAC who are attending conferences, meetings, or short collaborations should review the following computing resources that are available for public use. </p>
 ',
      ),
    ),
  ),
  'field_slac_sc_category' => array(
    'und' => array(
      0 => array(
        'tid' => 10,
        'uuid' => '83b5b76c-6bd8-4a0c-a580-6aa8b22d9f63',
      ),
    ),
  ),
  'field_slac_sc_eligibility' => array(
    'und' => array(
      0 => array(
        'tid' => 21,
        'uuid' => 'db10ac33-21ec-4d40-bee7-1c34780f1b40',
      ),
      1 => array(
        'tid' => 24,
        'uuid' => 'f3037fca-b840-4394-9c4e-03ea14b6c4bf',
      ),
      2 => array(
        'tid' => 11,
        'uuid' => '9d88d219-f7e7-4354-b6ce-accadf586640',
      ),
      3 => array(
        'tid' => 1,
        'uuid' => '00e2fef3-0966-49ed-8f3d-e3f8d1cd46c0',
      ),
    ),
  ),
  'field_slac_sc_rate' => array(),
  'field_slac_sc_request_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.slac.stanford.edu',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_sc_requirements' => array(
    'und' => array(
      0 => array(
        'value' => 'This service is only offered to visitor to the LAB',
        'format' => NULL,
        'safe_value' => 'This service is only offered to visitor to the LAB',
      ),
    ),
  ),
  'field_slac_sc_service_overview' => array(
    'und' => array(
      0 => array(
        'value' => 'Visitors of SLAC who are attending conferences, meetings, or short collaborations should review the following computing resources that are available for public use. Visitors staying longer than a few days or those requiring access to SLAC-only resources should register as an Active User with the SLAC Users Organization to become eligible to open a SLAC computer account.',
        'format' => NULL,
        'safe_value' => 'Visitors of SLAC who are attending conferences, meetings, or short collaborations should review the following computing resources that are available for public use. Visitors staying longer than a few days or those requiring access to SLAC-only resources should register as an Active User with the SLAC Users Organization to become eligible to open a SLAC computer account.',
      ),
    ),
  ),
  'field_slac_sc_support' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Support is provided by SLAC IT Services</p>
',
        'format' => 'full_html',
        'safe_value' => ' <p>Support is provided by SLAC IT Services</p>
 ',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'path' => array(
    'pid' => 29,
    'source' => 'node/4',
    'alias' => 'services/service/conference-computing-for-visitors',
    'language' => 'und',
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-26 19:50:54 +0300',
  'author_uuid' => '8387e0ab-2272-428b-b6f3-790625549a25',
);
  $nodes[] = array(
  'title' => 'Computer accounts',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'edd67815-3269-48ea-84a0-981ab871bf66',
  'type' => 'slac_sc_catalog_item',
  'language' => 'und',
  'created' => 1377535432,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '80cf77e8-afe3-4217-874e-72d79d5d5ad7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<dl>
	<dt>Platforms</dt>
	<dd><a href="http://www2.slac.stanford.edu/comp/slacwide/account/account.html">Windows</a>&nbsp;:: Microsoft Windows Accounts.
		<ul>
			<li>There are SLAC Windows domain accounts for site-wide centrally maintained Windows applications.</li>
			<li>There are two types of COLLAB Windows domain accounts: Individual and Group. Currently only SharePoint supports COLLAB domain accounts.&nbsp;Request an account via email to&nbsp;<a href="mailto:windows-admin@slac.stanford.edu">windows-admin@slac.stanford.edu</a>
				<ul>
					<li>COLLAB Group accounts are limited to read-only access.</li>
					<li>COLLAB Individual accounts are allowed read/write access.</li>
				</ul>
			</li>
		</ul>
	</dd>
	<dd><a href="http://www2.slac.stanford.edu/comp/slacwide/account/account.html">Unix</a>&nbsp;:: Central Unix</dd>
	<dd><a href="http://www2.slac.stanford.edu/computing/windows/services/citrix/">WTS</a>&nbsp;:: Windows Terminal Server (Citrix)</dd>
	<dt>Connectivity (Remote Access)</dt>
	<dd><a href="https://www-internal.slac.stanford.edu/comp/winnt/SLACONLY/pptp/default.htm">VPN</a>&nbsp;:: Virtual Private Networking</dd>
	<dd><a href="http://www2.slac.stanford.edu/computing/windows/services/citrix/xa6/account/default.aspx">Citrix</a>&nbsp;:: Citrix Service</dd>
	<dt>Applications</dt>
	<dd>
		<p>Exchange :: Send mail to&nbsp;<a href="mailto:mail-admin@slac.stanford.edu">mail-admin@slac.stanford.edu</a></p>
	</dd>
	<dd>
		<p>Oracle :: Send mail to&nbsp;<a href="mailto:db-admin@slac.stanford.edu">db-admin@slac.stanford.edu</a></p>

		<dl>
			<dd>
				<p>Oracle password change&nbsp;<a href="https://oraweb.slac.stanford.edu/pls/slac/change_my_password">https://oraweb.slac.stanford.edu/pls/slac/change_my_password</a></p>
			</dd>
		</dl>
	</dd>
	<dd>
		<p>PeopleSoft :: Send mail to&nbsp;<a href="mailto:ps-admin@slac.stanford.edu">ps-admin@slac.stanford.edu</a></p>
	</dd>
	<dt>Stanford University Computer Accounts</dt>
	<dd><a href="http://www.stanford.edu/dept/as/mais/applications/sunetid/index.html">Getting a Stanford University ID (SUNet ID)</a></dd>
	<dt>Administrative Tasks</dt>
	<dd><a href="http://www-group.slac.stanford.edu/bsd/sid_entry.htm">Getting a SLAC ID number</a>&nbsp;:: Newcomers to SLAC who need to receive an identification badge, a dosimeter, a computer account, a phone, or any other services, must be entered into the SLAC Institutional Database (SID).</dd>
	<dd><a href="https://www-internal.slac.stanford.edu/database/pages/czarlist.asp">Finding your Computer Czar</a>&nbsp;:: List of Computer Czar (People who can authorize comptuer accounts, changes, and deletions.)</dd>
	<dd><a href="https://www-internal.slac.stanford.edu/comp/admin/pages/account-search.asp">Search for accounts</a>&nbsp;:: Find computing accounts for specific users</dd>
	<dd><a href="https://www-internal.slac.stanford.edu/instdatabase/procedures/computer-accounts/account-delete.htm">Closing Accounts</a></dd>
	<dd><a href="https://www-internal.slac.stanford.edu/instdatabase/procedures/computer-accounts/account-delete.htm">Terminating SLAC Employees</a>&nbsp;:: Procedures for computer accounts</dd>
</dl>
',
        'summary' => 'There are two types of COLLAB Windows domain accounts: Individual and Group. Currently only SharePoint supports COLLAB domain accounts. Request an account via email to windows-admin@slac.stanford.edu',
        'format' => 'full_html',
        'safe_value' => ' <dl><dt>Platforms</dt>
<dd><a href="http://www2.slac.stanford.edu/comp/slacwide/account/account.html">Windows</a> :: Microsoft Windows Accounts.
<ul><li>There are SLAC Windows domain accounts for site-wide centrally maintained Windows applications.</li>
<li>There are two types of COLLAB Windows domain accounts: Individual and Group. Currently only SharePoint supports COLLAB domain accounts. Request an account via email to <a href="mailto:windows-admin@slac.stanford.edu">windows-admin@slac.stanford.edu</a>
<ul><li>COLLAB Group accounts are limited to read-only access.</li>
<li>COLLAB Individual accounts are allowed read/write access.</li>
</ul></li>
</ul></dd>
<dd><a href="http://www2.slac.stanford.edu/comp/slacwide/account/account.html">Unix</a> :: Central Unix</dd>
<dd><a href="http://www2.slac.stanford.edu/computing/windows/services/citrix/">WTS</a> :: Windows Terminal Server (Citrix)</dd>
<dt>Connectivity (Remote Access)</dt>
<dd><a href="https://www-internal.slac.stanford.edu/comp/winnt/SLACONLY/pptp/default.htm">VPN</a> :: Virtual Private Networking</dd>
<dd><a href="http://www2.slac.stanford.edu/computing/windows/services/citrix/xa6/account/default.aspx">Citrix</a> :: Citrix Service</dd>
<dt>Applications</dt>
<dd>
<p>Exchange :: Send mail to <a href="mailto:mail-admin@slac.stanford.edu">mail-admin@slac.stanford.edu</a></p>
</dd>
<dd>
<p>Oracle :: Send mail to <a href="mailto:db-admin@slac.stanford.edu">db-admin@slac.stanford.edu</a></p>
<dl><dd>
<p>Oracle password change <a href="https://oraweb.slac.stanford.edu/pls/slac/change_my_password">https://oraweb.slac.stanford.edu/pls/slac/change_my_password</a></p>
</dd>
</dl></dd>
<dd>
<p>PeopleSoft :: Send mail to <a href="mailto:ps-admin@slac.stanford.edu">ps-admin@slac.stanford.edu</a></p>
</dd>
<dt>Stanford University Computer Accounts</dt>
<dd><a href="http://www.stanford.edu/dept/as/mais/applications/sunetid/index.html">Getting a Stanford University ID (SUNet ID)</a></dd>
<dt>Administrative Tasks</dt>
<dd><a href="http://www-group.slac.stanford.edu/bsd/sid_entry.htm">Getting a SLAC ID number</a> :: Newcomers to SLAC who need to receive an identification badge, a dosimeter, a computer account, a phone, or any other services, must be entered into the SLAC Institutional Database (SID).</dd>
<dd><a href="https://www-internal.slac.stanford.edu/database/pages/czarlist.asp">Finding your Computer Czar</a> :: List of Computer Czar (People who can authorize comptuer accounts, changes, and deletions.)</dd>
<dd><a href="https://www-internal.slac.stanford.edu/comp/admin/pages/account-search.asp">Search for accounts</a> :: Find computing accounts for specific users</dd>
<dd><a href="https://www-internal.slac.stanford.edu/instdatabase/procedures/computer-accounts/account-delete.htm">Closing Accounts</a></dd>
<dd><a href="https://www-internal.slac.stanford.edu/instdatabase/procedures/computer-accounts/account-delete.htm">Terminating SLAC Employees</a> :: Procedures for computer accounts</dd>
</dl> ',
        'safe_summary' => ' <p>There are two types of COLLAB Windows domain accounts: Individual and Group. Currently only SharePoint supports COLLAB domain accounts. Request an account via email to <a href="mailto:windows-admin@slac.stanford.edu">windows-admin@slac.stanford.edu</a></p>
 ',
      ),
    ),
  ),
  'field_slac_sc_category' => array(
    'und' => array(
      0 => array(
        'tid' => 6,
        'uuid' => '40e140d3-4f65-481f-a68f-6d3f43161e13',
      ),
    ),
  ),
  'field_slac_sc_eligibility' => array(
    'und' => array(
      0 => array(
        'tid' => 21,
        'uuid' => 'db10ac33-21ec-4d40-bee7-1c34780f1b40',
      ),
      1 => array(
        'tid' => 11,
        'uuid' => '9d88d219-f7e7-4354-b6ce-accadf586640',
      ),
      2 => array(
        'tid' => 1,
        'uuid' => '00e2fef3-0966-49ed-8f3d-e3f8d1cd46c0',
      ),
    ),
  ),
  'field_slac_sc_rate' => array(
    'und' => array(
      0 => array(
        'value' => 'Free of charge',
        'format' => NULL,
        'safe_value' => 'Free of charge',
      ),
    ),
  ),
  'field_slac_sc_request_link' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.slac.stanford.edu',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_slac_sc_requirements' => array(
    'und' => array(
      0 => array(
        'value' => 'Must finish ES&H Safety Training',
        'format' => NULL,
        'safe_value' => 'Must finish ES&amp;H Safety Training',
      ),
      1 => array(
        'value' => 'Obtain valid security badge',
        'format' => NULL,
        'safe_value' => 'Obtain valid security badge',
      ),
    ),
  ),
  'field_slac_sc_service_overview' => array(
    'und' => array(
      0 => array(
        'value' => 'Windows :: Microsoft Windows Accounts.
There are SLAC Windows domain accounts for site-wide centrally maintained Windows applications.
There are two types of COLLAB Windows domain accounts: Individual and Group. Currently only SharePoint supports COLLAB domain accounts. Request an account via email to windows-admin@slac.stanford.edu
COLLAB Group accounts are limited to read-only access.
COLLAB Individual accounts are allowed read/write access.
Unix :: Central Unix
WTS :: Windows Terminal Server (Citrix)',
        'format' => NULL,
        'safe_value' => 'Windows :: Microsoft Windows Accounts.
There are SLAC Windows domain accounts for site-wide centrally maintained Windows applications.
There are two types of COLLAB Windows domain accounts: Individual and Group. Currently only SharePoint supports COLLAB domain accounts. Request an account via email to windows-admin@slac.stanford.edu
COLLAB Group accounts are limited to read-only access.
COLLAB Individual accounts are allowed read/write access.
Unix :: Central Unix
WTS :: Windows Terminal Server (Citrix)',
      ),
    ),
  ),
  'field_slac_sc_support' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Support is provided by SLAC IT services</p>
',
        'format' => 'full_html',
        'safe_value' => ' <p>Support is provided by SLAC IT services</p>
 ',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'path' => array(
    'pid' => 30,
    'source' => 'node/5',
    'alias' => 'services/service/computer-accounts',
    'language' => 'und',
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-26 19:43:52 +0300',
  'author_uuid' => '8387e0ab-2272-428b-b6f3-790625549a25',
);
  $nodes[] = array(
  'title' => 'SLAC Email',
  'log' => 'Edited by admin.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9b18f204-b01d-4dc4-b564-1f288c519096',
  'type' => 'slac_sc_catalog_item',
  'language' => 'und',
  'created' => 1377536292,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b5a334a9-7c3c-453c-ba37-1c1a4547568d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<dl>
	<dt>Client Configurations and Forwarding</dt>
</dl>

<blockquote>
	<table id="table6" border="0" width="100%">
		<tbody>
			<tr>
				<td width="50%"><a href="http://www2.slac.stanford.edu/comp/messaging/Installing/default.htm">Install &amp; Configure Pages</a></td>
				<td width="50%"><a href="https://email.slac.stanford.edu/owa">Read E-mail via Web Now</a></td>
			</tr>
			<tr>
				<td width="50%"><a href="http://www2.slac.stanford.edu/comp/messaging/Reference/exch2007-whattoexpect.htm">What to Expect with Exchange 2007</a></td>
				<td width="50%">&nbsp;</td>
			</tr>
		</tbody>
	</table>
</blockquote>

<dl>
	<dt>Frequently Asked Questions</dt>
</dl>

<blockquote>
	<table id="table7" border="0" width="100%">
		<tbody>
			<tr>
				<td width="50%"><a href="http://www2.slac.stanford.edu/comp/messaging/faq/default.htm">General FAQ</a></td>
				<td width="50%"><a href="http://www2.slac.stanford.edu/comp/messaging/faq/errroranswer.htm">Error Messages &amp; Answers</a></td>
			</tr>
		</tbody>
	</table>
</blockquote>

<dl>
	<dt>Mailing Lists</dt>
</dl>

<blockquote>
	<table id="table4" border="0" width="100%">
		<tbody>
			<tr>
				<td width="33%"><a href="http://www2.slac.stanford.edu/comp/messaging/Reference/mailinglists.htm">Description of Mailing Lists at SLAC</a></td>
				<td width="33%"><a href="https://portal.slac.stanford.edu/public/maillist">LISTSERV FAQ</a></td>
			</tr>
			<tr>
				<td width="33%"><a href="http://www.slac.stanford.edu/comp/net/email/slaconly/listserv-request.html">New List Request Form</a></td>
				<td width="33%">&nbsp;</td>
			</tr>
		</tbody>
	</table>
</blockquote>

<dl>
	<dt>Getting Help</dt>
</dl>

<blockquote>
	<table id="table5" border="0" width="100%">
		<tbody>
			<tr>
				<td width="50%"><a href="mailto:ithelp@slac.stanford.edu">Ask Help Desk</a></td>
				<td width="50%">&nbsp;</td>
			</tr>
		</tbody>
	</table>
</blockquote>

<dl>
	<dt>Password Changing</dt>
</dl>

<blockquote>
	<table id="table8" border="0" width="100%">
		<tbody>
			<tr>
				<td><a href="https://win-password.slac.stanford.edu/">Change Your Windows Password Here</a></td>
			</tr>
		</tbody>
	</table>
</blockquote>

<p>&nbsp;</p>
',
        'summary' => 'Email is offered to A-Z.',
        'format' => 'full_html',
        'safe_value' => ' <dl><dt>Client Configurations and Forwarding</dt>
</dl><blockquote><table id="table6" border="0" width="100%"><tbody><tr><td width="50%"><a href="http://www2.slac.stanford.edu/comp/messaging/Installing/default.htm">Install &amp; Configure Pages</a></td>
<td width="50%"><a href="https://email.slac.stanford.edu/owa">Read E-mail via Web Now</a></td>
</tr><tr><td width="50%"><a href="http://www2.slac.stanford.edu/comp/messaging/Reference/exch2007-whattoexpect.htm">What to Expect with Exchange 2007</a></td>
<td width="50%"> </td>
</tr></tbody></table></blockquote>
<dl><dt>Frequently Asked Questions</dt>
</dl><blockquote><table id="table7" border="0" width="100%"><tbody><tr><td width="50%"><a href="http://www2.slac.stanford.edu/comp/messaging/faq/default.htm">General FAQ</a></td>
<td width="50%"><a href="http://www2.slac.stanford.edu/comp/messaging/faq/errroranswer.htm">Error Messages &amp; Answers</a></td>
</tr></tbody></table></blockquote>
<dl><dt>Mailing Lists</dt>
</dl><blockquote><table id="table4" border="0" width="100%"><tbody><tr><td width="33%"><a href="http://www2.slac.stanford.edu/comp/messaging/Reference/mailinglists.htm">Description of Mailing Lists at SLAC</a></td>
<td width="33%"><a href="https://portal.slac.stanford.edu/public/maillist">LISTSERV FAQ</a></td>
</tr><tr><td width="33%"><a href="http://www.slac.stanford.edu/comp/net/email/slaconly/listserv-request.html">New List Request Form</a></td>
<td width="33%"> </td>
</tr></tbody></table></blockquote>
<dl><dt>Getting Help</dt>
</dl><blockquote><table id="table5" border="0" width="100%"><tbody><tr><td width="50%"><a href="mailto:ithelp@slac.stanford.edu">Ask Help Desk</a></td>
<td width="50%"> </td>
</tr></tbody></table></blockquote>
<dl><dt>Password Changing</dt>
</dl><blockquote><table id="table8" border="0" width="100%"><tbody><tr><td><a href="https://win-password.slac.stanford.edu/">Change Your Windows Password Here</a></td>
</tr></tbody></table></blockquote>
<p> </p>
 ',
        'safe_summary' => ' <p>Email is offered to A-Z.</p>
 ',
      ),
    ),
  ),
  'field_slac_sc_category' => array(
    'und' => array(
      0 => array(
        'tid' => 8,
        'uuid' => '62a170f8-cfd3-4717-a589-c5f1f7910be7',
      ),
    ),
  ),
  'field_slac_sc_eligibility' => array(
    'und' => array(
      0 => array(
        'tid' => 21,
        'uuid' => 'db10ac33-21ec-4d40-bee7-1c34780f1b40',
      ),
      1 => array(
        'tid' => 11,
        'uuid' => '9d88d219-f7e7-4354-b6ce-accadf586640',
      ),
      2 => array(
        'tid' => 1,
        'uuid' => '00e2fef3-0966-49ed-8f3d-e3f8d1cd46c0',
      ),
    ),
  ),
  'field_slac_sc_rate' => array(),
  'field_slac_sc_request_link' => array(),
  'field_slac_sc_requirements' => array(),
  'field_slac_sc_service_overview' => array(
    'und' => array(
      0 => array(
        'value' => 'Email is offered to A-Z.',
        'format' => NULL,
        'safe_value' => 'Email is offered to A-Z.',
      ),
    ),
  ),
  'field_slac_sc_support' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Support is provided by SLAC IT Services</p>
',
        'format' => 'full_html',
        'safe_value' => ' <p>Support is provided by SLAC IT Services</p>
 ',
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'path' => array(
    'pid' => 31,
    'source' => 'node/6',
    'alias' => 'services/service/slac-email',
    'language' => 'und',
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2013-08-26 19:58:12 +0300',
  'author_uuid' => '8387e0ab-2272-428b-b6f3-790625549a25',
);
  return $nodes;
}
