<?php
/**
 * @file
 * slac_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_profile_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'edit_profile';
  $page->task = 'page';
  $page->admin_title = 'Edit profile';
  $page->admin_description = '';
  $page->path = 'node/%node/edit-profile';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'landing_page' => 'landing_page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'Profile',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Edit Profile',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_edit_profile_http_response';
  $handler->task = 'page';
  $handler->subtask = 'edit_profile';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'user',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['edit_profile'] = $page;

  return $pages;

}
