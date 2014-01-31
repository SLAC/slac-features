<?php
/**
 * @file
 * slac_profile_elements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slac_profile_elements_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profile_elements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile elements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Blog */
  $handler = $view->new_display('panel_pane', 'Blog', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['display_description'] = 'Profile blog block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'l, F j, Y';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Posted by [name] [created]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_slac_blog_image']['id'] = 'field_slac_blog_image';
  $handler->display->display_options['fields']['field_slac_blog_image']['table'] = 'field_data_field_slac_blog_image';
  $handler->display->display_options['fields']['field_slac_blog_image']['field'] = 'field_slac_blog_image';
  $handler->display->display_options['fields']['field_slac_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_slac_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slac_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slac_blog_image']['settings'] = array(
    'image_style' => 'profile_home_blog_image',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uid_1']['field'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['value'] = '';
  $handler->display->display_options['filters']['uid_1']['group'] = 1;
  $handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['operator_id'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Tags (field_slac_blog_tags) */
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['id'] = 'field_slac_blog_tags_tid';
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['table'] = 'field_data_field_slac_blog_tags';
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['field'] = 'field_slac_blog_tags_tid';
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['expose']['operator_id'] = 'field_slac_blog_tags_tid_op';
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['expose']['operator'] = 'field_slac_blog_tags_tid_op';
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['expose']['identifier'] = 'field_slac_blog_tags_tid';
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_slac_blog_tags_tid']['vocabulary'] = 'slac_blog_tags';
  $handler->display->display_options['pane_category']['name'] = 'Profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['profile_elements'] = $view;

  $view = new view();
  $view->name = 'profile_user_elements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Profile user elements';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['uid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Profile';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'User Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Profile';
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

  /* Display: Profile */
  $handler = $view->new_display('panel_pane', 'Profile', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Profile';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'profile-info-brief';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_prf_contact_photo']['id'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['table'] = 'field_data_field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['field'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prf_contact_photo']['settings'] = array(
    'image_style' => 'profile_home_user_image',
    'image_link' => '',
  );
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_prf_contact_title']['id'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['table'] = 'field_data_field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['field'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_title']['hide_empty'] = TRUE;
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_prf_contact_fname']['id'] = 'field_prf_contact_fname';
  $handler->display->display_options['fields']['field_prf_contact_fname']['table'] = 'field_data_field_prf_contact_fname';
  $handler->display->display_options['fields']['field_prf_contact_fname']['field'] = 'field_prf_contact_fname';
  $handler->display->display_options['fields']['field_prf_contact_fname']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_fname']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_prf_contact_lname']['id'] = 'field_prf_contact_lname';
  $handler->display->display_options['fields']['field_prf_contact_lname']['table'] = 'field_data_field_prf_contact_lname';
  $handler->display->display_options['fields']['field_prf_contact_lname']['field'] = 'field_prf_contact_lname';
  $handler->display->display_options['fields']['field_prf_contact_lname']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_lname']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_prf_contact_fname] [field_prf_contact_lname]';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'profile-name';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Profile: Affiliation */
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['id'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['table'] = 'field_data_field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['field'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['alter']['text'] = '[field_prf_contact_title], [field_prf_contact_affiliation]';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_label_class'] = 'profile-affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['element_label_colon'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'Profile URL';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Bio */
  $handler->display->display_options['fields']['field_prf_bio_bio']['id'] = 'field_prf_bio_bio';
  $handler->display->display_options['fields']['field_prf_bio_bio']['table'] = 'field_data_field_prf_bio_bio';
  $handler->display->display_options['fields']['field_prf_bio_bio']['field'] = 'field_prf_bio_bio';
  $handler->display->display_options['fields']['field_prf_bio_bio']['label'] = '';
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['text'] = '<div class="short-bio-text">[field_prf_bio_bio]</div><div class="view-entire-profile"><a href="[url]">View entire profile</a></div>';
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['more_link_text'] = 'View entire profile';
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['more_link_path'] = 'profile';
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_prf_bio_bio']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_prf_bio_bio']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'profile';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['sorts']['type']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Profile';
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
  /* Field: Profile: Photo */
  $handler->display->display_options['fields']['field_prf_contact_photo']['id'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['table'] = 'field_data_field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['field'] = 'field_prf_contact_photo';
  $handler->display->display_options['fields']['field_prf_contact_photo']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prf_contact_photo']['settings'] = array(
    'image_style' => 'profile_home_user_image',
    'image_link' => '',
  );
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_prf_contact_title']['id'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['table'] = 'field_data_field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['field'] = 'field_prf_contact_title';
  $handler->display->display_options['fields']['field_prf_contact_title']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_title']['element_label_colon'] = FALSE;
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_prf_contact_fname']['id'] = 'field_prf_contact_fname';
  $handler->display->display_options['fields']['field_prf_contact_fname']['table'] = 'field_data_field_prf_contact_fname';
  $handler->display->display_options['fields']['field_prf_contact_fname']['field'] = 'field_prf_contact_fname';
  $handler->display->display_options['fields']['field_prf_contact_fname']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prf_contact_fname']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_prf_contact_lname']['id'] = 'field_prf_contact_lname';
  $handler->display->display_options['fields']['field_prf_contact_lname']['table'] = 'field_data_field_prf_contact_lname';
  $handler->display->display_options['fields']['field_prf_contact_lname']['field'] = 'field_prf_contact_lname';
  $handler->display->display_options['fields']['field_prf_contact_lname']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_lname']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_prf_contact_fname] [field_prf_contact_lname]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Profile: Affiliation */
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['id'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['table'] = 'field_data_field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['field'] = 'field_prf_contact_affiliation';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_prf_contact_affiliation']['alter']['text'] = '<div class="profile-name">[nothing]</div>
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'User Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bio' => 'bio',
    'contact' => 'contact',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profile';
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
  $export['profile_user_elements'] = $view;

  return $export;
}
