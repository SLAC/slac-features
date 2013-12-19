<?php

function slac_profiles_shared_filtered_format() {
  // Add text formats.
  $filtered_html_format = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'weight' => 0,
    'filters' => array(
      // URL filter.
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
      ),
      // HTML filter.
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
      ),
      // Line break filter.
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
      ),
      // HTML corrector filter.
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
      ),
    ),
  );
  $filtered_html_format = (object) $filtered_html_format;
  filter_format_save($filtered_html_format);

  // Full HTML provided by pp_admin module.

  // Enable default permissions for system roles.
  $filtered_html_permission = filter_permission_name($filtered_html_format);
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content', 'access comments', $filtered_html_permission));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access content', 'access comments', 'post comments', 'skip comment approval', $filtered_html_permission));

}