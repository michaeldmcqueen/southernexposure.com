<?php
/**
 * @file
 * staff_displays_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function staff_displays_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Staff';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_department',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_department']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Headshot */
  $handler->display->display_options['fields']['field_headshot']['id'] = 'field_headshot';
  $handler->display->display_options['fields']['field_headshot']['table'] = 'field_data_field_headshot';
  $handler->display->display_options['fields']['field_headshot']['field'] = 'field_headshot';
  $handler->display->display_options['fields']['field_headshot']['label'] = '';
  $handler->display->display_options['fields']['field_headshot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headshot']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_headshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_headshot']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="section-one">
[field_headshot]
</div>
<div class="section-two">
<h3 class="staff-name">[title]</h3>
<h6 class="staff-job-title">[field_job_title]</h6>
[body]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Department (field_department) */
  $handler->display->display_options['sorts']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['sorts']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['sorts']['field_department_tid']['field'] = 'field_department_tid';
  /* Sort criterion: Content: Staff Weight (field_staff_weight) */
  $handler->display->display_options['sorts']['field_staff_weight_value']['id'] = 'field_staff_weight_value';
  $handler->display->display_options['sorts']['field_staff_weight_value']['table'] = 'field_data_field_staff_weight';
  $handler->display->display_options['sorts']['field_staff_weight_value']['field'] = 'field_staff_weight_value';
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
    'staff' => 'staff',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_department' => 'field_department',
    'field_headshot' => 'field_headshot',
    'field_job_title' => 'field_job_title',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_headshot' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Staff Weight Selector */
  $handler->display->display_options['fields']['field_staff_weight_selector']['id'] = 'field_staff_weight_selector';
  $handler->display->display_options['fields']['field_staff_weight_selector']['table'] = 'field_data_field_staff_weight';
  $handler->display->display_options['fields']['field_staff_weight_selector']['field'] = 'field_staff_weight_selector';
  $handler->display->display_options['fields']['field_staff_weight_selector']['label'] = '';
  $handler->display->display_options['fields']['field_staff_weight_selector']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_weight_selector']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_weight_selector']['weight_range'] = '20';
  /* Field: Content: Staff Weight */
  $handler->display->display_options['fields']['field_staff_weight']['id'] = 'field_staff_weight';
  $handler->display->display_options['fields']['field_staff_weight']['table'] = 'field_data_field_staff_weight';
  $handler->display->display_options['fields']['field_staff_weight']['field'] = 'field_staff_weight';
  $handler->display->display_options['fields']['field_staff_weight']['label'] = '';
  $handler->display->display_options['fields']['field_staff_weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_weight']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_weight']['type'] = 'weight_integer';
  $handler->display->display_options['fields']['field_staff_weight']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_staff_weight']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Staff Weight (field_staff_weight) */
  $handler->display->display_options['sorts']['field_staff_weight_value']['id'] = 'field_staff_weight_value';
  $handler->display->display_options['sorts']['field_staff_weight_value']['table'] = 'field_data_field_staff_weight';
  $handler->display->display_options['sorts']['field_staff_weight_value']['field'] = 'field_staff_weight_value';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $export['staff'] = $view;

  return $export;
}
