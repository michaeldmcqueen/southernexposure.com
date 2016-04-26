<?php
/**
 * @file
 * header_images_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function header_images_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create header_image content'.
  $permissions['create header_image content'] = array(
    'name' => 'create header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any header_image content'.
  $permissions['delete any header_image content'] = array(
    'name' => 'delete any header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own header_image content'.
  $permissions['delete own header_image content'] = array(
    'name' => 'delete own header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch header_image'.
  $permissions['ds_switch header_image'] = array(
    'name' => 'ds_switch header_image',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any header_image content'.
  $permissions['edit any header_image content'] = array(
    'name' => 'edit any header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own header_image content'.
  $permissions['edit own header_image content'] = array(
    'name' => 'edit own header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished header_image content'.
  $permissions['view any unpublished header_image content'] = array(
    'name' => 'view any unpublished header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
