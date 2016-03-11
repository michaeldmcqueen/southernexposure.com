<?php
/**
 * @file
 * staff_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function staff_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create staff content'.
  $permissions['create staff content'] = array(
    'name' => 'create staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any staff content'.
  $permissions['delete any staff content'] = array(
    'name' => 'delete any staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own staff content'.
  $permissions['delete own staff content'] = array(
    'name' => 'delete own staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch staff'.
  $permissions['ds_switch staff'] = array(
    'name' => 'ds_switch staff',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any staff content'.
  $permissions['edit any staff content'] = array(
    'name' => 'edit any staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own staff content'.
  $permissions['edit own staff content'] = array(
    'name' => 'edit own staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished staff content'.
  $permissions['view any unpublished staff content'] = array(
    'name' => 'view any unpublished staff content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
