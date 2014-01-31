<?php
/**
 * @file
 * slac_people_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slac_people_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer demo modules.
  $permissions['administer demo modules'] = array(
    'name' => 'administer demo modules',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'slac_admin_modules',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer panelizer.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page choice.
  $permissions['administer panelizer node landing_page choice'] = array(
    'name' => 'administer panelizer node landing_page choice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page context.
  $permissions['administer panelizer node landing_page context'] = array(
    'name' => 'administer panelizer node landing_page context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page defaults.
  $permissions['administer panelizer node landing_page defaults'] = array(
    'name' => 'administer panelizer node landing_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page layout.
  $permissions['administer panelizer node landing_page layout'] = array(
    'name' => 'administer panelizer node landing_page layout',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page overview.
  $permissions['administer panelizer node landing_page overview'] = array(
    'name' => 'administer panelizer node landing_page overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node landing_page settings.
  $permissions['administer panelizer node landing_page settings'] = array(
    'name' => 'administer panelizer node landing_page settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: slac administer configuration.
  $permissions['slac administer configuration'] = array(
    'name' => 'slac administer configuration',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'slac_configuration',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'panels',
  );

  // Exported permission: create blog content.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create fieldable slideshow_description_bottom.
  $permissions['create fieldable slideshow_description_bottom'] = array(
    'name' => 'create fieldable slideshow_description_bottom',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: create landing_page content.
  $permissions['create landing_page content'] = array(
    'name' => 'create landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog content.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any landing_page content.
  $permissions['delete any landing_page content'] = array(
    'name' => 'delete any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete fieldable slideshow_description_bottom.
  $permissions['delete fieldable slideshow_description_bottom'] = array(
    'name' => 'delete fieldable slideshow_description_bottom',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete own blog content.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own landing_page content.
  $permissions['delete own landing_page content'] = array(
    'name' => 'delete own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any bio profile.
  $permissions['edit any bio profile'] = array(
    'name' => 'edit any bio profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any blog content.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any contact profile.
  $permissions['edit any contact profile'] = array(
    'name' => 'edit any contact profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any landing_page content.
  $permissions['edit any landing_page content'] = array(
    'name' => 'edit any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any social_media profile.
  $permissions['edit any social_media profile'] = array(
    'name' => 'edit any social_media profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit fieldable slideshow_description_bottom.
  $permissions['edit fieldable slideshow_description_bottom'] = array(
    'name' => 'edit fieldable slideshow_description_bottom',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit own bio profile.
  $permissions['edit own bio profile'] = array(
    'name' => 'edit own bio profile',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own blog content.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own contact profile.
  $permissions['edit own contact profile'] = array(
    'name' => 'edit own contact profile',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own landing_page content.
  $permissions['edit own landing_page content'] = array(
    'name' => 'edit own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own social_media profile.
  $permissions['edit own social_media profile'] = array(
    'name' => 'edit own social_media profile',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'profile2',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site owner' => 'site owner',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'site owner' => 'site owner',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any bio profile.
  $permissions['view any bio profile'] = array(
    'name' => 'view any bio profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any contact profile.
  $permissions['view any contact profile'] = array(
    'name' => 'view any contact profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any social_media profile.
  $permissions['view any social_media profile'] = array(
    'name' => 'view any social_media profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own bio profile.
  $permissions['view own bio profile'] = array(
    'name' => 'view own bio profile',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own contact profile.
  $permissions['view own contact profile'] = array(
    'name' => 'view own contact profile',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own social_media profile.
  $permissions['view own social_media profile'] = array(
    'name' => 'view own social_media profile',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

    // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'metatag',
  );

  return $permissions;
}
