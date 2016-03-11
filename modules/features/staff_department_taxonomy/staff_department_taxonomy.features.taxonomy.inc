<?php
/**
 * @file
 * staff_department_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function staff_department_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'staff_department' => array(
      'name' => 'Staff Department',
      'machine_name' => 'staff_department',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
