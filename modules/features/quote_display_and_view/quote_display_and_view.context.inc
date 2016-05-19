<?php
/**
 * @file
 * quote_display_and_view.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function quote_display_and_view_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clone_of_quotes';
  $context->description = '';
  $context->tag = 'Quotes';
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
        'views-quotes-block' => array(
          'module' => 'views',
          'delta' => 'quotes-block',
          'region' => 'frontquote',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Quotes');
  $export['clone_of_quotes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'quotes';
  $context->description = '';
  $context->tag = 'Quotes';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
        '~batch' => '~batch',
        '~node/add*' => '~node/add*',
        '~node/*/*' => '~node/*/*',
        '~file*' => '~file*',
        '~user/*/*' => '~user/*/*',
        '~taxonomy*' => '~taxonomy*',
        '~<front>' => '~<front>',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-quotes-block' => array(
          'module' => 'views',
          'delta' => 'quotes-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Quotes');
  $export['quotes'] = $context;

  return $export;
}
