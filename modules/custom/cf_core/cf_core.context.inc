<?php
/**
 * @file
 * cf_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cf_core_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-global-all';
  $context->description = '';
  $context->tag = 'Custom Formatters';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-cf_section' => array(
          'module' => 'boxes',
          'delta' => 'cf_section',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-cf_github' => array(
          'module' => 'boxes',
          'delta' => 'cf_github',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom Formatters');
  $export['layout-global-all'] = $context;

  return $export;
}
