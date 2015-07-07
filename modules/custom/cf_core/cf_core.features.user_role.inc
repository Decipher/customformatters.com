<?php
/**
 * @file
 * cf_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cf_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 2,
  );

  return $roles;
}
