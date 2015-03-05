<?php
/**
 * @file
 * mtc_homepage.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mtc_homepage_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
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
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3a2d74bc-a24c-4119-8772-54f631e7a294';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a38cffb-becc-47c6-86ee-e59ce27feca6';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:d9b7176f-45de-40a4-924d-8aa2979bf9d6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a38cffb-becc-47c6-86ee-e59ce27feca6';
    $display->content['new-0a38cffb-becc-47c6-86ee-e59ce27feca6'] = $pane;
    $display->panels['left'][0] = 'new-0a38cffb-becc-47c6-86ee-e59ce27feca6';
    $pane = new stdClass();
    $pane->pid = 'new-9e076c52-e21b-4720-ac73-e7f1e8ff92ab';
    $pane->panel = 'middle';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:fdc256bf-7b8e-4e19-ad59-6e2979f3d2a2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9e076c52-e21b-4720-ac73-e7f1e8ff92ab';
    $display->content['new-9e076c52-e21b-4720-ac73-e7f1e8ff92ab'] = $pane;
    $display->panels['middle'][0] = 'new-9e076c52-e21b-4720-ac73-e7f1e8ff92ab';
    $pane = new stdClass();
    $pane->pid = 'new-b4a4decf-2714-4cd2-8555-64a8b84f4b49';
    $pane->panel = 'right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:8c4765e0-9191-4cd3-b241-4045b9fe1d7d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4a4decf-2714-4cd2-8555-64a8b84f4b49';
    $display->content['new-b4a4decf-2714-4cd2-8555-64a8b84f4b49'] = $pane;
    $display->panels['right'][0] = 'new-b4a4decf-2714-4cd2-8555-64a8b84f4b49';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
