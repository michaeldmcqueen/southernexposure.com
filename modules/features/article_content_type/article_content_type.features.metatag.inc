<?php
/**
 * @file
 * article_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function article_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:article.
  $config['node:article'] = array(
    'instance' => 'node:article',
    'config' => array(
      'title' => array(
        'value' => '[node:title]',
      ),
      'description' => array(
        'value' => '[node:field-teaser]',
      ),
    ),
  );

  return $config;
}
