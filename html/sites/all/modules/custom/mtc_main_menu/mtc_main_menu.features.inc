<?php
/**
 * @file
 * mtc_main_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mtc_main_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mtc_main_menu_image_default_styles() {
  $styles = array();

  // Exported image style: product_image_front.
  $styles['product_image_front'] = array(
    'label' => 'Product_image_front',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
