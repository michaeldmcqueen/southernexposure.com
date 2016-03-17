<?php
/**
 * @file
 * services.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function services_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create service content'.
  $permissions['create service content'] = array(
    'name' => 'create service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any service content'.
  $permissions['delete any service content'] = array(
    'name' => 'delete any service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own service content'.
  $permissions['delete own service content'] = array(
    'name' => 'delete own service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch service'.
  $permissions['ds_switch service'] = array(
    'name' => 'ds_switch service',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any service content'.
  $permissions['edit any service content'] = array(
    'name' => 'edit any service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own service content'.
  $permissions['edit own service content'] = array(
    'name' => 'edit own service content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished service content'.
  $permissions['view any unpublished service content'] = array(
    'name' => 'view any unpublished service content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
