<?php
/**
 * @file
 * slac_people_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slac_people_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'People Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results were found!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'contact' => 'contact',
  );
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_prf_contact_photo']['id'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['table'] = 'field_data_field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['field'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_photo']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prf_contact_photo']['settings'] = array(
    'image_style' => 'people-listing-photo',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_prf_contact_title']['id'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['table'] = 'field_data_field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['field'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_title']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_title']['element_label_colon'] = FALSE;
  /* Field: Profile: Affiliation */
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['id'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['table'] = 'field_data_field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['field'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['type'] = 'text_plain';
  /* Contextual filter: Profile: Last Name (field_prf_contact_lname) */
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['id'] = 'field_prf_contact_lname_value';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['table'] = 'field_data_field_prf_contact_lname';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['field'] = 'field_prf_contact_lname_value';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary_options']['base_path'] = 'people';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary_options']['separator'] = '-';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['path_case'] = 'lower';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: People Listing */
  $handler = $view->new_display('panel_pane', 'People Listing', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'People Listing: All';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'people-page-listing';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_prf_contact_title' => 'field_prf_contact_title',
    'field_prf_contact_affiliation' => 'field_prf_contact_affiliation',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_prf_contact_photo']['id'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['table'] = 'field_data_field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['field'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_photo']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['path'] = 'profile/[authname]';
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_wrapper_class'] = 'profile-photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prf_contact_photo']['settings'] = array(
    'image_style' => 'people-listing-photo',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'profile/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_prf_contact_title']['id'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['table'] = 'field_data_field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['field'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_title']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_title']['element_label_colon'] = FALSE;
  /* Field: Profile: Affiliation */
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['id'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['table'] = 'field_data_field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['field'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Last Name (field_prf_contact_lname) */
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['id'] = 'field_prf_contact_lname_value';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['table'] = 'field_data_field_prf_contact_lname';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['field'] = 'field_prf_contact_lname_value';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['exception']['title'] = 'People Listing: All';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['title'] = 'People Listing: %1';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['path_case'] = 'lower';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '0';
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_1']['value']['value'] = '1';
  /* Filter criterion: Profile: Published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_published_value']['value'] = array(
    1 => '1',
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="browse-all"><a href="/people/all">Browse All People</a></div>
<div class="browse-last-name">Browse by Last Name</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_prf_contact_photo']['id'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['table'] = 'field_data_field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['field'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_photo']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['path'] = 'profile/[name]';
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prf_contact_photo']['settings'] = array(
    'image_style' => 'crop_portrait',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'profile/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_prf_contact_title']['id'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['table'] = 'field_data_field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['field'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_title']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_title']['type'] = 'text_plain';
  /* Field: Profile: Affiliation */
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['id'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['table'] = 'field_data_field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['field'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['type'] = 'text_plain';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'panel_pane_1' => 'panel_pane_1',
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['people_listing'] = $view;

  $view = new view();
  $view->name = 'profile_user_elements_extorg';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Profile user elements (ExtOrg)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_prf_contact_title' => 'field_prf_contact_title',
    'field_prf_contact_affiliation' => 'field_prf_contact_affiliation',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
  /* Filter criterion: Profile: User uid */
  $handler->display->display_options['filters']['user']['id'] = 'user';
  $handler->display->display_options['filters']['user']['table'] = 'profile';
  $handler->display->display_options['filters']['user']['field'] = 'user';
  $handler->display->display_options['filters']['user']['exposed'] = TRUE;
  $handler->display->display_options['filters']['user']['expose']['operator_id'] = 'user_op';
  $handler->display->display_options['filters']['user']['expose']['label'] = 'User';
  $handler->display->display_options['filters']['user']['expose']['operator'] = 'user_op';
  $handler->display->display_options['filters']['user']['expose']['identifier'] = 'user';
  $handler->display->display_options['filters']['user']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Contact Information */
  $handler = $view->new_display('panel_pane', 'Contact Information', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Information';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'contact-information';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_prf_contact_title']['id'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['table'] = 'field_data_field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['field'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_title']['hide_empty'] = TRUE;
  /* Field: Profile: Affiliation */
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['id'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['table'] = 'field_data_field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['field'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['hide_empty'] = TRUE;
  /* Field: Profile: Research Group */
  $handler->display->display_options['fields']['field_prf_contact_rg']['id'] = 'field_prf_contact_rg';
  $handler->display->display_options['fields']['field_prf_contact_rg']['table'] = 'field_data_field_prf_contact_rg';
  $handler->display->display_options['fields']['field_prf_contact_rg']['field'] = 'field_prf_contact_rg';
  $handler->display->display_options['fields']['field_prf_contact_rg']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_rg']['hide_empty'] = TRUE;
  /* Field: Profile: Email */
  $handler->display->display_options['fields']['field_prf_contact_email']['id'] = 'field_prf_contact_email';
  $handler->display->display_options['fields']['field_prf_contact_email']['table'] = 'field_data_field_prf_contact_email';
  $handler->display->display_options['fields']['field_prf_contact_email']['field'] = 'field_prf_contact_email';
  $handler->display->display_options['fields']['field_prf_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_email']['hide_empty'] = TRUE;
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_prf_contact_phone']['id'] = 'field_prf_contact_phone';
  $handler->display->display_options['fields']['field_prf_contact_phone']['table'] = 'field_data_field_prf_contact_phone';
  $handler->display->display_options['fields']['field_prf_contact_phone']['field'] = 'field_prf_contact_phone';
  $handler->display->display_options['fields']['field_prf_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_prf_contact_phone']['multi_type'] = 'ul';
  /* Field: Profile: Fax */
  $handler->display->display_options['fields']['field_prf_contact_fax']['id'] = 'field_prf_contact_fax';
  $handler->display->display_options['fields']['field_prf_contact_fax']['table'] = 'field_data_field_prf_contact_fax';
  $handler->display->display_options['fields']['field_prf_contact_fax']['field'] = 'field_prf_contact_fax';
  $handler->display->display_options['fields']['field_prf_contact_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_fax']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_fax']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_prf_contact_fax']['multi_type'] = 'ul';
  /* Field: Profile: Office Address */
  $handler->display->display_options['fields']['field_prf_contact_location']['id'] = 'field_prf_contact_location';
  $handler->display->display_options['fields']['field_prf_contact_location']['table'] = 'field_data_field_prf_contact_location';
  $handler->display->display_options['fields']['field_prf_contact_location']['field'] = 'field_prf_contact_location';
  $handler->display->display_options['fields']['field_prf_contact_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_location']['hide_empty'] = TRUE;
  /* Field: Profile: Website */
  $handler->display->display_options['fields']['field_prf_contact_website']['id'] = 'field_prf_contact_website';
  $handler->display->display_options['fields']['field_prf_contact_website']['table'] = 'field_data_field_prf_contact_website';
  $handler->display->display_options['fields']['field_prf_contact_website']['field'] = 'field_prf_contact_website';
  $handler->display->display_options['fields']['field_prf_contact_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_prf_contact_website']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_prf_contact_website']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'profile';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['default_argument_options']['argument'] = 'contact';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Profile element';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'none',
      'context' => 'entity:bean.field_content_block_background',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: Type',
    ),
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Connect With Me */
  $handler = $view->new_display('panel_pane', 'Connect With Me', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Connect With Me';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'connect-with-me';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Twitter */
  $handler->display->display_options['fields']['field_prf_social_twitter']['id'] = 'field_prf_social_twitter';
  $handler->display->display_options['fields']['field_prf_social_twitter']['table'] = 'field_data_field_prf_social_twitter';
  $handler->display->display_options['fields']['field_prf_social_twitter']['field'] = 'field_prf_social_twitter';
  $handler->display->display_options['fields']['field_prf_social_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_prf_social_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_social_twitter']['alter']['text'] = '<div class="twitter-link">[field_prf_social_twitter]</div>';
  $handler->display->display_options['fields']['field_prf_social_twitter']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_twitter']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_twitter']['click_sort_column'] = 'url';
  /* Field: Profile: Facebook */
  $handler->display->display_options['fields']['field_prf_social_facebook']['id'] = 'field_prf_social_facebook';
  $handler->display->display_options['fields']['field_prf_social_facebook']['table'] = 'field_data_field_prf_social_facebook';
  $handler->display->display_options['fields']['field_prf_social_facebook']['field'] = 'field_prf_social_facebook';
  $handler->display->display_options['fields']['field_prf_social_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_prf_social_facebook']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_social_facebook']['alter']['text'] = '<div class="facebook">[field_prf_social_facebook]</div>';
  $handler->display->display_options['fields']['field_prf_social_facebook']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_facebook']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_facebook']['click_sort_column'] = 'url';
  /* Field: Profile: LinkedIn */
  $handler->display->display_options['fields']['field_prf_social_linkedin']['id'] = 'field_prf_social_linkedin';
  $handler->display->display_options['fields']['field_prf_social_linkedin']['table'] = 'field_data_field_prf_social_linkedin';
  $handler->display->display_options['fields']['field_prf_social_linkedin']['field'] = 'field_prf_social_linkedin';
  $handler->display->display_options['fields']['field_prf_social_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_prf_social_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_social_linkedin']['alter']['text'] = '<div class="linked-in">[field_prf_social_linkedin]</div>';
  $handler->display->display_options['fields']['field_prf_social_linkedin']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_linkedin']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_linkedin']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_linkedin']['click_sort_column'] = 'url';
  /* Field: Profile: Flickr */
  $handler->display->display_options['fields']['field_prf_social_flickr']['id'] = 'field_prf_social_flickr';
  $handler->display->display_options['fields']['field_prf_social_flickr']['table'] = 'field_data_field_prf_social_flickr';
  $handler->display->display_options['fields']['field_prf_social_flickr']['field'] = 'field_prf_social_flickr';
  $handler->display->display_options['fields']['field_prf_social_flickr']['label'] = '';
  $handler->display->display_options['fields']['field_prf_social_flickr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_social_flickr']['alter']['text'] = '<div class="flikr">[field_prf_social_flickr]</div>';
  $handler->display->display_options['fields']['field_prf_social_flickr']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_flickr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_flickr']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_flickr']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_flickr']['click_sort_column'] = 'url';
  /* Field: Profile: Google+ */
  $handler->display->display_options['fields']['field_prf_social_googleplus']['id'] = 'field_prf_social_googleplus';
  $handler->display->display_options['fields']['field_prf_social_googleplus']['table'] = 'field_data_field_prf_social_googleplus';
  $handler->display->display_options['fields']['field_prf_social_googleplus']['field'] = 'field_prf_social_googleplus';
  $handler->display->display_options['fields']['field_prf_social_googleplus']['label'] = '';
  $handler->display->display_options['fields']['field_prf_social_googleplus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_social_googleplus']['alter']['text'] = '<div class="goolge-plus">[field_prf_social_googleplus]</div>';
  $handler->display->display_options['fields']['field_prf_social_googleplus']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_googleplus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_googleplus']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_prf_social_googleplus']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_prf_social_googleplus']['click_sort_column'] = 'url';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'social_media' => 'social_media',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profile element';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Full Profile */
  $handler = $view->new_display('panel_pane', 'Full Profile', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Profile Overview';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'profile-info-full';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'profile-name';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_prf_contact_photo']['id'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['table'] = 'field_data_field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['field'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['text'] = '[field_prf_contact_photo]';
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prf_contact_photo']['settings'] = array(
    'image_style' => 'profile_home_user_image_eo',
    'image_link' => '',
  );
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_prf_contact_title']['id'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['table'] = 'field_data_field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['field'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_title']['element_label_colon'] = FALSE;
  /* Field: Profile: Affiliation */
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['id'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['table'] = 'field_data_field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['field'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['alter']['text'] = '<div class="profile-name">[name]</div>
[field_prf_contact_title], [field_prf_contact_affiliation]';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_wrapper_class'] = 'profile-affiliation';
  /* Field: Profile: Bio */
  $handler->display->display_options['fields']['field_prf_bio_bio']['id'] = 'field_prf_bio_bio';
  $handler->display->display_options['fields']['field_prf_bio_bio']['table'] = 'field_data_field_prf_bio_bio';
  $handler->display->display_options['fields']['field_prf_bio_bio']['field'] = 'field_prf_bio_bio';
  $handler->display->display_options['fields']['field_prf_bio_bio']['label'] = '';
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['text'] = '<div class="profile-bio">[field_prf_bio_bio]</div>';
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['more_link_text'] = 'View entire profile';
  $handler->display->display_options['fields']['field_prf_bio_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['settings'] = array(
    'expandText' => 'Expand »',
    'expandPrefix' => '...',
    'slicePoint' => '50',
    'collapseTimer' => '',
    'userCollapseText' => 'Collapse',
    'userCollapsePrefix' => '',
  );
  /* Field: Profile: Education */
  $handler->display->display_options['fields']['field_prf_bio_education']['id'] = 'field_prf_bio_education';
  $handler->display->display_options['fields']['field_prf_bio_education']['table'] = 'field_data_field_prf_bio_education';
  $handler->display->display_options['fields']['field_prf_bio_education']['field'] = 'field_prf_bio_education';
  $handler->display->display_options['fields']['field_prf_bio_education']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_education']['type'] = 'textformatter_list';
  $handler->display->display_options['fields']['field_prf_bio_education']['settings'] = array(
    'textformatter_type' => 'ul',
    'textformatter_comma_and' => 0,
    'textformatter_comma_full_stop' => 0,
    'textformatter_comma_override' => 0,
    'textformatter_separator_custom' => '',
    'textformatter_separator_custom_tag' => 'span',
    'textformatter_separator_custom_class' => 'textformatter-separator',
    'textformatter_comma_tag' => 'div',
    'textformatter_class' => 'profile-textformatter-list',
  );
  $handler->display->display_options['fields']['field_prf_bio_education']['delta_offset'] = '0';
  /* Field: Profile: Professional Experience */
  $handler->display->display_options['fields']['field_prf_bio_pexp']['id'] = 'field_prf_bio_pexp';
  $handler->display->display_options['fields']['field_prf_bio_pexp']['table'] = 'field_data_field_prf_bio_pexp';
  $handler->display->display_options['fields']['field_prf_bio_pexp']['field'] = 'field_prf_bio_pexp';
  $handler->display->display_options['fields']['field_prf_bio_pexp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_pexp']['type'] = 'textformatter_list';
  $handler->display->display_options['fields']['field_prf_bio_pexp']['settings'] = array(
    'textformatter_type' => 'ul',
    'textformatter_comma_and' => 0,
    'textformatter_comma_full_stop' => 0,
    'textformatter_comma_override' => 0,
    'textformatter_separator_custom' => '',
    'textformatter_separator_custom_tag' => 'span',
    'textformatter_separator_custom_class' => 'textformatter-separator',
    'textformatter_comma_tag' => 'div',
    'textformatter_class' => 'profile-textformatter-list',
  );
  $handler->display->display_options['fields']['field_prf_bio_pexp']['delta_offset'] = '0';
  /* Field: Profile: Areas of Research */
  $handler->display->display_options['fields']['field_prf_bio_ar']['id'] = 'field_prf_bio_ar';
  $handler->display->display_options['fields']['field_prf_bio_ar']['table'] = 'field_data_field_prf_bio_ar';
  $handler->display->display_options['fields']['field_prf_bio_ar']['field'] = 'field_prf_bio_ar';
  $handler->display->display_options['fields']['field_prf_bio_ar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_ar']['type'] = 'textformatter_list';
  $handler->display->display_options['fields']['field_prf_bio_ar']['settings'] = array(
    'textformatter_type' => 'ul',
    'textformatter_comma_and' => 0,
    'textformatter_comma_full_stop' => 0,
    'textformatter_comma_override' => 0,
    'textformatter_separator_custom' => '',
    'textformatter_separator_custom_tag' => 'span',
    'textformatter_separator_custom_class' => 'textformatter-separator',
    'textformatter_comma_tag' => 'div',
    'textformatter_class' => 'profile-textformatter-list',
  );
  $handler->display->display_options['fields']['field_prf_bio_ar']['delta_offset'] = '0';
  /* Field: Profile: Honors and Awards */
  $handler->display->display_options['fields']['field_prf_bio_ha']['id'] = 'field_prf_bio_ha';
  $handler->display->display_options['fields']['field_prf_bio_ha']['table'] = 'field_data_field_prf_bio_ha';
  $handler->display->display_options['fields']['field_prf_bio_ha']['field'] = 'field_prf_bio_ha';
  $handler->display->display_options['fields']['field_prf_bio_ha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_ha']['type'] = 'textformatter_list';
  $handler->display->display_options['fields']['field_prf_bio_ha']['settings'] = array(
    'textformatter_type' => 'ul',
    'textformatter_comma_and' => 0,
    'textformatter_comma_full_stop' => 0,
    'textformatter_comma_override' => 0,
    'textformatter_separator_custom' => '',
    'textformatter_separator_custom_tag' => 'span',
    'textformatter_separator_custom_class' => 'textformatter-separator',
    'textformatter_comma_tag' => 'div',
    'textformatter_class' => 'profile-textformatter-list',
  );
  $handler->display->display_options['fields']['field_prf_bio_ha']['delta_offset'] = '0';
  /* Field: Profile: Professional Activities */
  $handler->display->display_options['fields']['field_prf_bio_pa']['id'] = 'field_prf_bio_pa';
  $handler->display->display_options['fields']['field_prf_bio_pa']['table'] = 'field_data_field_prf_bio_pa';
  $handler->display->display_options['fields']['field_prf_bio_pa']['field'] = 'field_prf_bio_pa';
  $handler->display->display_options['fields']['field_prf_bio_pa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_pa']['type'] = 'textformatter_list';
  $handler->display->display_options['fields']['field_prf_bio_pa']['settings'] = array(
    'textformatter_type' => 'ul',
    'textformatter_comma_and' => 0,
    'textformatter_comma_full_stop' => 0,
    'textformatter_comma_override' => 0,
    'textformatter_separator_custom' => '',
    'textformatter_separator_custom_tag' => 'span',
    'textformatter_separator_custom_class' => 'textformatter-separator',
    'textformatter_comma_tag' => 'div',
    'textformatter_class' => 'profile-textformatter-list',
  );
  $handler->display->display_options['fields']['field_prf_bio_pa']['delta_offset'] = '0';
  /* Field: Profile: Publications */
  $handler->display->display_options['fields']['field_prf_bio_pub']['id'] = 'field_prf_bio_pub';
  $handler->display->display_options['fields']['field_prf_bio_pub']['table'] = 'field_data_field_prf_bio_pub';
  $handler->display->display_options['fields']['field_prf_bio_pub']['field'] = 'field_prf_bio_pub';
  $handler->display->display_options['fields']['field_prf_bio_pub']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_pub']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_prf_bio_pub']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_prf_bio_pub']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_prf_bio_pub']['field_api_classes'] = TRUE;
  /* Field: Profile: Talks and Presentations */
  $handler->display->display_options['fields']['field_prf_bio_tp']['id'] = 'field_prf_bio_tp';
  $handler->display->display_options['fields']['field_prf_bio_tp']['table'] = 'field_data_field_prf_bio_tp';
  $handler->display->display_options['fields']['field_prf_bio_tp']['field'] = 'field_prf_bio_tp';
  $handler->display->display_options['fields']['field_prf_bio_tp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_tp']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_prf_bio_tp']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_prf_bio_tp']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_prf_bio_tp']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'profile';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['sorts']['type']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bio' => 'bio',
    'contact' => 'contact',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profile element';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $export['profile_user_elements_extorg'] = $view;

  return $export;
}
