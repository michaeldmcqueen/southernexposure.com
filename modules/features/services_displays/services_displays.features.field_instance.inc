<?php
/**
 * @file
 * services_displays.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function services_displays_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-service-field_service_weight'.
  $field_instances['node-service-field_service_weight'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_service_weight',
    'label' => 'Service Weight',
    'required' => 0,
    'settings' => array(
      'range' => 20,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'weight',
      'settings' => array(
        'range' => 20,
      ),
      'type' => 'weight_selector',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Service Weight');

  return $field_instances;
}
