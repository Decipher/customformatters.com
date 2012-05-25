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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_basic|node|formatter|form';
  $field_group->group_name = 'group_formatter_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formatter_formatter';
  $field_group->data = array(
    'label' => 'Basic information',
    'weight' => '16',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_code|node|formatter|default';
  $field_group->group_name = 'group_formatter_code';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_formatter_group';
  $field_group->data = array(
    'label' => 'Code',
    'weight' => '19',
    'children' => array(
      0 => 'field_formatter_code',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Code',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_formatter_code|node|formatter|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_formatter|node|formatter|form';
  $field_group->group_name = 'group_formatter_formatter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Formatter',
    'weight' => '0',
    'children' => array(
      0 => 'field_formatter_code',
      1 => 'field_formatter_fapi',
      2 => 'field_formatter_field_types',
      3 => 'group_formatter_basic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Formatter',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_formatter_formatter|node|formatter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_group|node|formatter|default';
  $field_group->group_name = 'group_formatter_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Formatter',
    'weight' => '4',
    'children' => array(
      0 => 'group_formatter_object',
      1 => 'group_formatter_code',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_formatter_group|node|formatter|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_object|node|formatter|default';
  $field_group->group_name = 'group_formatter_object';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_formatter_group';
  $field_group->data = array(
    'label' => 'Exportable',
    'weight' => '20',
    'children' => array(
      0 => 'field_formatter_import',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Exportable',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_formatter_object|node|formatter|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_steps_details|node|formatter|form';
  $field_group->group_name = 'group_formatter_steps_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formatter_steps';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '34',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_formatter_steps_details|node|formatter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_steps_import|node|formatter|form';
  $field_group->group_name = 'group_formatter_steps_import';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_formatter_steps';
  $field_group->data = array(
    'label' => 'Import',
    'weight' => '33',
    'children' => array(
      0 => 'field_formatter_import',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_formatter_steps_import|node|formatter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formatter_steps|node|formatter|form';
  $field_group->group_name = 'group_formatter_steps';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Steps',
    'weight' => '1',
    'children' => array(
      0 => 'group_formatter_steps_import',
      1 => 'group_formatter_steps_details',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Steps',
      'instance_settings' => array(
        'classes' => '',
        'page_header' => 3,
        'page_counter' => 1,
        'move_button' => 0,
        'move_additional' => 1,
      ),
    ),
  );
  $export['group_formatter_steps|node|formatter|form'] = $field_group;

  $field_group = new stdClass();
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multistep_edit|node|formatter|form';
  $field_group->group_name = 'group_multistep_edit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formatter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'group_formatter_formatter',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'Details',
    ),
  );
  $export['group_multistep_edit|node|formatter|form'] = $field_group;

  $field_group = new stdClass();
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
