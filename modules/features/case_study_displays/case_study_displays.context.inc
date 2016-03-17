<?php
/**
 * @file
 * case_study_displays.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function case_study_displays_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'case_studies';
  $context->description = 'Case Studies - List View';
  $context->tag = 'Case Studies';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'case-studies' => 'case-studies',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-case_studies-block' => array(
          'module' => 'views',
          'delta' => 'case_studies-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Case Studies');
  t('Case Studies - List View');
  $export['case_studies'] = $context;

  return $export;
}
