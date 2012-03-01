<?php
/**
 * @file
 */

// Additional Javascript.
if (module_exists('libraries') && in_array('fittext.js', element_children(libraries_get_libraries()))) {
  drupal_add_js(libraries_get_path('fittext.js') . '/jquery.fittext.js');
}

// Site name modifications.
$elements = explode(' ', $vars['site_name']);
foreach ($elements as $delta => $element) {
  $elements[$delta] = "<span class='site_name-element-{$delta}'>{$element}</span>";
}
$vars['site_name'] = implode(' ', $elements);
$vars['site_slogan'] = !empty($vars['site_slogan']) ? "\"{$vars['site_slogan']}\"" : '';

if (isset($vars['page']['content']['content']['content']['system_main'])) {
  $vars['page']['content']['content']['content']['system_main']['#prefix'] = "<div class='grid-8'>" . (isset($vars['page']['content']['content']['content']['system_main']['#prefix']) ? $vars['page']['content']['content']['content']['system_main']['#prefix'] : '');
  $vars['page']['content']['content']['content']['system_main']['#suffix'] = (isset($vars['page']['content']['content']['content']['system_main']['#suffix']) ? $vars['page']['content']['content']['content']['system_main']['#suffix'] : '') . '</div>';
}
