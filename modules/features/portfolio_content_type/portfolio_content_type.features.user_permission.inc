<?php
/**
 * @file
 * portfolio_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function portfolio_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create portfolio content'.
  $permissions['create portfolio content'] = array(
    'name' => 'create portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any portfolio content'.
  $permissions['delete any portfolio content'] = array(
    'name' => 'delete any portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own portfolio content'.
  $permissions['delete own portfolio content'] = array(
    'name' => 'delete own portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch portfolio'.
  $permissions['ds_switch portfolio'] = array(
    'name' => 'ds_switch portfolio',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any portfolio content'.
  $permissions['edit any portfolio content'] = array(
    'name' => 'edit any portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own portfolio content'.
  $permissions['edit own portfolio content'] = array(
    'name' => 'edit own portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished portfolio content'.
  $permissions['view any unpublished portfolio content'] = array(
    'name' => 'view any unpublished portfolio content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
