<?php
/**
 * @file
 * front.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function front_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Home Page Blocks';
  $context->tag = 'front';
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
        'views-case_studies-block_1' => array(
          'module' => 'views',
          'delta' => 'case_studies-block_1',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home Page Blocks');
  t('front');
  $export['front'] = $context;

  return $export;
}