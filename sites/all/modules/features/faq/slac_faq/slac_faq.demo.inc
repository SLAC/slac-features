<?php
/**
 * @file
 * Code for the SLAC FAQ feature.
 */

/**
 * Installation callback
 * Adding demo FAQ categories
 */
function slac_faq_demo_content() {
  $term = new stdClass();
  $term->vid = $vid;
  $term->name = $name;
  $term->format = 'plain_text';
  
  
}