<?php
/**
 * @file
 * mtc_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mtc_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mtc_homepage_context';
  $context->description = '';
  $context->tag = 'Homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-frontpage_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'frontpage_slideshow-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-26c51822241d1958ea8a91e7c3cdebe3' => array(
          'module' => 'views',
          'delta' => '26c51822241d1958ea8a91e7c3cdebe3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-c0ffe394d9692830e16635df3d1c6b69' => array(
          'module' => 'views',
          'delta' => 'c0ffe394d9692830e16635df3d1c6b69',
          'region' => 'content',
          'weight' => '-9',
        ),
        'webform-client-block-5' => array(
          'module' => 'webform',
          'delta' => 'client-block-5',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage');
  $export['mtc_homepage_context'] = $context;

  return $export;
}
