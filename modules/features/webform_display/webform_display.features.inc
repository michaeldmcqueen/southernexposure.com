<?php
/**
 * @file
 * webform_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function webform_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
