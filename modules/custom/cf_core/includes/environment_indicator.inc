<?php
/**
 * Environment Indicator module integration.
 */

/**
 * Implements hook_cf_core_init() on behalf of environment_indicator.module.
 */
function environment_indicator_cf_core_init() {
  switch (TRUE) {
    case cf_core_is_state('dev'):
      $GLOBALS['conf']['environment_indicator_text'] = drupal_strtoupper(t('CustomFormatters.com - Development mode'));
      $GLOBALS['conf']['environment_indicator_color'] = '#D95929';
      break;

    case cf_core_is_state('test'):
      $GLOBALS['conf']['environment_indicator_text'] = drupal_strtoupper(t('CustomFormatters.com - Testing mode'));
      $GLOBALS['conf']['environment_indicator_color'] = '#C4C7B6';
      break;

    case cf_core_is_state('prod'):
      $GLOBALS['conf']['environment_indicator_enabled'] = FALSE;
      break;
  }
}
