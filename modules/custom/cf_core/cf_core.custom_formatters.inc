<?php
/**
 * @file
 * cf_core.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function cf_core_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'jquery_snippet';
  $formatter->label = 'jquery.snippet';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'text, text_long, text_with_summary';
  $formatter->code = 'if (function_exists(\'libraries_get_libraries\')) {
  if (in_array(\'jquery.snippet\', array_keys(libraries_get_libraries()))) {
    $library = NULL;

    switch (TRUE) {
      case file_exists(libraries_get_path(\'jquery.snippet\') . \'/jquery.snippet.min.js\'):
        $library = libraries_get_path(\'jquery.snippet\') . \'/jquery.snippet.min.js\';
        break;

      case file_exists(libraries_get_path(\'jquery.snippet\') . \'/jquery.snippet.js\'):
        $library = libraries_get_path(\'jquery.snippet\') . \'/jquery.snippet.js\';
        break;
    }
    
    if (!is_null($library)) {
      $element = array(\'#attached\' => array(
        \'js\' => array($library),
      ));
      
      foreach ($variables[\'#items\'] as $delta => $item) {
        $id = "{$variables[\'#field\'][\'field_name\']}-jquery_snippet-{$delta}";
        $element[] = array(
          \'#attached\' => array(
            \'js\' => array(
              "jQuery(document).ready(function() { jQuery(\'#{$id}\').snippet(\'php\'); })" => array(
                \'type\' => \'inline\',
              ) 
            ),
          ),
          \'#theme\' => \'html_tag\',
          \'#tag\' => \'pre\',
          \'#attributes\' => array(
            \'id\' => $id,
          ),
          \'#value\' => $item[\'value\'],
        );
      }
      
      return $element;
    }
    
    else {
      watchdog(\'jquery.snippet\', \'jquery.snippet library .js/.min.js file missing.\');
    }
  }
  else {
    watchdog(\'jquery.snippet\', \'jquery.snippet library missing.\');
  }
}
else {
  watchdog(\'jquery.snippet\', \'Libraries module missing.\');
}

return \'\';';
  $formatter->fapi = '';
  $export['jquery_snippet'] = $formatter;

  return $export;
}
