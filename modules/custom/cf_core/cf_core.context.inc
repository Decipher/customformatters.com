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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-formatters-all';
  $context->description = '';
  $context->tag = 'Custom Formatters';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'cf_formatters:page_1' => 'cf_formatters:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-cf_formatters-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-cf_formatters-page_1',
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
  $export['layout-formatters-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-formatters-node-edit';
  $context->description = '';
  $context->tag = 'Custom Formatters';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'formatter' => 'formatter',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/*/edit' => 'node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cf_formatter-block' => array(
          'module' => 'views',
          'delta' => 'cf_formatter-block',
          'region' => 'content',
          'weight' => '-16',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom Formatters');
  $export['layout-formatters-node-edit'] = $context;

  $context = new stdClass();
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

  $context = new stdClass();
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
        'panels_mini-cf_feedback' => array(
          'module' => 'panels_mini',
          'delta' => 'cf_feedback',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'panels_mini-cf_section' => array(
          'module' => 'panels_mini',
          'delta' => 'cf_section',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'panels_mini-cf_share' => array(
          'module' => 'panels_mini',
          'delta' => 'cf_share',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'panels_mini-cf_beta_signup' => array(
          'module' => 'panels_mini',
          'delta' => 'cf_beta_signup',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'cf_core-download_module' => array(
          'module' => 'cf_core',
          'delta' => 'download_module',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'panels_mini-cf_github' => array(
          'module' => 'panels_mini',
          'delta' => 'cf_github',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'panels_mini-cf_sponsors' => array(
          'module' => 'panels_mini',
          'delta' => 'cf_sponsors',
          'region' => 'footer_first',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-not_search-all';
  $context->description = '';
  $context->tag = 'Custom Formatters';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~search*' => '~search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom Formatters');
  $export['layout-not_search-all'] = $context;

  return $export;
}
