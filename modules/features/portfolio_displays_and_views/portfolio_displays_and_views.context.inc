<?php
/**
 * @file
 * portfolio_displays_and_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function portfolio_displays_and_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio';
  $context->description = '';
  $context->tag = 'portfolio';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'portfolio' => 'portfolio',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portfolio-block' => array(
          'module' => 'views',
          'delta' => 'portfolio-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portfolio');
  $export['portfolio'] = $context;

  return $export;
}
