<?php
/**
 * @file
 * mtc_product.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function mtc_product_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__product';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Product',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'product',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'responsive';
  $display->layout_settings = array(
    'regions' => array(
      'header_a' => 'header_a',
      'header_b' => 'header_b',
      'header_c' => 'header_c',
      'subheader_a' => 'subheader_a',
      'subheader_b' => 'subheader_b',
      'subheader_c' => 'subheader_c',
      'navigation' => 'navigation',
      'title' => 'title',
      'body' => 'body',
      'sidebar_a' => 'sidebar_a',
      'sidebar_b' => 'sidebar_b',
      'sidebar_c' => 'sidebar_c',
      'footer_a' => 'footer_a',
      'footer_b' => 'footer_b',
      'footer_c' => 'footer_c',
    ),
    'overrides' => array(),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_a' => NULL,
      'header_b' => NULL,
      'header_c' => NULL,
      'subheader_a' => NULL,
      'subheader_b' => NULL,
      'subheader_c' => NULL,
      'navigation' => NULL,
      'title' => NULL,
      'body' => NULL,
      'sidebar_a' => NULL,
      'sidebar_b' => NULL,
      'sidebar_c' => NULL,
      'footer_a' => NULL,
      'footer_b' => NULL,
      'footer_c' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9d688dab-2798-405e-85a9-a832fb2a451e';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__product'] = $handler;

  return $export;
}
