<?php
/**
 * @file
 * slac_newsletter_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_newsletter_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'SLAC',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1904bb9e-684a-464d-93d6-ae2c5bc64e3a',
    'vocabulary_machine_name' => 'newsletter',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'X-Ray',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4d9fe570-5d6c-46ff-b112-bf4cb989a689',
    'vocabulary_machine_name' => 'newsletter',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'laser',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '57338cf5-46f3-48ad-ab1f-70ebb0ad09eb',
    'vocabulary_machine_name' => 'newsletter',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'science',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7b2ccd1d-b88d-4e72-bf76-14f835316a09',
    'vocabulary_machine_name' => 'newsletter',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'research',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd1f56c22-28f7-4e88-b775-703e1a08834c',
    'vocabulary_machine_name' => 'newsletter',
    'metatags' => array(),
  );
  return $terms;
}
