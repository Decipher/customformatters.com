<?php
/**
 * @file
 * cf_core.site_verify.inc
 */

/**
 * Implements hook_site_verify_defaults().
 */
function cf_core_site_verify_defaults() {
  $export = array();

  $verification = new stdClass();
  $verification->disabled = FALSE; /* Edit this to true to make a default verification disabled initially */
  $verification->api_version = 1;
  $verification->svid = 'cf_google';
  $verification->label = 'Google';
  $verification->engine = 'google';
  $verification->file = 'google6c4f856e8a73dfed.html';
  $verification->file_contents = 'google-site-verification: google6c4f856e8a73dfed.html';
  $verification->meta = '';
  $export['cf_google'] = $verification;

  return $export;
}
