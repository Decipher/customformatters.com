<?php
/**
 * @file
 * cf_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cf_core_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_basic|node|formatter|form';
  $field_group->group_name = 'group_formatter_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multistep_edit';
  $field_group->data = array(
    'label' => 'Basic information',
    'weight' => '8',
    'children' => array(
      0 => 'field_formatter_description',
      1 => 'field_formatter_mode',
      2 => 'field_formatter_name',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_formatter_basic|node|formatter|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multistep_details|node|formatter|form';
  $field_group->group_name = 'group_multistep_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_multistep_details|node|formatter|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multistep_edit|node|formatter|form';
  $field_group->group_name = 'group_multistep_edit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Formatter',
    'weight' => '1',
    'children' => array(
      0 => 'field_formatter_field_types',
      1 => 'field_formatter_code',
      2 => 'field_formatter_fapi',
      3 => 'group_formatter_basic',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'Formatter',
    ),
  );
  $export['group_multistep_edit|node|formatter|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multistep_import|node|formatter|form';
  $field_group->group_name = 'group_multistep_import';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Import',
    'weight' => '0',
    'children' => array(
      0 => 'field_formatter_import',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_multistep_import|node|formatter|form'] = $field_group;

  return $export;
}
