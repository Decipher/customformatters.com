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
  $context->name = 'layout-front-anonymous';
  $context->description = '';
  $context->tag = 'Custom Formatters';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom Formatters');
  $export['layout-front-anonymous'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'server-development';
  $context->description = '';
  $context->tag = 'CustomFormatters::Servers';
  $context->conditions = array(
    'server_vars' => array(
      'values' => array(
        'variables' => array(
          0 => array(
            'name' => 'HTTP_HOST',
            'op' => 'strpos',
            'negate' => 1,
            'value' => 'customformatters.com',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'module' => array(
      'context_ui' => 'enable',
      'dblog' => 'enable',
      'devel' => 'enable',
      'environment_indicator' => 'enable',
      'field_ui' => 'enable',
      'module_filter' => 'enable',
      'views_ui' => 'enable',
    ),
    'variable' => array(
      '#set' => array(
        'cache' => 0,
        'cache_lifetime' => 0,
        'environment_indicator_overwrite' => 0,
        'environment_indicator_overwritten_color' => 0,
        'environment_indicator_overwritten_name' => 0,
        'googleanalytics_account' => 0,
        'page_cache_maximum_age' => 0,
        'prepro' => 0,
        'preprocess_css' => 0,
        'preprocess_js' => 0,
        'xmlsitemap_engines_engines' => 0,
      ),
      'cache' => 0,
      'cache_lifetime' => '0',
      'environment_indicator_overwrite' => 1,
      'environment_indicator_overwritten_color' => '#D95929',
      'environment_indicator_overwritten_name' => 'Development',
      'googleanalytics_account' => '',
      'page_cache_maximum_age' => '0',
      'prepro' => array(
        'filetypes' => array(
          'sass' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/onload',
            'cache_path' => 'public://prepro',
          ),
          'scss' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/onload',
            'cache_path' => 'public://prepro',
          ),
        ),
        'additional' => array(
          'sassy' => array(
            'watchdog' => 1,
            'debug' => 1,
            'errors' => 'output',
            'style' => 'nested',
          ),
        ),
        'show_warnings' => 0,
      ),
      'preprocess_css' => 0,
      'preprocess_js' => 0,
      'xmlsitemap_engines_engines' => array(
        'bing' => 0,
        'google' => 0,
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CustomFormatters::Servers');
  $export['server-development'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'server-production';
  $context->description = '';
  $context->tag = 'CustomFormatters::Servers';
  $context->conditions = array(
    'server_vars' => array(
      'values' => array(
        'variables' => array(
          0 => array(
            'name' => 'HTTP_HOST',
            'op' => '==',
            'negate' => 0,
            'value' => 'customformatters.com',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'module' => array(
      'context_ui' => 'disable',
      'dblog' => 'disable',
      'devel' => 'disable',
      'environment_indicator' => 'disable',
      'field_ui' => 'disable',
      'module_filter' => 'disable',
      'views_ui' => 'disable',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CustomFormatters::Servers');
  $export['server-production'] = $context;

  return $export;
}
