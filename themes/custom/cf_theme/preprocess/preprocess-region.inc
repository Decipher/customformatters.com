<?php
/**
 * @file
 */

//
if (isset($vars['region']) && $vars['region'] == 'content'){
  $vars['content_attributes_array']['class'][] = 'contextual-links-region';
}
