<?php
/**
 * @file
 * header_images_content_type.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function header_images_content_type_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_image_context';
  $context->description = '';
  $context->tag = 'Header Images';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-header_views-block' => array(
          'module' => 'views',
          'delta' => 'header_views-block',
          'region' => 'preface',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Images');
  $export['header_image_context'] = $context;

  return $export;
}
