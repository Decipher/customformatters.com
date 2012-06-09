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

/**
 * Implements hook_preprocess().
 */
function cf_core_preprocess(&$vars, $hook) {
  drupal_alter('cf_core_preprocess', $vars, $hook);
  drupal_alter("cf_core_preprocess_{$hook}", $vars);
}

/**
 * Implements hook_form_alter().
 */
function cf_core_form_alter(&$form, $form_state, $form_id) {
  drupal_alter('cf_core_form', $form, $form_state, $form_id);
  drupal_alter("cf_core_form_{$form_id}", $form, $form_state);
}
