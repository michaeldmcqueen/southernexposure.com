<?php
/**
 * @file
 * faq_display_and_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function faq_display_and_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq';
  $context->description = '';
  $context->tag = 'faq';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'frequently-asked-questions' => 'frequently-asked-questions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-faq-block_1' => array(
          'module' => 'views',
          'delta' => 'faq-block_1',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('faq');
  $export['faq'] = $context;

  return $export;
}
