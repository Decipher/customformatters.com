<?php
/**
 * @file
 */

/**
 * Include for Profiler library.
 */
!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('cf_profile');

/**
 * Implements hook_install_tasks_alter().
 */
function cf_profile_install_tasks_alter(&$tasks, $install_state) {
  $tasks['cf_profile_revert_features'] = array();
}

/**
 * Implements hook_form_alter().
 */
function cf_profile_form_install_configure_form_alter(&$form, &$form_state, $form_id) {
  $form['site_information']['#access'] = FALSE;
  $form['site_information']['site_name'] = array(
    '#type' => 'value',
    '#value' => t('Custom Formatters'),
  );
  $form['site_information']['site_mail'] = array(
    '#type' => 'value',
    '#value' => 'info@customformatters.com',
  );
}

/**
 * Install task; Revert features.
 */
function cf_profile_revert_features(&$install_state) {
  features_include(TRUE);
  features_get_components(NULL, NULL, TRUE);
  features_include_defaults(NULL, TRUE);
  features_revert();
}
