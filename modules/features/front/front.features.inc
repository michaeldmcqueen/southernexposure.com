<?php
/**
 * @file
 * front.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function front_image_default_styles() {
  $styles = array();

  // Exported image style: clients_logo.
  $styles['clients_logo'] = array(
    'label' => 'Clients Logo',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 75,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function front_node_info() {
  $items = array(
    'clients' => array(
      'name' => t('Clients'),
      'base' => 'node_content',
      'description' => t('Update and Edit the list of clients on the home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
