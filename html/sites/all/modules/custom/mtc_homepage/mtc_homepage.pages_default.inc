<?php
/**
 * @file
 * mtc_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function mtc_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mtc_homepage';
  $page->task = 'page';
  $page->admin_title = 'homepage';
  $page->admin_description = 'Homepage of mtc.hk';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mtc_homepage__panel_context_35d6b9e5-45bd-41d7-854c-0627fc1124bc';
  $handler->task = 'page';
  $handler->subtask = 'mtc_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
    'overrides' => array(
      'smartphone' => array(),
      'tablet' => array(),
      'standard' => array(),
    ),
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
  $display->uuid = '260eb72c-382c-4b03-a394-af473f489137';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-15cf8162-48f8-4c91-a7f1-4c92ac7a7261';
    $pane->panel = 'header_a';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15cf8162-48f8-4c91-a7f1-4c92ac7a7261';
    $display->content['new-15cf8162-48f8-4c91-a7f1-4c92ac7a7261'] = $pane;
    $display->panels['header_a'][0] = 'new-15cf8162-48f8-4c91-a7f1-4c92ac7a7261';
    $pane = new stdClass();
    $pane->pid = 'new-dd605c8e-49b4-4ca2-bf36-68c47bf66b38';
    $pane->panel = 'header_b';
    $pane->type = 'views_panes';
    $pane->subtype = 'frontpage_slideshow-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dd605c8e-49b4-4ca2-bf36-68c47bf66b38';
    $display->content['new-dd605c8e-49b4-4ca2-bf36-68c47bf66b38'] = $pane;
    $display->panels['header_b'][0] = 'new-dd605c8e-49b4-4ca2-bf36-68c47bf66b38';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mtc_homepage'] = $page;

  return $pages;

}
