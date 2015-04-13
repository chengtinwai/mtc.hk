<?php
/**
 * @file
 * mtc_homepage.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mtc_homepage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Homepage intro';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'homepage_intro';
  $fe_block_boxes->body = '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse id fermentum mi. Donec ac auctor ipsum. Duis euismod lobortis est, nec accumsan elit auctor nec. Morbi tempus mi vitae nulla ultrices pellentesque. Nullam non rutrum erat. Nulla congue, massa et venenatis iaculis, tortor metus hendrerit est, eget posuere lacus tortor non velit. Morbi sed maximus massa, et rutrum est.</p>
';

  $export['homepage_intro'] = $fe_block_boxes;

  return $export;
}
