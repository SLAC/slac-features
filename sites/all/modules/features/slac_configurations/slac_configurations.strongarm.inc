<?php
/**
 * @file
 * slac_configurations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_configurations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ignore_words';
  $strongarm->value = 'a, an, as, at, before, but, by, from, is, in, into, like, of, off, on, onto, per, since, than, this, that, to, up, via, with';
  $export['pathauto_ignore_words'] = $strongarm;

  return $export;
}
