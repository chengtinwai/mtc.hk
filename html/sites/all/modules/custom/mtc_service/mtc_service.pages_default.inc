<?php
/**
 * @file
 * mtc_service.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function mtc_service_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__service';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Service',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'service',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'service' => 'service',
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
  $display->uuid = '90d08091-5cfe-4033-802f-0649f777e1f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-85f16be4-8bfe-4f87-82dd-d066fc2e5117';
    $pane->panel = 'footer_a';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85f16be4-8bfe-4f87-82dd-d066fc2e5117';
    $display->content['new-85f16be4-8bfe-4f87-82dd-d066fc2e5117'] = $pane;
    $display->panels['footer_a'][0] = 'new-85f16be4-8bfe-4f87-82dd-d066fc2e5117';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__service'] = $handler;

  return $export;
}
