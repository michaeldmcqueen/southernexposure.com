<?php
/**
 * @file
 * case_study_displays.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function case_study_displays_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'case_studies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case Studies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Case Studies';
  $handler->display->display_options['css_class'] = 'case-studies-list-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Case Study Weight (field_case_study_weight) */
  $handler->display->display_options['sorts']['field_case_study_weight_value']['id'] = 'field_case_study_weight_value';
  $handler->display->display_options['sorts']['field_case_study_weight_value']['table'] = 'field_data_field_case_study_weight';
  $handler->display->display_options['sorts']['field_case_study_weight_value']['field'] = 'field_case_study_weight_value';
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
    'case_study' => 'case_study',
  );

  /* Display: Case Studies - List View */
  $handler = $view->new_display('block', 'Case Studies - List View', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;

  /* Display: Case Studies - Front View */
  $handler = $view->new_display('block', 'Case Studies - Front View', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="front-case-study-intro"><p>With each new client we see an opportunity to create something beautiful and we take the time to make it happen, see what our clients have to say about the experience.</p></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  /* Field: Content: Case Study Weight Selector */
  $handler->display->display_options['fields']['field_case_study_weight_selector']['id'] = 'field_case_study_weight_selector';
  $handler->display->display_options['fields']['field_case_study_weight_selector']['table'] = 'field_data_field_case_study_weight';
  $handler->display->display_options['fields']['field_case_study_weight_selector']['field'] = 'field_case_study_weight_selector';
  $handler->display->display_options['fields']['field_case_study_weight_selector']['label'] = '';
  $handler->display->display_options['fields']['field_case_study_weight_selector']['element_type'] = '0';
  $handler->display->display_options['fields']['field_case_study_weight_selector']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case_study_weight_selector']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_case_study_weight_selector']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_case_study_weight_selector']['weight_range'] = '20';
  $handler->display->display_options['path'] = 'admin/sort/case-studies';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Case Studies Sort';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['case_studies'] = $view;

  return $export;
}
