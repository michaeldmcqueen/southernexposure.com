<?php
/**
 * @file
 * staff_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function staff_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function staff_content_type_node_info() {
  $items = array(
    'staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => t('Add a staff/team member to the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
