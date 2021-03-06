<?php
/**
 * @file
 * services_displays.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function services_displays_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_service_weight'.
  $field_bases['field_service_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_service_weight',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'weight',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'weight',
  );

  return $field_bases;
}
