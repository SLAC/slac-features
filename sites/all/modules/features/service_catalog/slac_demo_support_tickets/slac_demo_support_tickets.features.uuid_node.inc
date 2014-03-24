<?php
/**
 * @file
 * slac_demo_support_tickets.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_demo_support_tickets_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Critical ticket #1',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'feb68560-4e63-4686-a77c-eac577ddbe01',
  'type' => 'support_ticket',
  'language' => 'und',
  'created' => 1391162154,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1ae9a0f1-62f1-43c6-94da-d86e6a1f9503',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Vivamus in molestie nisl! Aliquam ut euismod ipsum, nec pulvinar magna. Nunc auctor condimentum orci; ut ornare eros. Donec eget laoreet tortor. Duis vitae fringilla nunc, vitae scelerisque orci. Donec sit amet pulvinar nunc. Quisque id dignissim massa. Nulla sem nisl, hendrerit at magna sed, facilisis blandit eros.
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Vivamus in molestie nisl! Aliquam ut euismod ipsum, nec pulvinar magna. Nunc auctor condimentum orci; ut ornare eros. Donec eget laoreet tortor. Duis vitae fringilla nunc, vitae scelerisque orci. Donec sit amet pulvinar nunc. Quisque id dignissim massa. Nulla sem nisl, hendrerit at magna sed, facilisis blandit eros.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'support_ticket_upload' => array(),
  'field_support_category' => array(
    'und' => array(
      0 => array(
        'tid' => 58,
        'uuid' => '9fdafd4b-eceb-484d-9590-327d907b4d25',
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
  'message_id' => '',
  'state' => 2,
  'priority' => 4,
  'client' => 1,
  'assigned' => 1,
  'date' => '2014-01-31 11:55:54 +0200',
  'author_uuid' => '7e6892c2-5121-48c3-ba93-bd62ad07dcd5',
);
  $nodes[] = array(
  'title' => 'Desktop applications update',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '74387ac1-3f24-45ff-8339-eaab893d0bd0',
  'type' => 'support_ticket',
  'language' => 'und',
  'created' => 1391162565,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9606f942-bf34-4539-963f-5582659c8c67',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Donec laoreet molestie lectus eget tempus? Nunc in sollicitudin purus. Sed odio mauris, laoreet vitae eros eget, ullamcorper elementum dolor. Quisque at hendrerit dolor. Vestibulum neque urna; blandit a augue sed, porttitor venenatis augue. Phasellus dapibus eros ut odio semper ultricies. Curabitur at sem in nunc tincidunt feugiat eu at est. Duis feugiat pharetra est, facilisis accumsan eros tincidunt eu.
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Donec laoreet molestie lectus eget tempus? Nunc in sollicitudin purus. Sed odio mauris, laoreet vitae eros eget, ullamcorper elementum dolor. Quisque at hendrerit dolor. Vestibulum neque urna; blandit a augue sed, porttitor venenatis augue. Phasellus dapibus eros ut odio semper ultricies. Curabitur at sem in nunc tincidunt feugiat eu at est. Duis feugiat pharetra est, facilisis accumsan eros tincidunt eu.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'support_ticket_upload' => array(),
  'field_support_category' => array(
    'und' => array(
      0 => array(
        'tid' => 48,
        'uuid' => '04690b24-a63c-403b-a4ee-b0f96929f27b',
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
  'message_id' => '',
  'state' => 4,
  'priority' => 2,
  'client' => 1,
  'assigned' => 1,
  'date' => '2014-01-31 12:02:45 +0200',
  'author_uuid' => '7e6892c2-5121-48c3-ba93-bd62ad07dcd5',
);
  $nodes[] = array(
  'title' => 'Low priority issue',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e0b0cc0b-cfce-4e5d-9c52-89d2d60e046b',
  'type' => 'support_ticket',
  'language' => 'und',
  'created' => 1391162247,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bea6c470-0cb0-4faa-a90c-1cfb96e59bbf',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Aenean nec est fermentum, tincidunt sem vitae, malesuada massa! Donec egestas diam non ante tristique tincidunt. Morbi rhoncus nulla ut mauris posuere consectetur. Mauris sed euismod quam. Interdum et malesuada fames ac ante ipsum primis in faucibus. In imperdiet metus sed massa rutrum, in tincidunt massa suscipit. Nam tincidunt dapibus mauris, eu vehicula quam molestie eget. Praesent leo turpis, suscipit ut gravida in, laoreet et dui. Donec eu arcu in urna feugiat placerat sed id tortor. Mauris ultricies tellus nec risus gravida, eget ornare turpis bibendum. Ut et dignissim lectus. Nullam euismod gravida luctus! Morbi id dui at neque consequat pulvinar. Cras volutpat enim quis mattis varius. Interdum et malesuada fames ac ante ipsum primis in faucibus.
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Aenean nec est fermentum, tincidunt sem vitae, malesuada massa! Donec egestas diam non ante tristique tincidunt. Morbi rhoncus nulla ut mauris posuere consectetur. Mauris sed euismod quam. Interdum et malesuada fames ac ante ipsum primis in faucibus. In imperdiet metus sed massa rutrum, in tincidunt massa suscipit. Nam tincidunt dapibus mauris, eu vehicula quam molestie eget. Praesent leo turpis, suscipit ut gravida in, laoreet et dui. Donec eu arcu in urna feugiat placerat sed id tortor. Mauris ultricies tellus nec risus gravida, eget ornare turpis bibendum. Ut et dignissim lectus. Nullam euismod gravida luctus! Morbi id dui at neque consequat pulvinar. Cras volutpat enim quis mattis varius. Interdum et malesuada fames ac ante ipsum primis in faucibus.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'support_ticket_upload' => array(),
  'field_support_category' => array(
    'und' => array(
      0 => array(
        'tid' => 52,
        'uuid' => '40e140d3-4f65-481f-a68f-6d3f43161e13',
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
  'message_id' => '',
  'state' => 1,
  'priority' => 1,
  'client' => 1,
  'assigned' => 1,
  'date' => '2014-01-31 11:57:27 +0200',
  'author_uuid' => '7e6892c2-5121-48c3-ba93-bd62ad07dcd5',
);
  $nodes[] = array(
  'title' => 'Site new design',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd10b633b-a7e5-456e-b34e-42b588bc2b58',
  'type' => 'support_ticket',
  'language' => 'und',
  'created' => 1391162954,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e0030156-fb66-4185-af12-96b9c2c2dd84',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Ut a adipiscing lacus, eget ultricies libero. Curabitur eu posuere dolor; sit amet facilisis odio? In interdum, arcu ut egestas ultrices, neque ipsum iaculis urna, a tempor massa justo eget justo? Donec lobortis leo fringilla bibendum pellentesque. Curabitur sed viverra quam? Fusce vehicula, lorem eget bibendum imperdiet, sem ipsum luctus risus, eget sagittis eros enim vitae massa? Ut turpis diam, eleifend ut enim id, adipiscing feugiat augue. Aenean quis fermentum erat. Sed semper mi eget nisl vehicula pretium. Nam ut metus semper nibh tincidunt posuere. Ut hendrerit non tortor et posuere? Phasellus nibh lectus; dapibus sit amet sodales eget, lacinia vel erat. Vestibulum non quam nec justo gravida laoreet. Aenean commodo ullamcorper nisi, ac ultrices libero dictum sed. Phasellus auctor aliquet sapien at pretium. Aliquam ac libero et erat porta iaculis.

Nulla facilisi. Aliquam erat volutpat. Integer et mi dapibus, elementum erat sed, condimentum mauris. Nunc gravida ligula at felis lobortis volutpat. Donec eu mi risus. Nunc dignissim nulla elementum tortor pharetra, sit amet semper augue tempor. Etiam mattis semper nulla, ut mattis odio ultrices id. Nullam ullamcorper quam volutpat.
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Ut a adipiscing lacus, eget ultricies libero. Curabitur eu posuere dolor; sit amet facilisis odio? In interdum, arcu ut egestas ultrices, neque ipsum iaculis urna, a tempor massa justo eget justo? Donec lobortis leo fringilla bibendum pellentesque. Curabitur sed viverra quam? Fusce vehicula, lorem eget bibendum imperdiet, sem ipsum luctus risus, eget sagittis eros enim vitae massa? Ut turpis diam, eleifend ut enim id, adipiscing feugiat augue. Aenean quis fermentum erat. Sed semper mi eget nisl vehicula pretium. Nam ut metus semper nibh tincidunt posuere. Ut hendrerit non tortor et posuere? Phasellus nibh lectus; dapibus sit amet sodales eget, lacinia vel erat. Vestibulum non quam nec justo gravida laoreet. Aenean commodo ullamcorper nisi, ac ultrices libero dictum sed. Phasellus auctor aliquet sapien at pretium. Aliquam ac libero et erat porta iaculis.</p>
<p>Nulla facilisi. Aliquam erat volutpat. Integer et mi dapibus, elementum erat sed, condimentum mauris. Nunc gravida ligula at felis lobortis volutpat. Donec eu mi risus. Nunc dignissim nulla elementum tortor pharetra, sit amet semper augue tempor. Etiam mattis semper nulla, ut mattis odio ultrices id. Nullam ullamcorper quam volutpat.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'support_ticket_upload' => array(),
  'field_support_category' => array(
    'und' => array(
      0 => array(
        'tid' => 71,
        'uuid' => 'fe373df2-e8cb-4f22-90c7-9ebebd9187a0',
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
  'message_id' => '',
  'state' => 2,
  'priority' => 2,
  'client' => 1,
  'assigned' => 1,
  'date' => '2014-01-31 12:09:14 +0200',
  'author_uuid' => '7e6892c2-5121-48c3-ba93-bd62ad07dcd5',
);
  $nodes[] = array(
  'title' => 'HTML email format template',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e2c612ed-04ab-45cd-9ec0-d00f5af8a967',
  'type' => 'support_ticket',
  'language' => 'und',
  'created' => 1391162690,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fa1ab469-0f04-4a69-a89b-ccc8faee5165',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Donec vestibulum lobortis elit; sed dignissim augue scelerisque id. Proin feugiat elementum purus lobortis malesuada. Etiam posuere, odio ut viverra laoreet, orci massa ultrices nunc, quis placerat neque libero ut mauris. Nam quam turpis, commodo at mauris sed, cursus blandit nisl. Maecenas egestas ligula sit amet libero scelerisque, et rhoncus purus semper. Mauris ut urna ac nulla placerat ultrices sed non nisl? Aenean a tempor neque, vitae suscipit eros. Duis convallis enim lorem, sit amet pellentesque ligula mattis eu. Donec eu mattis mi, ac dictum ipsum. Aliquam erat volutpat. Vivamus eget mi ligula. Morbi id pretium felis.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>Donec vestibulum lobortis elit; sed dignissim augue scelerisque id. Proin feugiat elementum purus lobortis malesuada. Etiam posuere, odio ut viverra laoreet, orci massa ultrices nunc, quis placerat neque libero ut mauris. Nam quam turpis, commodo at mauris sed, cursus blandit nisl. Maecenas egestas ligula sit amet libero scelerisque, et rhoncus purus semper. Mauris ut urna ac nulla placerat ultrices sed non nisl? Aenean a tempor neque, vitae suscipit eros. Duis convallis enim lorem, sit amet pellentesque ligula mattis eu. Donec eu mattis mi, ac dictum ipsum. Aliquam erat volutpat. Vivamus eget mi ligula. Morbi id pretium felis.</p>
 ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'support_ticket_upload' => array(),
  'field_support_category' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '62a170f8-cfd3-4717-a589-c5f1f7910be7',
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
  'message_id' => '',
  'state' => 3,
  'priority' => 3,
  'client' => 1,
  'assigned' => 1,
  'date' => '2014-01-31 12:04:50 +0200',
  'author_uuid' => '7e6892c2-5121-48c3-ba93-bd62ad07dcd5',
);
  return $nodes;
}
