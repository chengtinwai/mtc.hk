<?php
/**
 * @file
 * mtc_product.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mtc_product_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Dermafiller',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2a2ffe90-909c-4648-94fc-ea7757a35aa5',
    'vocabulary_machine_name' => 'product_type',
  );
  $terms[] = array(
    'name' => 'Cosmetics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2d23842d-316a-4123-9407-7c4f27ebafe3',
    'vocabulary_machine_name' => 'product_type',
  );
  $terms[] = array(
    'name' => 'Lasers',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '941a1b73-7810-439e-b371-bc8f36b7cdd4',
    'vocabulary_machine_name' => 'product_type',
  );
  $terms[] = array(
    'name' => 'Aesthetic Product',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c9cedc41-c152-40f0-9292-62eb14abd472',
    'vocabulary_machine_name' => 'product_type',
  );
  return $terms;
}
