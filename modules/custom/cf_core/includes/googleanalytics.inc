<?php
/**
 * @file
 * Google Analytics module integration.
 */

/**
 * Implements hook_cf_core_init().
 */
function googleanalytics_cf_core_init() {
  if (!cf_core_is_production()) {
    $GLOBALS['conf']['googleanalytics_account'] = '';
  }
}
