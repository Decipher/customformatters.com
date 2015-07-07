<?php
/**
 * @file
 * cf_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cf_core_taxonomy_default_vocabularies() {
  return array(
    'cf_d7fields' => array(
      'name' => 'Field type(s)',
      'machine_name' => 'cf_d7fields',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'format' => array(
      'name' => 'Format',
      'machine_name' => 'format',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
