<?php
/**
 * @file
 * context_defaults.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function context_defaults_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Associated landscape and certified logos';
  $fe_block_boxes->format = 'ds_code';
  $fe_block_boxes->machine_name = 'affiliations';
  $fe_block_boxes->body = '<div class="affiliations-block">
<a href="http://www.alcc.com/" target="_blank"><img src="/profiles/vs_base/themes/novel/assets/images/alcc.jpg" /></a>
<a href="https://www.landcarenetwork.org/index.cfm" target="_blank"><img src="/profiles/vs_base/themes/novel/assets/images/lic.jpg" /></a>
</div>';

  $export['affiliations'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Service Calls';
  $fe_block_boxes->format = 'ds_code';
  $fe_block_boxes->machine_name = 'service_calls';
  $fe_block_boxes->body = '<div class="menu-block-wrapper menu-block-1 menu-name-main-menu parent-mlid-0 menu-level-2"> <ul class="menu">
<li class="first leaf menu-mlid-543">
<a href="/request-landscape-maintenance">Request Landscape Maintenance</a>
</li>
<li class="leaf menu-mlid-543">
<a href="/request-proposal">Request a Proposal</a>
</li>
<li class="last leaf menu-mlid-543">
<a href="/request-sprinkler-service">Request a Sprinkler Service</a>
</li>
</ul>
</div>
';

  $export['service_calls'] = $fe_block_boxes;

  return $export;
}
