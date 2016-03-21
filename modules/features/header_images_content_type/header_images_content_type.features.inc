<?php
/**
 * @file
 * header_images_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function header_images_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function header_images_content_type_node_info() {
  $items = array(
    'header_image' => array(
      'name' => t('Header Image'),
      'base' => 'node_content',
      'description' => t('Add a new Header Image'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
