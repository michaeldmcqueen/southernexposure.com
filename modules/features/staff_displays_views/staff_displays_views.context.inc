<?php
/**
 * @file
 * staff_displays_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function staff_displays_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'staff';
  $context->description = '';
  $context->tag = 'Staff';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'staff' => 'staff',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-staff-block' => array(
          'module' => 'views',
          'delta' => 'staff-block',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Staff');
  $export['staff'] = $context;

  return $export;
}
