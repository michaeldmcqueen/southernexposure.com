<?php
/**
 * @file
 * header_image_displays_and_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function header_image_displays_and_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'header_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'header-image-[field_image_contrast]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'header_image' => 'header_image',
  );
  /* Filter criterion: Content: Image Contrast (field_image_contrast) */
  $handler->display->display_options['filters']['field_image_contrast_value']['id'] = 'field_image_contrast_value';
  $handler->display->display_options['filters']['field_image_contrast_value']['table'] = 'field_data_field_image_contrast';
  $handler->display->display_options['filters']['field_image_contrast_value']['field'] = 'field_image_contrast_value';
  $handler->display->display_options['filters']['field_image_contrast_value']['value'] = array(
    'dark' => 'dark',
  );

  /* Display: Header Images */
  $handler = $view->new_display('block', 'Header Images', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_attach_image_to_target_id']['id'] = 'field_attach_image_to_target_id';
  $handler->display->display_options['relationships']['field_attach_image_to_target_id']['table'] = 'field_data_field_attach_image_to';
  $handler->display->display_options['relationships']['field_attach_image_to_target_id']['field'] = 'field_attach_image_to_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Contrast */
  $handler->display->display_options['fields']['field_image_contrast']['id'] = 'field_image_contrast';
  $handler->display->display_options['fields']['field_image_contrast']['table'] = 'field_data_field_image_contrast';
  $handler->display->display_options['fields']['field_image_contrast']['field'] = 'field_image_contrast';
  $handler->display->display_options['fields']['field_image_contrast']['label'] = '';
  $handler->display->display_options['fields']['field_image_contrast']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_contrast']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_contrast']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_contrast']['type'] = 'list_key';
  /* Field: Content: Header Image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_attach_image_to_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'header_image' => 'header_image',
  );

  /* Display: Dark */
  $handler = $view->new_display('block', 'Dark', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_attach_image_to_target_id']['id'] = 'field_attach_image_to_target_id';
  $handler->display->display_options['relationships']['field_attach_image_to_target_id']['table'] = 'field_data_field_attach_image_to';
  $handler->display->display_options['relationships']['field_attach_image_to_target_id']['field'] = 'field_attach_image_to_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_attach_image_to_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['header_views'] = $view;

  return $export;
}
