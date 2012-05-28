<?php
/**
 * @file
 * System module integration.
 */

/**
 * Implements hook_init().
 */
function cf_core_init() {
  module_invoke_all('cf_core_init');
}
