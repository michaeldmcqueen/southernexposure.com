<?php
/**
 * @file
 * front.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clients_we_ve_helped';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clients we’ve helped';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4>[title]</h4>
[body]';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Client Logo and Links */
  $handler->display->display_options['fields']['field_client_logo_and_links']['id'] = 'field_client_logo_and_links';
  $handler->display->display_options['fields']['field_client_logo_and_links']['table'] = 'field_data_field_client_logo_and_links';
  $handler->display->display_options['fields']['field_client_logo_and_links']['field'] = 'field_client_logo_and_links';
  $handler->display->display_options['fields']['field_client_logo_and_links']['label'] = '';
  $handler->display->display_options['fields']['field_client_logo_and_links']['alter']['text'] = '<li>[field_client_logo_and_links]</li>';
  $handler->display->display_options['fields']['field_client_logo_and_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_logo_and_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_client_logo_and_links']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_client_logo_and_links']['settings'] = array(
    'image_style' => 'clients_logo',
  );
  $handler->display->display_options['fields']['field_client_logo_and_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_client_logo_and_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_client_logo_and_links']['separator'] = '';
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
    'clients' => 'clients',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['clients_we_ve_helped'] = $view;

  $view = new view();
  $view->name = 'front_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'front-intro';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Sub Title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['label'] = '';
  $handler->display->display_options['fields']['field_sub_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_sub_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_title']['element_default_classes'] = FALSE;
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
    'static_page' => 'static_page',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '3';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Calls */
  $handler = $view->new_display('block', 'Calls', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-calls';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_home_block_image']['id'] = 'field_home_block_image';
  $handler->display->display_options['fields']['field_home_block_image']['table'] = 'field_data_field_home_block_image';
  $handler->display->display_options['fields']['field_home_block_image']['field'] = 'field_home_block_image';
  $handler->display->display_options['fields']['field_home_block_image']['label'] = '';
  $handler->display->display_options['fields']['field_home_block_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_home_block_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_block_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_home_block_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_home_block_image']['settings'] = array(
    'image_style' => 'front_calls',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_home_blocks_link_1']['id'] = 'field_home_blocks_link_1';
  $handler->display->display_options['fields']['field_home_blocks_link_1']['table'] = 'field_data_field_home_blocks_link';
  $handler->display->display_options['fields']['field_home_blocks_link_1']['field'] = 'field_home_blocks_link';
  $handler->display->display_options['fields']['field_home_blocks_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_home_blocks_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_home_blocks_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_blocks_link_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_home_blocks_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_home_blocks_link_1']['type'] = 'link_plain';
  /* Field: Content: Text Area */
  $handler->display->display_options['fields']['field_home_block_text_area']['id'] = 'field_home_block_text_area';
  $handler->display->display_options['fields']['field_home_block_text_area']['table'] = 'field_data_field_home_block_text_area';
  $handler->display->display_options['fields']['field_home_block_text_area']['field'] = 'field_home_block_text_area';
  $handler->display->display_options['fields']['field_home_block_text_area']['label'] = '';
  $handler->display->display_options['fields']['field_home_block_text_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_home_block_text_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_block_text_area']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_home_blocks_link']['id'] = 'field_home_blocks_link';
  $handler->display->display_options['fields']['field_home_blocks_link']['table'] = 'field_data_field_home_blocks_link';
  $handler->display->display_options['fields']['field_home_blocks_link']['field'] = 'field_home_blocks_link';
  $handler->display->display_options['fields']['field_home_blocks_link']['label'] = '';
  $handler->display->display_options['fields']['field_home_blocks_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_home_blocks_link']['alter']['text'] = '[field_home_block_image]
<div class="front-block-content">
 <h3>[title]</h3>
[field_home_block_text_area]
<a href="[field_home_blocks_link-url]" class="call-link">[field_home_blocks_link]</a>
</div>
';
  $handler->display->display_options['fields']['field_home_blocks_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_blocks_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_home_blocks_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_home_blocks_link']['type'] = 'link_title_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_home_block_image]
<div class="front-block-content">
 <h3>[title]</h3>
[field_home_block_text_area]
<a href="[field_home_blocks_link_1]" class="call-link">[field_home_blocks_link]</a>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Weight (field_weight_home_blocks) */
  $handler->display->display_options['sorts']['field_weight_home_blocks_value']['id'] = 'field_weight_home_blocks_value';
  $handler->display->display_options['sorts']['field_weight_home_blocks_value']['table'] = 'field_data_field_weight_home_blocks';
  $handler->display->display_options['sorts']['field_weight_home_blocks_value']['field'] = 'field_weight_home_blocks_value';
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
    'home_blocks' => 'home_blocks',
  );
  $export['front_blocks'] = $view;

  return $export;
}
