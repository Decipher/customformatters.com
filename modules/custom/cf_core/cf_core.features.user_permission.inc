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

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'create formatter content'.
  $permissions['create formatter content'] = array(
    'name' => 'create formatter content',
    'roles' => array(
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own formatter content'.
  $permissions['edit own formatter content'] = array(
    'name' => 'edit own formatter content',
    'roles' => array(
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
