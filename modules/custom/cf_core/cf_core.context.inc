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
  $context->name = 'layout-front-all';
  $context->description = '';
  $context->tag = 'Custom Formatters';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-cf_about' => array(
          'module' => 'panels_mini',
          'delta' => 'cf_about',
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
  $export['layout-front-all'] = $context;

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
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-cf_section' => array(
          'module' => 'boxes',
          'delta' => 'cf_section',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'cf_core-download_module' => array(
          'module' => 'cf_core',
          'delta' => 'download_module',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-cf_github' => array(
          'module' => 'boxes',
          'delta' => 'cf_github',
          'region' => 'sidebar_second',
          'weight' => '-8',
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
