<?php
/**
 * @file
 * Google Analytics module integration.
 */

/**
 * Implements hook_cf_core_init() on behalf of googleanalytics.module.
 */
function googleanalytics_cf_core_init() {
  if (!cf_core_is_state('prod')) {
    $GLOBALS['conf']['googleanalytics_account'] = '';
  }
}
