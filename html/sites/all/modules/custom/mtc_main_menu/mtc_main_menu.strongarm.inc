<?php
/**
 * @file
 * mtc_main_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mtc_main_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-enabled-mtc_theme';
  $strongarm->value = 1;
  $export['stickynav-enabled-mtc_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-selector-mtc_theme';
  $strongarm->value = '#header';
  $export['stickynav-selector-mtc_theme'] = $strongarm;

  return $export;
}
