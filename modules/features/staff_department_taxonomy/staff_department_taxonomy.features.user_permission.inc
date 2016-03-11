<?php
/**
 * @file
 * staff_department_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function staff_department_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in staff_department'.
  $permissions['delete terms in staff_department'] = array(
    'name' => 'delete terms in staff_department',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in staff_department'.
  $permissions['edit terms in staff_department'] = array(
    'name' => 'edit terms in staff_department',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
