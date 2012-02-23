<?php
/**
 * @file
 * cf_core.box.inc
 */

/**
 * Implements hook_default_box().
 */
function cf_core_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'cf_github';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Custom Formatters: Github';
  $box->options = array(
    'body' => array(
      'value' => 'GITHUB',
      'format' => 'plain_text',
    ),
    'additional_classes' => '',
  );
  $export['cf_github'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'cf_section';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Custom Formatters: Section';
  $box->options = array(
    'body' => array(
      'value' => '<?php
$section = \'\';

switch (arg(0)) {
  case \'node\':
    $node = menu_get_object();
    switch ($node->type) {
      case \'formatter\':
        $section = \'formatters\';
        break;

      case \'page\':
        $section = $node->title;
        break;

      default:
        $section = $node->type;
    }
    break;

  default:
    $section = arg(0);
}

echo "{$section}";
?>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['cf_section'] = $box;

  return $export;
}
