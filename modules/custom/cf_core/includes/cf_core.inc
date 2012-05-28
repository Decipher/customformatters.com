<?php
/**
 * @file
 * CustomFormatters core module integration.
 */

/**
 * Implements hook_cf_core_init() on behalf of cf_core.module.
 */
function cf_core_cf_core_init() {
  if (cf_core_is_state('dev') && !module_exists('cf_dev')) {
    module_enable(array('cf_dev'));
  }

  elseif (!cf_core_is_state('dev') && module_exists('cf_dev')) {
    $cf_core_info = system_get_info('module', 'cf_core');
    $cf_dev_info = system_get_info('module', 'cf_dev');

    // Disable CustomFormatters dev and all unique dependencies.
    module_disable(array_merge(
      array('cf_dev'),
      array_diff($cf_dev_info['dependencies'], $cf_core_info['dependencies'])
    ));
  }
}
