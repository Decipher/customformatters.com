<?php
/**
 * @file
 * XML sitemap engines module integration.
 */

/**
 * Implements hook_cf_core_init() on behalf of xmlsitemap_engines.module.
 */
function xmlsitemap_engines_cf_core_init() {
  if (!cf_core_is_state('prod')) {
    $GLOBALS['conf']['xmlsitemap_engines_engines'] = array();
  }
}
