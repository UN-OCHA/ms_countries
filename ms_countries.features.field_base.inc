<?php
/**
 * @file
 * ms_countries.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ms_countries_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ms_iso2'.
  $field_bases['field_ms_iso2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ms_iso2',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
