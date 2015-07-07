<?php
/**
 * @file
 * cf_dev.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cf_dev_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'devel',
  );

  return $permissions;
}
