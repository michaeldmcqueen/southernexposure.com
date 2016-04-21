<?php
/**
 * @file
 * article_views_and_displays.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function article_views_and_displays_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clone_of_news';
  $context->description = '';
  $context->tag = 'news';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_tips-block_2' => array(
          'module' => 'views',
          'delta' => 'news_tips-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('news');
  $export['clone_of_news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = '';
  $context->tag = 'news';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-articles' => 'news-articles',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_tips-block_1' => array(
          'module' => 'views',
          'delta' => 'news_tips-block_1',
          'region' => 'content',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('news');
  $export['news'] = $context;

  return $export;
}
