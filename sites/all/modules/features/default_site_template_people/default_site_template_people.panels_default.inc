<?php
/**
 * @file
 * default_site_template_people.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function default_site_template_people_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'Page elements';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'two_col';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '74.94863443995015',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Footer text',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'footer-text',
      ),
      1 => array(
        'type' => 'column',
        'width' => '25.051365560049845',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_logo',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'footer_logo' => array(
        'type' => 'region',
        'title' => 'Footer Logo',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'footer-logo',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_menu',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'footer_menu' => array(
        'type' => 'region',
        'title' => 'Footer Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'footer-menu',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'footer_logo' => NULL,
      'footer_menu' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d1bc8ee-a1a0-43ff-9544-9470181678da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-26a929d8-300f-4c74-9b38-da6b5f3aa87c';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Footer text',
      'title' => '',
      'body' => '<a href="http://www.slac.stanford.edu">Slac National Accelerator Laboratory</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26a929d8-300f-4c74-9b38-da6b5f3aa87c';
    $display->content['new-26a929d8-300f-4c74-9b38-da6b5f3aa87c'] = $pane;
    $display->panels['left'][0] = 'new-26a929d8-300f-4c74-9b38-da6b5f3aa87c';
    $pane = new stdClass();
    $pane->pid = 'new-4eba65ae-cd47-46a3-a4cc-d55e0457cf30';
    $pane->panel = 'left';
    $pane->type = 'site_address';
    $pane->subtype = 'site_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4eba65ae-cd47-46a3-a4cc-d55e0457cf30';
    $display->content['new-4eba65ae-cd47-46a3-a4cc-d55e0457cf30'] = $pane;
    $display->panels['left'][1] = 'new-4eba65ae-cd47-46a3-a4cc-d55e0457cf30';
    $pane = new stdClass();
    $pane->pid = 'new-e9cefc8c-8886-4936-841f-e18457a61d61';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Footer text 2',
      'title' => '',
      'body' => '<p><span>Operated by <a href="http://www.stanford.edu" target="_blank">Stanford University</a> for the <a href="http://science.energy.gov" target="_blank">U.S. Department of Energy Office of Science</a></span></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e9cefc8c-8886-4936-841f-e18457a61d61';
    $display->content['new-e9cefc8c-8886-4936-841f-e18457a61d61'] = $pane;
    $display->panels['left'][2] = 'new-e9cefc8c-8886-4936-841f-e18457a61d61';
    $pane = new stdClass();
    $pane->pid = 'new-3163452c-e405-4136-8a52-dc201f940519';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3163452c-e405-4136-8a52-dc201f940519';
    $display->content['new-3163452c-e405-4136-8a52-dc201f940519'] = $pane;
    $display->panels['left'][3] = 'new-3163452c-e405-4136-8a52-dc201f940519';
    $pane = new stdClass();
    $pane->pid = 'new-1ac7f0d3-98ab-4296-b26b-08dca7d713de';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Footer logo',
      'title' => '',
      'body' => '<p><a href="http://www.stanford.edu" target="_blank"><img alt="stanford-logo" src="/sites/all/modules/features/default_site_template/stanford-logo.png" /></a><a href="http://science.energy.gov" target="_blank"><img alt="doe-logo" src="/sites/all/modules/features/default_site_template/doe-logo.png" /></a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ac7f0d3-98ab-4296-b26b-08dca7d713de';
    $display->content['new-1ac7f0d3-98ab-4296-b26b-08dca7d713de'] = $pane;
    $display->panels['right'][0] = 'new-1ac7f0d3-98ab-4296-b26b-08dca7d713de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
