<?php
/**
 * @file
 * front.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function front_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_client_logo_and_links'.
  $field_bases['field_client_logo_and_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_client_logo_and_links',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'linkimagefield',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'linkimagefield',
  );

  return $field_bases;
}
