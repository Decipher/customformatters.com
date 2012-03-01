<?php
/**
 * @file
 * cf_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cf_core_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'rubik';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boxes_edit_location';
  $strongarm->value = '2';
  $export['boxes_edit_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'cf_profile';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_formatter';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_formatter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_formatter';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_formatter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_formatter';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_formatter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blog';
  $strongarm->value = '0';
  $export['node_preview_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_formatter';
  $strongarm->value = '0';
  $export['node_preview_formatter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '0';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blog';
  $strongarm->value = 1;
  $export['node_submitted_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_formatter';
  $strongarm->value = 0;
  $export['node_submitted_formatter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = 'blog/[node:created:custom:ymd]/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_formatter_pattern';
  $strongarm->value = 'formatters/[node:nid]';
  $export['pathauto_node_formatter_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'formatters';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'stu@rtclark.net';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Custom Formatters';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Format all the Fields';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_cf_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'alpha_grid' => 'alpha_default',
    'alpha_responsive' => 1,
    'alpha_viewport' => 1,
    'alpha_viewport_initial_scale' => '1',
    'alpha_viewport_min_scale' => '1',
    'alpha_viewport_max_scale' => '1',
    'alpha_viewport_user_scaleable' => 0,
    'alpha_primary_alpha_default' => 'normal',
    'alpha_layouts_alpha_default_narrow_responsive' => 1,
    'alpha_layouts_alpha_default_narrow_weight' => '1',
    'alpha_layouts_alpha_default_narrow_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_normal_responsive' => 1,
    'alpha_layouts_alpha_default_normal_weight' => '2',
    'alpha_layouts_alpha_default_normal_media' => 'all and (min-width: 980px) and (min-device-width: 980px), all and (max-device-width: 1024px) and (min-width: 1024px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_wide_responsive' => 1,
    'alpha_layouts_alpha_default_wide_weight' => '3',
    'alpha_layouts_alpha_default_wide_media' => 'all and (min-width: 1220px)',
    'alpha_layouts_alpha_default_fluid_responsive' => 0,
    'alpha_layouts_alpha_default_fluid_weight' => '0',
    'alpha_layouts_alpha_default_fluid_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_primary_alpha_fluid' => 'normal',
    'alpha_layouts_alpha_fluid_normal_responsive' => 1,
    'alpha_layouts_alpha_fluid_normal_weight' => '0',
    'alpha_layouts_alpha_fluid_normal_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_libraries' => array(
      'omega_formalize' => 'omega_formalize',
      'omega_mediaqueries' => 'omega_mediaqueries',
      'omega_equalheights' => 0,
    ),
    'alpha_css' => array(
      'alpha-reset.css' => 'alpha-reset.css',
      'alpha-mobile.css' => 'alpha-mobile.css',
      'alpha-alpha.css' => 'alpha-alpha.css',
      'omega-text.css' => 'omega-text.css',
      'omega-branding.css' => 'omega-branding.css',
      'omega-menu.css' => 'omega-menu.css',
      'omega-forms.css' => 'omega-forms.css',
      'omega-visuals.css' => 'omega-visuals.css',
      'global.css.less' => 'global.css.less',
    ),
    'alpha_exclude' => array(
      'modules/field/theme/field.css' => 0,
      'modules/node/node.css' => 0,
      'modules/user/user.css' => 0,
      'profiles/cf_profile/modules/contrib/views/css/views.css' => 0,
      'misc/vertical-tabs.css' => 0,
      'modules/aggregator/aggregator.css' => 0,
      'modules/block/block.css' => 0,
      'modules/dblog/dblog.css' => 0,
      'modules/file/file.css' => 0,
      'modules/filter/filter.css' => 0,
      'modules/help/help.css' => 0,
      'modules/menu/menu.css' => 0,
      'modules/openid/openid.css' => 0,
      'modules/profile/profile.css' => 0,
      'modules/statistics/statistics.css' => 0,
      'modules/syslog/syslog.css' => 0,
      'modules/system/admin.css' => 0,
      'modules/system/maintenance.css' => 0,
      'modules/system/system.css' => 0,
      'modules/system/system.admin.css' => 0,
      'modules/system/system.base.css' => 0,
      'modules/system/system.maintenance.css' => 0,
      'modules/system/system.menus.css' => 0,
      'modules/system/system.messages.css' => 0,
      'modules/system/system.theme.css' => 0,
      'modules/taxonomy/taxonomy.css' => 0,
      'modules/tracker/tracker.css' => 0,
      'modules/update/update.css' => 0,
    ),
    'alpha_debug_block_toggle' => 0,
    'alpha_debug_block_active' => 0,
    'alpha_debug_grid_toggle' => 1,
    'alpha_debug_grid_active' => 0,
    'alpha_debug_grid_roles' => array(
      1 => '1',
      2 => '2',
    ),
    'alpha_toggle_messages' => 1,
    'alpha_toggle_action_links' => 1,
    'alpha_toggle_tabs' => 1,
    'alpha_toggle_breadcrumb' => 0,
    'alpha_toggle_page_title' => 1,
    'alpha_toggle_feed_icons' => 1,
    'alpha_hidden_title' => 0,
    'alpha_hidden_site_name' => 0,
    'alpha_hidden_site_slogan' => 0,
    'alpha_zone_branding_wrapper' => 1,
    'alpha_zone_branding_force' => 0,
    'alpha_zone_branding_order' => 0,
    'alpha_zone_branding_section' => 'header',
    'alpha_zone_branding_weight' => '2',
    'alpha_zone_branding_columns' => '12',
    'alpha_zone_branding_primary' => NULL,
    'alpha_zone_branding_css' => '',
    'alpha_zone_branding_wrapper_css' => '',
    'alpha_zone_branding_equal_height_container' => 0,
    'alpha_region_menu_force' => 1,
    'alpha_region_menu_zone' => 'branding',
    'alpha_region_menu_prefix' => '5',
    'alpha_region_menu_columns' => '3',
    'alpha_region_menu_suffix' => '0',
    'alpha_region_menu_weight' => '1',
    'alpha_region_menu_position' => '0',
    'alpha_region_menu_css' => '',
    'alpha_region_menu_equal_height_element' => 0,
    'alpha_region_menu_equal_height_container' => 0,
    'alpha_region_branding_force' => 1,
    'alpha_region_branding_zone' => 'branding',
    'alpha_region_branding_prefix' => '0',
    'alpha_region_branding_columns' => '4',
    'alpha_region_branding_suffix' => '0',
    'alpha_region_branding_weight' => '1',
    'alpha_region_branding_position' => '0',
    'alpha_region_branding_css' => '',
    'alpha_region_branding_equal_height_element' => 0,
    'alpha_region_branding_equal_height_container' => 0,
    'alpha_zone_content_wrapper' => 1,
    'alpha_zone_content_force' => 1,
    'alpha_zone_content_order' => 0,
    'alpha_zone_content_section' => 'content',
    'alpha_zone_content_weight' => '2',
    'alpha_zone_content_columns' => '12',
    'alpha_zone_content_primary' => 'content',
    'alpha_zone_content_css' => '',
    'alpha_zone_content_wrapper_css' => '',
    'alpha_zone_content_equal_height_container' => 0,
    'alpha_region_content_force' => 1,
    'alpha_region_content_zone' => 'content',
    'alpha_region_content_prefix' => '0',
    'alpha_region_content_columns' => '8',
    'alpha_region_content_suffix' => '0',
    'alpha_region_content_weight' => '0',
    'alpha_region_content_position' => '0',
    'alpha_region_content_css' => 'grid-8',
    'alpha_region_content_equal_height_element' => 0,
    'alpha_region_content_equal_height_container' => 0,
    'alpha_region_sidebar_first_force' => 1,
    'alpha_region_sidebar_first_zone' => 'content',
    'alpha_region_sidebar_first_prefix' => '0',
    'alpha_region_sidebar_first_columns' => '1',
    'alpha_region_sidebar_first_suffix' => '0',
    'alpha_region_sidebar_first_weight' => '1',
    'alpha_region_sidebar_first_position' => '0',
    'alpha_region_sidebar_first_css' => '',
    'alpha_region_sidebar_first_equal_height_element' => 0,
    'alpha_region_sidebar_first_equal_height_container' => 0,
    'alpha_region_sidebar_second_force' => 1,
    'alpha_region_sidebar_second_zone' => 'content',
    'alpha_region_sidebar_second_prefix' => '0',
    'alpha_region_sidebar_second_columns' => '3',
    'alpha_region_sidebar_second_suffix' => '0',
    'alpha_region_sidebar_second_weight' => '2',
    'alpha_region_sidebar_second_position' => '0',
    'alpha_region_sidebar_second_css' => '',
    'alpha_region_sidebar_second_equal_height_element' => 0,
    'alpha_region_sidebar_second_equal_height_container' => 0,
    'alpha_zone_footer_wrapper' => 1,
    'alpha_zone_footer_force' => 0,
    'alpha_zone_footer_order' => 0,
    'alpha_zone_footer_section' => 'footer',
    'alpha_zone_footer_weight' => '1',
    'alpha_zone_footer_columns' => '12',
    'alpha_zone_footer_primary' => NULL,
    'alpha_zone_footer_css' => '',
    'alpha_zone_footer_wrapper_css' => '',
    'alpha_zone_footer_equal_height_container' => 0,
    'alpha_region_footer_first_force' => 1,
    'alpha_region_footer_first_zone' => 'footer',
    'alpha_region_footer_first_prefix' => '0',
    'alpha_region_footer_first_columns' => '12',
    'alpha_region_footer_first_suffix' => '0',
    'alpha_region_footer_first_weight' => '1',
    'alpha_region_footer_first_position' => '0',
    'alpha_region_footer_first_css' => '',
    'alpha_region_footer_first_equal_height_element' => 0,
    'alpha_region_footer_first_equal_height_container' => 0,
  );
  $export['theme_cf_theme_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'cf_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
