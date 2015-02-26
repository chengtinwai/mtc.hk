<?php
/**
 * @file
 * mtc_frontpage_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mtc_frontpage_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mtc_frontpage_slideshow_node_info() {
  $items = array(
    'frontpage_slideshow' => array(
      'name' => t('Frontpage Slideshow'),
      'base' => 'node_content',
      'description' => t('Frontpage Slideshow'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
