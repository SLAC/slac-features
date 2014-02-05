<?php
/**
 * @file
 * slac_service_catalog_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_service_catalog_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Staff',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '00e2fef3-0966-49ed-8f3d-e3f8d1cd46c0',
    'vocabulary_machine_name' => 'slac_sc_eligibility',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Desktop Computing',
    'description' => 'IT Services offers advice on the purchase of computers and computer-related products and participates in campus wide negotiated special pricing with Apple, Lenovo, and Dell. Software and hardware support for faculty, staff, and students is provided by the central IT Service Desk. Fee-based contract support is available for Stanford schools, departments, and institutions. A variety of tools and services are available for technical support staff to centrally manage desktop computers using automated processes.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '04690b24-a63c-403b-a4ee-b0f96929f27b',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Printing',
    'description' => 'IT Services is Stanford\'s in-house business and residential telephone, cable TV, and Internet service provider. Services are provided to the main campus and satellite locations, to the medical center and related clinics, to several faculty/staff residential communities, and to student resident halls.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1717ac83-c1b6-4513-956d-76ccf6726c11',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Set up MySQL database',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '28477ff9-fa97-49a6-8747-711bedc8f610',
    'vocabulary_machine_name' => 'slac_sc_self_help',
    'field_sc_catalog_item_extlink' => array(
      'und' => array(
        0 => array(
          'url' => 'services/service/mysql-oracle',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Manage documents',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '38eccf39-982c-4f3b-90cd-3c4739716162',
    'vocabulary_machine_name' => 'slac_sc_self_help',
    'field_sc_catalog_item_extlink' => array(
      'und' => array(
        0 => array(
          'url' => 'http://www.slac.stanford.edu',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Accounts',
    'description' => 'IT Services manages the account, access, and authority systems and services that protect Stanford’s information resources. IT Services also oversees the Stanford ID Card system. The ID Card provides physical access to residence and dining halls, libraries, recreational facilities, and staff office buildings, and can be used to purchase goods and services at select locations on campus.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '40e140d3-4f65-481f-a68f-6d3f43161e13',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Set up email',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '435291b2-81a1-432a-8d48-bb1ba90d7c89',
    'vocabulary_machine_name' => 'slac_sc_self_help',
    'field_sc_catalog_item_extlink' => array(
      'und' => array(
        0 => array(
          'url' => 'services/service/slac-email',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Email',
    'description' => 'University faculty, staff, and students receive free @Stanford email accounts and associated email storage quota. Stanford Email and Calendar service is provided through Google Apps for undergraduate students and some schools and departments. Email and Calendar service is provided through Zimbra for the rest of campus.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '62a170f8-cfd3-4717-a589-c5f1f7910be7',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Video Services',
    'description' => 'Pulvinar sed amet! Dignissim, integer! Dolor? Tincidunt magnis! Phasellus eros egestas nisi platea mid duis mattis rhoncus, diam, sociis sed ultrices etiam sagittis penatibus, tempor! Risus magna hac, porta sit elit sit, sed eu proin! Cum, nisi tempor magna placerat tincidunt etiam augue velit phasellus arcu risus nisi lacus sit elementum platea in, nunc montes, turpis?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '705c93be-21b0-4cce-9443-638bb1472837',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Conference Computing',
    'description' => 'Elementum! Velit rhoncus augue et ut lundium turpis purus, lorem, non placerat nunc placerat dignissim sed porta integer! Velit nec sociis ac! Cursus diam lectus nisi placerat nunc, aenean natoque turpis ac lacus, porttitor lacus elementum sed amet vel! Habitasse, duis est. Enim purus? Sed lacus dapibus augue? Ac elementum aliquet? Dignissim. ',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '83b5b76c-6bd8-4a0c-a580-6aa8b22d9f63',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Researcher',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9d88d219-f7e7-4354-b6ce-accadf586640',
    'vocabulary_machine_name' => 'slac_sc_eligibility',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Networking',
    'description' => 'IT Services works closely with local network administrators to support, monitor, and optimize network performance while maximizing network security and availability.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9fdafd4b-eceb-484d-9590-327d907b4d25',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Remote Acccess',
    'description' => 'Stanfords VPN service allows any Stanford affiliate to connect to SUNet remotely from any available network connection almost anywhere in the world: including from home, from many hotels, and even from within some company networks.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a51c3a71-38f8-40d0-aa1f-8ab427698165',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Databases',
    'description' => 'IT Services provides centralized server hosting, Linux & Windows system administration, cluster management, and Oracle & Microsoft SQL database administration. Local server management for Mac OS X and Windows servers is also available.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ac074ab7-4b52-4911-a6b0-3d92f247aa2a',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Loaner Equipment',
    'description' => 'Mus, tincidunt in vel urna, cras augue. Sit! Magna, lorem tincidunt, tempor, tincidunt turpis, dictumst porttitor turpis, parturient amet! Turpis nisi integer, diam, platea nunc vel! Pid cras integer augue diam quis? Tincidunt amet porta, rhoncus placerat adipiscing?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b0f91270-651f-498d-9311-e09a3f22f85d',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Telecommunications',
    'description' => 'IT Services is Stanford\'s in-house business and residential telephone, cable TV, and Internet service provider. Services are provided to the main campus and satellite locations, to the medical center and related clinics, to several faculty/staff residential communities, and to student resident halls.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b42288fb-32a2-4c68-9ed3-86603872c2e2',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Visitors & Public Computing Terminals',
    'description' => 'Mus, tincidunt in vel urna, cras augue. Sit! Magna, lorem tincidunt, tempor, tincidunt turpis, dictumst porttitor turpis, parturient amet! Turpis nisi integer, diam, platea nunc vel! Pid cras integer augue diam quis? Tincidunt amet porta, rhoncus placerat adipiscing? Rhoncus, tincidunt placerat ac sit non, sed ut ac, in facilisis lorem, a aenean ultrices turpis tincidunt elementum, ',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bddafee1-a17c-4f9c-8a8c-e02b23b88333',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Create computer accounts',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ccaaceb7-1893-4e22-8b3d-c03e4e1b3c40',
    'vocabulary_machine_name' => 'slac_sc_self_help',
    'field_sc_catalog_item_extlink' => array(
      'und' => array(
        0 => array(
          'url' => 'services/service/computer-accounts',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Application Support',
    'description' => 'IT Services offers free and for-purchase software to Stanford faculty, staff, and students. Web-based ordering sites allow students and authorized employees to review, order, and manage IT subscriptions and services.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cf2ef1a1-ee93-434b-a103-a0a123dcc6aa',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Omnicode Access',
    'description' => '<p><span style="font-family: arial; line-height: normal;">Mus, tincidunt in vel urna, cras augue. Sit! Magna, lorem tincidunt, tempor, tincidunt turpis, dictumst porttitor turpis, parturient amet! Turpis nisi integer, diam, platea nunc vel! Pid cras integer augue diam quis?</span></p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd79a3de7-ec4b-45c5-b367-191601450eba',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Collaborator',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'db10ac33-21ec-4d40-bee7-1c34780f1b40',
    'vocabulary_machine_name' => 'slac_sc_eligibility',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Create a website',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e3bc069a-8f51-4c2c-be3c-9fcc4db17294',
    'vocabulary_machine_name' => 'slac_sc_self_help',
    'field_sc_catalog_item_extlink' => array(
      'und' => array(
        0 => array(
          'url' => 'http://www.slac.stanford.edu',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'File System',
    'description' => 'IT Services provides centralized server hosting, Linux & Windows system administration, cluster management, and Oracle & Microsoft SQL database administration. Local server management for Mac OS X and Windows servers is also available.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e6c0c94e-d407-4bc5-a2ca-98d2dffb52d7',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Contractor',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f3037fca-b840-4394-9c4e-03ea14b6c4bf',
    'vocabulary_machine_name' => 'slac_sc_eligibility',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Web (WWW)',
    'description' => 'IT Services provides tools and services to manage documents and online content, collect user input, and communicate by video conference and instant message. A variety of free and for-fee options allow the Stanford community to create and administer a dynamic, secure, and recognizable web presence.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fe373df2-e8cb-4f22-90c7-9ebebd9187a0',
    'vocabulary_machine_name' => 'slac_sc_category',
    'field_slac_sc_category_logo' => array(),
    'metatags' => array(),
  );
  return $terms;
}
