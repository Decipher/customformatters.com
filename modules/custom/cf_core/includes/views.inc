<?php
/**
 * @file
 * Views module integration.
 */

/**
 * Implements hook_cf_core_preprocess_views_exposed_form_alter() on behalf of
 * views.module.
 */
function views_cf_core_preprocess_views_exposed_form_alter(&$vars) {
  if ('views-exposed-form-cf-formatters-page-1' == $vars['form']['#id']) {
    // Added 'Extras' label above 'has_image' filter.
    $has_image = $vars['widgets']['filter-field_formatter_image_output_fid'];
    unset($vars['widgets']['filter-field_formatter_image_output_fid']);
    $vars['widgets']['extras'] = (object) array(
      'widget' => '',
      'operator' =>  NULL,
      'label' => 'Extras',
      'id' => 'edit-extras',
    );
    $vars['widgets']['filter-field_formatter_image_output_fid'] = $has_image;
  }
}
