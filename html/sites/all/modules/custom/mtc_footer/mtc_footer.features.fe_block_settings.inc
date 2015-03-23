<?php
/**
 * @file
 * mtc_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mtc_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_contact_us'] = array(
    'cache' => -1,
    'css_class' => 'block-footer-menu',
    'custom' => 0,
    'machine_name' => 'footer_contact_us',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mtc_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'mtc_theme',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact Us',
    'visibility' => 0,
  );

  $export['block-footer_our_product'] = array(
    'cache' => -1,
    'css_class' => 'block-footer-menu',
    'custom' => 0,
    'machine_name' => 'footer_our_product',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mtc_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'mtc_theme',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Our Products',
    'visibility' => 0,
  );

  $export['block-footer_our_services'] = array(
    'cache' => -1,
    'css_class' => 'block-footer-menu',
    'custom' => 0,
    'machine_name' => 'footer_our_services',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mtc_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'mtc_theme',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Our Services',
    'visibility' => 0,
  );

  return $export;
}
