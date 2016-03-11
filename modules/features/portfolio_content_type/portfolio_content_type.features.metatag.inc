<?php
/**
 * @file
 * portfolio_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function portfolio_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:portfolio.
  $config['node:portfolio'] = array(
    'instance' => 'node:portfolio',
    'config' => array(
      'title' => array(
        'value' => '[node:title]',
      ),
      'description' => array(
        'value' => '[node:body]',
      ),
    ),
  );

  return $config;
}
