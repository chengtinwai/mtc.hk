<?php
/**
 * @file
 * mtc_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mtc_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mtc_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function mtc_homepage_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_prouct
  $nodequeues['featured_prouct'] = array(
    'name' => 'featured_prouct',
    'title' => 'Featured Prouct',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'product',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: featured_service
  $nodequeues['featured_service'] = array(
    'name' => 'featured_service',
    'title' => 'Featured Service',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'service',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
