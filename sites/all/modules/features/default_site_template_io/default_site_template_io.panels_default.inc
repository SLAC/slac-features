<?php
/**
 * @file
 * default_site_template_io.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function default_site_template_io_default_panels_mini() {
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
  $display->uuid = '4a06fdc6-ad29-474b-b859-61b22c025c2a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f3cc5df9-76a1-40e7-9efa-31e1414ab66a';
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
  $pane->uuid = 'f3cc5df9-76a1-40e7-9efa-31e1414ab66a';
  $display->content['new-f3cc5df9-76a1-40e7-9efa-31e1414ab66a'] = $pane;
  $display->panels['left'][0] = 'new-f3cc5df9-76a1-40e7-9efa-31e1414ab66a';
  $pane = new stdClass();
  $pane->pid = 'new-de6633ba-2d6a-49c0-9b1b-35ce52685a3a';
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
  $pane->uuid = 'de6633ba-2d6a-49c0-9b1b-35ce52685a3a';
  $display->content['new-de6633ba-2d6a-49c0-9b1b-35ce52685a3a'] = $pane;
  $display->panels['left'][1] = 'new-de6633ba-2d6a-49c0-9b1b-35ce52685a3a';
  $pane = new stdClass();
  $pane->pid = 'new-bb54bd2d-7b1a-459f-b183-704978621e7c';
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
  $pane->uuid = 'bb54bd2d-7b1a-459f-b183-704978621e7c';
  $display->content['new-bb54bd2d-7b1a-459f-b183-704978621e7c'] = $pane;
  $display->panels['left'][2] = 'new-bb54bd2d-7b1a-459f-b183-704978621e7c';
  $pane = new stdClass();
  $pane->pid = 'new-52b6cafb-985a-41a9-b0e0-f450b60d3d97';
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
  $pane->uuid = '52b6cafb-985a-41a9-b0e0-f450b60d3d97';
  $display->content['new-52b6cafb-985a-41a9-b0e0-f450b60d3d97'] = $pane;
  $display->panels['left'][3] = 'new-52b6cafb-985a-41a9-b0e0-f450b60d3d97';
  $pane = new stdClass();
  $pane->pid = 'new-edbefd1c-a63c-4ce9-b54e-a48175280448';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Footer logo',
    'title' => '',
    'body' => '<p><a href="http://www.stanford.edu" target="_blank"><img alt="stanford-logo" src="/sites/all/modules/features/default_site_template_io/stanford-logo.png" /></a><a href="http://science.energy.gov" target="_blank"><img alt="doe-logo" src="/sites/all/modules/features/default_site_template_io/doe-logo.png" /></a></p>',
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
  $pane->uuid = 'edbefd1c-a63c-4ce9-b54e-a48175280448';
  $display->content['new-edbefd1c-a63c-4ce9-b54e-a48175280448'] = $pane;
  $display->panels['right'][0] = 'new-edbefd1c-a63c-4ce9-b54e-a48175280448';
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
  $display->uuid = 'b596b504-4764-4489-b2c0-ca1b887e8fd6';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'second_footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1515ef35-bce6-4ed2-8630-a3242856c840';
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
  $pane->uuid = '1515ef35-bce6-4ed2-8630-a3242856c840';
  $display->content['new-1515ef35-bce6-4ed2-8630-a3242856c840'] = $pane;
  $display->panels['left'][0] = 'new-1515ef35-bce6-4ed2-8630-a3242856c840';
  $pane = new stdClass();
  $pane->pid = 'new-9b04a91c-234d-4eca-8813-0118838bf30e';
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
  $pane->uuid = '9b04a91c-234d-4eca-8813-0118838bf30e';
  $display->content['new-9b04a91c-234d-4eca-8813-0118838bf30e'] = $pane;
  $display->panels['left'][1] = 'new-9b04a91c-234d-4eca-8813-0118838bf30e';
  $pane = new stdClass();
  $pane->pid = 'new-6bf222ca-f76a-4501-bc31-843c5f23756f';
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
  $pane->uuid = '6bf222ca-f76a-4501-bc31-843c5f23756f';
  $display->content['new-6bf222ca-f76a-4501-bc31-843c5f23756f'] = $pane;
  $display->panels['left'][2] = 'new-6bf222ca-f76a-4501-bc31-843c5f23756f';
  $pane = new stdClass();
  $pane->pid = 'new-34d32089-9f3f-4df4-801b-65179e576de5';
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
  $pane->uuid = '34d32089-9f3f-4df4-801b-65179e576de5';
  $display->content['new-34d32089-9f3f-4df4-801b-65179e576de5'] = $pane;
  $display->panels['right'][0] = 'new-34d32089-9f3f-4df4-801b-65179e576de5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['second_footer'] = $mini;

  return $export;
}
