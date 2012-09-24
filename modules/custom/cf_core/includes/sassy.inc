<?php
/**
 * @file
 * Sassy core SASS+SCSS compiler module integration.
 */

/**
 * Implements hook_cf_core_init() on behalf of sassy.module.
 */
function sassy_cf_core_init() {
  if (cf_core_is_state('dev')) {
    $GLOBALS['conf']['prepro']['filetypes']['scss']['cache'] = 'onload';
    $GLOBALS['conf']['prepro']['additional']['sassy']['errors'] = 'output';
  }
}
