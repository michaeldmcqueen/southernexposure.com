<?php
/**
 * @file
 * staff_displays_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function staff_displays_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function staff_displays_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
