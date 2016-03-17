<?php
/**
 * @file
 * case_study_displays.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function case_study_displays_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|case_study|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'case_study';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_testimonial',
        2 => 'field_case_study_gallery',
        3 => 'field_case_study_weight',
        4 => 'field_teaser',
        5 => 'field_location',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_testimonial' => 'ds_content',
      'field_case_study_gallery' => 'ds_content',
      'field_case_study_weight' => 'ds_content',
      'field_teaser' => 'ds_content',
      'field_location' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|case_study|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|case_study|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'case_study';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'custom_2_sections';
  $ds_layout->settings = array(
    'regions' => array(
      'one' => array(
        0 => 'field_case_study_gallery',
      ),
      'two' => array(
        1 => 'title',
        2 => 'field_testimonial',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_case_study_gallery' => 'one',
      'title' => 'two',
      'field_testimonial' => 'two',
      'node_link' => 'two',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one' => 'div',
      'two' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|case_study|teaser'] = $ds_layout;

  return $export;
}
