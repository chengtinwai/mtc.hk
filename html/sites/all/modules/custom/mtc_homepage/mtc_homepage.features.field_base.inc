<?php
/**
 * @file
 * mtc_homepage.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mtc_homepage_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_content'
  $field_bases['field_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
