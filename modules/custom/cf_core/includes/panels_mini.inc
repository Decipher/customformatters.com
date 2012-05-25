<?php
/**
 * @file
 * Mini panels module inegration.
 */

/**
 * Implements hook_block_info().
 */
function cf_core_block_info() {
  $blocks = array();

  $blocks['download_module'] = array(
    'info' => t('Module download'),
    'cache' => DRUPAL_CACHE_GLOBAL,
  );

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function cf_core_block_view($delta = '') {
  if (function_exists($function = "cf_core_block_{$delta}_view")) {
    return $function();
  }
}

/**
 * Module download block view callback.
 */
function cf_core_block_download_module_view() {
  // Get stable releases.
  $versions = _cf_core_get_releases(array('7.x', '6.x'), 'stable');

  // Create item list with the latest stable releases.
  $items = array();
  $count = 0;
  foreach ($versions as $version) {
    $items[$count] = array(
      'data' => l(t('download !version', array('!version' => '<strong>' . key($version) . '</strong>')), $version[key($version)]['download_link'], array('html' => TRUE)),
      'class' => array("download-{$count}"),
    );
    if (0 == $count) {
      $items[$count]['class'][] = 'first';
    }
    $count++;
    if (count($versions) == $count) {
      $items[$count - 1]['class'][] = 'last';
    }
  }

  // Return item list.
  return array(
    'content' => array(
      '#theme' => 'item_list',
      '#items' => $items,
    ),
  );
}
