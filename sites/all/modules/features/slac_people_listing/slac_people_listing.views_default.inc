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
    'bio' => 'bio',
    'contact' => 'contact',
    'social_media' => 'social_media',
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
  $handler->display->display_options['title'] = '<none>';
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
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['url']['element_wrapper_class'] = 'url-link';
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_prf_contact_photo']['id'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['table'] = 'field_data_field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['field'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_prf_contact_photo']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_photo']['alter']['path'] = '[url]';
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
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['title'] = 'People Listing: %1';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_prf_contact_lname_value']['validate']['fail'] = 'empty';
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
    'image_style' => 'crop_portrait',
    'image_link' => 'content',
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

  return $export;
}
