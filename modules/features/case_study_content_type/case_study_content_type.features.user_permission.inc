<?php
/**
 * @file
 * case_study_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function case_study_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create case_study content'.
  $permissions['create case_study content'] = array(
    'name' => 'create case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any case_study content'.
  $permissions['delete any case_study content'] = array(
    'name' => 'delete any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own case_study content'.
  $permissions['delete own case_study content'] = array(
    'name' => 'delete own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'ds_switch case_study'.
  $permissions['ds_switch case_study'] = array(
    'name' => 'ds_switch case_study',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'edit any case_study content'.
  $permissions['edit any case_study content'] = array(
    'name' => 'edit any case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own case_study content'.
  $permissions['edit own case_study content'] = array(
    'name' => 'edit own case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished case_study content'.
  $permissions['view any unpublished case_study content'] = array(
    'name' => 'view any unpublished case_study content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
