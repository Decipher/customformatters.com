<?php
/**
 * @file
 */

// Additional Javascript.
if (module_exists('libraries')) {
  $libraries = libraries_get_libraries();
  if (in_array('fittext.js', element_children($libraries))) {
    drupal_add_js(libraries_get_path('fittext.js') . '/jquery.fittext.js');
  }
  if (in_array('jquery.fileinput', element_children($libraries))) {
    drupal_add_js(libraries_get_path('jquery.fileinput') . '/js/jQuery.fileinput.js');
  }
}

// Site name modifications.
$elements = explode(' ', $vars['site_name']);
foreach ($elements as $delta => $element) {
  $elements[$delta] = "<span class='site_name-element-{$delta}'>{$element}</span>";
}
$vars['site_name'] = implode(' ', $elements);
$vars['site_slogan'] = !empty($vars['site_slogan']) ? "\"{$vars['site_slogan']}\"" : '';
