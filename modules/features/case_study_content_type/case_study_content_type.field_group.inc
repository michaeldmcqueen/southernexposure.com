<?php
/**
 * @file
 * case_study_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function case_study_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|case_study|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_testimonial',
      2 => 'field_case_study_gallery',
      3 => 'field_case_study_weight',
      4 => 'field_teaser',
      5 => 'field_location',
      6 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|node|case_study|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
