<?php
/**
 * @file
 * front.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function front_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create clients content'.
  $permissions['create clients content'] = array(
    'name' => 'create clients content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create home_blocks content'.
  $permissions['create home_blocks content'] = array(
    'name' => 'create home_blocks content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any clients content'.
  $permissions['delete any clients content'] = array(
    'name' => 'delete any clients content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any home_blocks content'.
  $permissions['delete any home_blocks content'] = array(
    'name' => 'delete any home_blocks content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own clients content'.
  $permissions['delete own clients content'] = array(
    'name' => 'delete own clients content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own home_blocks content'.
  $permissions['delete own home_blocks content'] = array(
    'name' => 'delete own home_blocks content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch clients'.
  $permissions['ds_switch clients'] = array(
    'name' => 'ds_switch clients',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch home_blocks'.
  $permissions['ds_switch home_blocks'] = array(
    'name' => 'ds_switch home_blocks',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any clients content'.
  $permissions['edit any clients content'] = array(
    'name' => 'edit any clients content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any home_blocks content'.
  $permissions['edit any home_blocks content'] = array(
    'name' => 'edit any home_blocks content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own clients content'.
  $permissions['edit own clients content'] = array(
    'name' => 'edit own clients content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own home_blocks content'.
  $permissions['edit own home_blocks content'] = array(
    'name' => 'edit own home_blocks content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished clients content'.
  $permissions['view any unpublished clients content'] = array(
    'name' => 'view any unpublished clients content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished home_blocks content'.
  $permissions['view any unpublished home_blocks content'] = array(
    'name' => 'view any unpublished home_blocks content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
