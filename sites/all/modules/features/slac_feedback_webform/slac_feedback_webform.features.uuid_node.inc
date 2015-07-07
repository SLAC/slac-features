<?php
/**
 * @file
 * slac_feedback_webform.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_feedback_webform_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Contact Us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '74309a66-0f4f-4f45-ad36-5cde91db1b05',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1374062576,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '53ec4224-2dde-4a1b-8f15-f5c069570bf7',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>We appreciate your feedback and hope to answer any questions you may have as soon as possible.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p>We appreciate your feedback and hope to answer any questions you may have as soon as possible.</p>
 ',
        'safe_summary' => '  ',
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
  'webform' => array(
    'nid' => 17,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => 'node/3346',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 0,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 0,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => NULL,
    'progressbar_label_confirmation' => NULL,
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      2 => array(
        'nid' => 17,
        'eid' => 2,
        'email' => 'webteam@slac.stanford.edu, communications@slac.stanford.edu',
        'subject' => 'SLAC Website Feedback Form',
        'from_name' => 1,
        'from_address' => 6,
        'template' => 'Feedback Topic: [submission:values:topic_of_your_feedback___question]

From: [submission:values:your_name]
Message: [submission:values:your_feedback]

The results of this submission may be viewed at:
[submission:url]',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'extra' => FALSE,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 17,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'your_name',
        'name' => 'Your Name:',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 17,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'your_email',
        'name' => 'Your Email:',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'inline',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 17,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'your_organization___affiliation',
        'name' => 'Your Organization / Affiliation:',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 17,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'topic_of_your_feedback___question',
        'name' => 'Topic of Your Feedback / Question:',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'broken_link|Broken Link
typographical_error|Content Issue
site_enhancement|Site Enhancement
general_feedback|General Feedback
search_related Feedback|Search Related Feedback
Other|Other',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
          'analysis' => TRUE,
        ),
        'required' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 17,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'your_feedback',
        'name' => 'Your Feedback:',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 0,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'date' => '2013-07-17 12:02:56 +0000',
  'author_uuid' => 'bd19b3f0-c8cc-49c2-8741-6879a4fbcf9a',
);
  return $nodes;
}
