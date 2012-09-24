<?php
/**
 * @file
 * cf_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cf_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access environment indicator.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: access workbench.
  // $permissions['access workbench'] = array(
  //   'name' => 'access workbench',
  //   'roles' => array(
  //     0 => 'administrator',
  //     1 => 'contributor',
  //   ),
  //   'module' => 'workbench',
  // );

  // Exported permission: create formatter content.
  $permissions['create formatter content'] = array(
    'name' => 'create formatter content',
    'roles' => array(
      0 => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own formatter content.
  $permissions['edit own formatter content'] = array(
    'name' => 'edit own formatter content',
    'roles' => array(
      0 => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // // Exported permission: use workbench_moderation my drafts tab.
  // $permissions['use workbench_moderation my drafts tab'] = array(
  //   'name' => 'use workbench_moderation my drafts tab',
  //   'roles' => array(
  //     0 => 'administrator',
  //     1 => 'contributor',
  //   ),
  //   'module' => 'workbench_moderation',
  // );

  // // Exported permission: view moderation messages.
  // $permissions['view moderation messages'] = array(
  //   'name' => 'view moderation messages',
  //   'roles' => array(
  //     0 => 'administrator',
  //     1 => 'contributor',
  //   ),
  //   'module' => 'workbench_moderation',
  // );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'contributor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
