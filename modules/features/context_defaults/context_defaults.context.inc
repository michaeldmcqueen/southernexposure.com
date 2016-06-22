<?php
/**
 * @file
 * context_defaults.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_defaults_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Used everywhere for every user';
  $context->tag = 'global';
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
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'main_nav',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'help',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used everywhere for every user');
  t('global');
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_admin';
  $context->description = 'User Tabs and such';
  $context->tag = 'global';
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
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'content editor' => 'content editor',
        'manager' => 'manager',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-tabs' => array(
          'module' => 'delta_blocks',
          'delta' => 'tabs',
          'region' => 'help',
          'weight' => '-10',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'help',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('User Tabs and such');
  t('global');
  $export['global_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_sidebar';
  $context->description = '';
  $context->tag = 'global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '20',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  $export['global_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'login_tabs';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*' => 'user/*',
        'user' => 'user',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-tabs' => array(
          'module' => 'delta_blocks',
          'delta' => 'tabs',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['login_tabs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'service_request_sidebar';
  $context->description = '';
  $context->tag = 'global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~contact-us' => '~contact-us',
        '~request-landscape-maintenance' => '~request-landscape-maintenance',
        '~request-proposal' => '~request-proposal',
        '~request-sprinkler-service' => '~request-sprinkler-service',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-23',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  $export['service_request_sidebar'] = $context;

  return $export;
}
