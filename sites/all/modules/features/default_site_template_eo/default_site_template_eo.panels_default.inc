<?php
/**
 * @file
 * default_site_template_eo.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function default_site_template_eo_default_panels_mini() {
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
  $display->uuid = 'e2ae1222-8df4-4652-805d-78ad79d7f1a1';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e857b9fa-0cf8-43c4-8795-29d296d4162f';
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
  $pane->uuid = 'e857b9fa-0cf8-43c4-8795-29d296d4162f';
  $display->content['new-e857b9fa-0cf8-43c4-8795-29d296d4162f'] = $pane;
  $display->panels['left'][0] = 'new-e857b9fa-0cf8-43c4-8795-29d296d4162f';
  $pane = new stdClass();
  $pane->pid = 'new-d5a58f74-44c3-472d-ba6e-6d0bd71d2c40';
  $pane->panel = 'left';
  $pane->type = 'site_url_address';
  $pane->subtype = 'site_url_address';
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
  $pane->uuid = 'd5a58f74-44c3-472d-ba6e-6d0bd71d2c40';
  $display->content['new-d5a58f74-44c3-472d-ba6e-6d0bd71d2c40'] = $pane;
  $display->panels['left'][1] = 'new-d5a58f74-44c3-472d-ba6e-6d0bd71d2c40';
  $pane = new stdClass();
  $pane->pid = 'new-8bc13eb4-51f1-4318-b794-55ab723bdbaf';
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
  $pane->uuid = '8bc13eb4-51f1-4318-b794-55ab723bdbaf';
  $display->content['new-8bc13eb4-51f1-4318-b794-55ab723bdbaf'] = $pane;
  $display->panels['left'][2] = 'new-8bc13eb4-51f1-4318-b794-55ab723bdbaf';
  $pane = new stdClass();
  $pane->pid = 'new-126e742b-d9e6-4f1e-899e-ab3dae4e272d';
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
  $pane->uuid = '126e742b-d9e6-4f1e-899e-ab3dae4e272d';
  $display->content['new-126e742b-d9e6-4f1e-899e-ab3dae4e272d'] = $pane;
  $display->panels['left'][3] = 'new-126e742b-d9e6-4f1e-899e-ab3dae4e272d';
  $pane = new stdClass();
  $pane->pid = 'new-be73db01-0301-4a53-89b3-ee3e9bffad6a';
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
  $pane->uuid = 'be73db01-0301-4a53-89b3-ee3e9bffad6a';
  $display->content['new-be73db01-0301-4a53-89b3-ee3e9bffad6a'] = $pane;
  $display->panels['right'][0] = 'new-be73db01-0301-4a53-89b3-ee3e9bffad6a';
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
  $display->uuid = '27b72d37-3a6a-4620-9dc9-63f0c3761800';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'second_footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3860417c-30a8-4430-9b6a-344df2134f92';
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
  $pane->uuid = '3860417c-30a8-4430-9b6a-344df2134f92';
  $display->content['new-3860417c-30a8-4430-9b6a-344df2134f92'] = $pane;
  $display->panels['left'][0] = 'new-3860417c-30a8-4430-9b6a-344df2134f92';
  $pane = new stdClass();
  $pane->pid = 'new-b9b51ee8-30d6-434c-950c-6534a79a56bf';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-menu-1';
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
  $pane->uuid = 'b9b51ee8-30d6-434c-950c-6534a79a56bf';
  $display->content['new-b9b51ee8-30d6-434c-950c-6534a79a56bf'] = $pane;
  $display->panels['left'][1] = 'new-b9b51ee8-30d6-434c-950c-6534a79a56bf';
  $pane = new stdClass();
  $pane->pid = 'new-5bede93e-a0d2-485a-ab0b-6b945167e3dd';
  $pane->panel = 'left';
  $pane->type = 'site_footer_address';
  $pane->subtype = 'site_footer_address';
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
  $pane->uuid = '5bede93e-a0d2-485a-ab0b-6b945167e3dd';
  $display->content['new-5bede93e-a0d2-485a-ab0b-6b945167e3dd'] = $pane;
  $display->panels['left'][2] = 'new-5bede93e-a0d2-485a-ab0b-6b945167e3dd';
  $pane = new stdClass();
  $pane->pid = 'new-e907f7cb-1e23-44f8-9cb8-eff349d866c2';
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
  $pane->uuid = 'e907f7cb-1e23-44f8-9cb8-eff349d866c2';
  $display->content['new-e907f7cb-1e23-44f8-9cb8-eff349d866c2'] = $pane;
  $display->panels['right'][0] = 'new-e907f7cb-1e23-44f8-9cb8-eff349d866c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['second_footer'] = $mini;

  return $export;
}
