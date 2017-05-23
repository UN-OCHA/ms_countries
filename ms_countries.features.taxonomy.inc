<?php
/**
 * @file
 * ms_countries.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ms_countries_taxonomy_default_vocabularies() {
  return array(
    'ms_country' => array(
      'name' => 'Country',
      'machine_name' => 'ms_country',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
