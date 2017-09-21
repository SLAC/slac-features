<?php
/**
 * @file
 * default_site_template_project.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function default_site_template_project_default_panels_mini() {
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
  $display->uuid = '04578ea6-f7de-44ef-a7ec-40f8cdfa96a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2cfdb68f-7808-4210-a308-c417b2256a00';
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
    $pane->uuid = '2cfdb68f-7808-4210-a308-c417b2256a00';
    $display->content['new-2cfdb68f-7808-4210-a308-c417b2256a00'] = $pane;
    $display->panels['left'][0] = 'new-2cfdb68f-7808-4210-a308-c417b2256a00';
    $pane = new stdClass();
    $pane->pid = 'new-787e5a9d-5307-4afa-9ada-ba06c75e240c';
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
    $pane->uuid = '787e5a9d-5307-4afa-9ada-ba06c75e240c';
    $display->content['new-787e5a9d-5307-4afa-9ada-ba06c75e240c'] = $pane;
    $display->panels['left'][1] = 'new-787e5a9d-5307-4afa-9ada-ba06c75e240c';
    $pane = new stdClass();
    $pane->pid = 'new-3d164698-49bd-4b48-a740-1e858a4bd412';
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
    $pane->uuid = '3d164698-49bd-4b48-a740-1e858a4bd412';
    $display->content['new-3d164698-49bd-4b48-a740-1e858a4bd412'] = $pane;
    $display->panels['left'][2] = 'new-3d164698-49bd-4b48-a740-1e858a4bd412';
    $pane = new stdClass();
    $pane->pid = 'new-23ab4f69-c2f1-4f29-9ae5-6980a245bd79';
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
    $pane->uuid = '23ab4f69-c2f1-4f29-9ae5-6980a245bd79';
    $display->content['new-23ab4f69-c2f1-4f29-9ae5-6980a245bd79'] = $pane;
    $display->panels['left'][3] = 'new-23ab4f69-c2f1-4f29-9ae5-6980a245bd79';
    $pane = new stdClass();
    $pane->pid = 'new-6ee3058d-0a78-40c8-8542-2f53ab0e2e17';
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
    $pane->uuid = '6ee3058d-0a78-40c8-8542-2f53ab0e2e17';
    $display->content['new-6ee3058d-0a78-40c8-8542-2f53ab0e2e17'] = $pane;
    $display->panels['right'][0] = 'new-6ee3058d-0a78-40c8-8542-2f53ab0e2e17';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'second_footer';
  $mini->category = 'Page elements';
  $mini->admin_title = 'Second Footer';
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
  $display->uuid = '67a23218-ccb9-49b0-b368-2bffa0315ce5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-90ecffcb-6a22-4511-99d0-e34bb86f8a7e';
    $pane->panel = 'left';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '90ecffcb-6a22-4511-99d0-e34bb86f8a7e';
    $display->content['new-90ecffcb-6a22-4511-99d0-e34bb86f8a7e'] = $pane;
    $display->panels['left'][0] = 'new-90ecffcb-6a22-4511-99d0-e34bb86f8a7e';
    $pane = new stdClass();
    $pane->pid = 'new-6315fd88-5e02-47e5-8415-105c37b69608';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-project';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6315fd88-5e02-47e5-8415-105c37b69608';
    $display->content['new-6315fd88-5e02-47e5-8415-105c37b69608'] = $pane;
    $display->panels['left'][1] = 'new-6315fd88-5e02-47e5-8415-105c37b69608';
    $pane = new stdClass();
    $pane->pid = 'new-8060329b-0b3f-4aa3-b684-d0fd6bf37475';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8060329b-0b3f-4aa3-b684-d0fd6bf37475';
    $display->content['new-8060329b-0b3f-4aa3-b684-d0fd6bf37475'] = $pane;
    $display->panels['left'][2] = 'new-8060329b-0b3f-4aa3-b684-d0fd6bf37475';
    $pane = new stdClass();
    $pane->pid = 'new-6d645b37-454c-4f21-93d6-7b79a9129c2a';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Social icons',
      'title' => '',
      'body' => '<div class="social-icon-block">
	<div class="social-icon-facebook"><a href="http://facebook.com/SLAC.National.Lab">Facebook</a></div>

	<div class="social-icon-twitter"><a href="http://twitter.com/slaclab">Twitter</a></div>

	<div class="social-icon-flickr"><a href="http://www.flickr.com/photos/slaclab">Flickr</a></div>

	<div class="social-icon-googleplus"><a href="https://plus.google.com/+SLAC/">Google+</a></div>

	<div class="social-icon-youtube"><a href="http://youtube.com/slac/">Youtube</a></div>
</div>
',
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
    $pane->uuid = '6d645b37-454c-4f21-93d6-7b79a9129c2a';
    $display->content['new-6d645b37-454c-4f21-93d6-7b79a9129c2a'] = $pane;
    $display->panels['right'][0] = 'new-6d645b37-454c-4f21-93d6-7b79a9129c2a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['second_footer'] = $mini;

  return $export;
}
