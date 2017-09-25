<?php
/**
 * @file
 * f1_fixes.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function f1_fixes_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'default';
  $linkit_profile->admin_title = 'Default';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'full_html' => 'full_html',
      'filtered_html' => 'filtered_html',
      'plain_text' => 'plain_text',
    ),
    'search_plugins' => array(
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:profile2' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:fieldable_panels_pane' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'block_with_brochures' => 0,
        'content_block' => 0,
        'content_block_large_image' => 0,
        'content_block_with_links' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_page' => 0,
        'comment_node_blog' => 0,
        'comment_node_slac_sc_catalog_item' => 0,
        'comment_node_event' => 0,
        'comment_node_faq' => 0,
        'comment_node_kb_article' => 0,
        'comment_node_landing_page' => 0,
        'comment_node_slac_news' => 0,
        'comment_node_newsletter' => 0,
        'comment_node_simplenews' => 0,
        'comment_node_support_ticket' => 0,
        'comment_node_webform' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:fieldable_panels_pane' => array(
      'result_description' => '',
      'bundles' => array(
        'fieldable_panels_pane' => 0,
        'slac_mini_slideshow' => 0,
        'slideshow_description_bottom' => 0,
        'slac_projects' => 0,
        'share_block' => 0,
        'slac_sidebar_block' => 0,
        'social_media' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'page' => 0,
        'blog' => 0,
        'slac_sc_catalog_item' => 0,
        'event' => 0,
        'faq' => 0,
        'kb_article' => 0,
        'landing_page' => 0,
        'slac_news' => 0,
        'newsletter' => 0,
        'simplenews' => 0,
        'support_ticket' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:profile2' => array(
      'result_description' => '',
      'bundles' => array(
        'bio' => 0,
        'contact' => 0,
        'social_media' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'blog_categories' => 0,
        'newsletter' => 0,
        'event_tags' => 0,
        'news_types' => 0,
        'slac_news_tags' => 0,
        'faq_categories' => 0,
        'kb_categories' => 0,
        'tags' => 0,
        'slac_blog_tags' => 0,
        'slac_sc_category' => 0,
        'slac_sc_eligibility' => 0,
        'slac_sc_self_help' => 0,
        'event_categories' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'imce' => 0,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['default'] = $linkit_profile;

  return $export;
}
