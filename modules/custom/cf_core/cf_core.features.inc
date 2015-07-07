<?php
/**
 * @file
 * cf_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cf_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "radioactivity" && $api == "radioactivity_decay_profile") {
    return array("version" => "1");
  }
  if ($module == "resp_img" && $api == "default_resp_img_suffixs") {
    return array("version" => "1");
  }
  if ($module == "site_verify" && $api == "site_verify") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cf_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cf_core_image_default_styles() {
  $styles = array();

  // Exported image style: formatter_example_preview_mobile.
  $styles['formatter_example_preview_mobile'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 226,
          'height' => 93,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'formatter_example_preview_mobile',
  );

  // Exported image style: formatter_example_preview_narrow.
  $styles['formatter_example_preview_narrow'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 216,
          'height' => 88,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'formatter_example_preview_narrow',
  );

  // Exported image style: formatter_example_preview_normal.
  $styles['formatter_example_preview_normal'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 296,
          'height' => 122,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'formatter_example_preview_normal',
  );

  // Exported image style: formatter_example_preview_wide.
  $styles['formatter_example_preview_wide'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 376,
          'height' => 156,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'formatter_example_preview_wide',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cf_core_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'formatter' => array(
      'name' => t('Formatter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Formatter name'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
