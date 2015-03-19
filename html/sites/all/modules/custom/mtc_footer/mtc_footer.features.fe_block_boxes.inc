<?php
/**
 * @file
 * mtc_footer.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mtc_footer_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact Us';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_contact_us';
  $fe_block_boxes->body = '<p>abc street</p>

<p>111111</p>
';

  $export['footer_contact_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Our Products';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_our_product';
  $fe_block_boxes->body = '<p>Our Product 1</p>

<p>Our Product 2<br />
&nbsp;</p>
';

  $export['footer_our_product'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Our Services';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_our_services';
  $fe_block_boxes->body = '<p>Our service 1</p>

<p>out service 2</p>
';

  $export['footer_our_services'] = $fe_block_boxes;

  return $export;
}
