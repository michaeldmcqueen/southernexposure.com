<?php
/**
 * @file
 * faq_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function faq_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_faq_weight'.
  $field_bases['field_faq_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_weight',
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
