<?php
/**
 * @file
 * ms_countries.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ms_countries_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
