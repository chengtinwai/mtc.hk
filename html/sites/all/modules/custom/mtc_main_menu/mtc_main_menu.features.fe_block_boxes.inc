<?php
/**
 * @file
 * mtc_main_menu.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mtc_main_menu_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Feedback block slider';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'feedback_block';
  $fe_block_boxes->body = '<p>Whatsapp 123123</p>

<p>QR code</p>
';

  $export['feedback_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'header contact info';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'header_contact_info';
  $fe_block_boxes->body = '<p>whatsapp 123123 wechat 123123</p>
';

  $export['header_contact_info'] = $fe_block_boxes;

  return $export;
}
