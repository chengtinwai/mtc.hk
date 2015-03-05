<?php
/**
 * @file
 * mtc_homepage.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mtc_homepage_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-fieldable_panels_pane-field_content'
  $field_instances['fieldable_panels_pane-fieldable_panels_pane-field_content'] = array(
    'bundle' => 'fieldable_panels_pane',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_instances;
}
