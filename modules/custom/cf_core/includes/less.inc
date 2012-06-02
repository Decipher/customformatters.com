<?php
/**
 * @file
 * LESS CSS Preprocessor module integration.
 */

/**
 * Implements hook_cf_core_init() on behalf of less.module.
 */
function less_cf_core_init() {
  $GLOBALS['conf']['less_devel'] = cf_core_is_state('dev');
}
