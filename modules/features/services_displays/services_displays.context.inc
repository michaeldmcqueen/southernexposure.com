<?php
/**
 * @file
 * services_displays.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function services_displays_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'services';
  $context->description = '';
  $context->tag = 'Services';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'case_study' => 'case_study',
        'service' => 'service',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'services' => 'services',
        'case-studies' => 'case-studies',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Services');
  $export['services'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'services_sort';
  $context->description = '';
  $context->tag = 'Services';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'services' => 'services',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-services-block_1' => array(
          'module' => 'views',
          'delta' => 'services-block_1',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Services');
  $export['services_sort'] = $context;

  return $export;
}
