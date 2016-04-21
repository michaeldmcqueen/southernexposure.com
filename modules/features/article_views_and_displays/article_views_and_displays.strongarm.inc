<?php
/**
 * @file
 * article_views_and_displays.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function article_views_and_displays_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_post_date';
  $strongarm->value = 'l, F dS, Y';
  $export['date_format_post_date'] = $strongarm;

  return $export;
}
