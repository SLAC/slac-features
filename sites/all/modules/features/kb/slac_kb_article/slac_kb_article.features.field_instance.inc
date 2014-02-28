<?php
/**
 * @file
 * slac_kb_article.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slac_kb_article_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-kb_article-body'
  $field_instances['node-kb_article-body'] = array(
    'bundle' => 'kb_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-kb_article-field_kb_article_media'
  $field_instances['node-kb_article-field_kb_article_media'] = array(
    'bundle' => 'kb_article',
    'deleted' => 0,
    'description' => 'Please upload or select any media such as images or videos you would like to include in the article.',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'slac_kb_article_image_details',
        ),
        'type' => 'media',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'crop_crop_kb_article_landscape',
        ),
        'type' => 'media',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kb_article_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'epsacrop' => array(
        'styles' => array(
          'crop_landscape' => 0,
          'crop_news_landscape' => 0,
          'crop_portrait' => 0,
          'crop_slac_projects' => 0,
          'crop_slac_sidebar_block' => 0,
          'crop_square' => 0,
          'mini_slideshow_image_style' => 0,
          'slac_blog_image' => 0,
          'slac_blog_image_details' => 0,
          'slac_news_image_details' => 0,
          'slideshow_image_description_bottom' => 0,
        ),
      ),
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv wmv ico',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          0 => 0,
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-kb_article-field_kb_categories'
  $field_instances['node-kb_article-field_kb_categories'] = array(
    'bundle' => 'kb_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'calendar_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kb_categories',
    'label' => 'KB Categories',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('KB Categories');
  t('Media');
  t('Please upload or select any media such as images or videos you would like to include in the article.');

  return $field_instances;
}
