<?php
/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

 /**
  *
  */
/* /
function cf_theme_preprocess(&$vars, $hook) {
  dpm($hook);
}
//* */

/**
 * Implements hook_menu_local_tasks().
 */
function cf_theme_menu_local_tasks(&$vars) {
  $output = '';

  if (!empty($vars['primary'])) {
    $vars['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    // Only display contextual links if the user has the correct permissions enabled.
    // Otherwise, the default primary tabs will be used.
    if (user_access('access contextual links')) {
      $vars['primary']['#prefix'] .= '<div class="contextual-links-wrapper"><ul class="contextual-links">';
      $vars['primary']['#suffix'] = '</ul></div>';
    }
    else {
      $vars['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
      $vars['primary']['#suffix'] = '</ul>';
    }
    $output .= drupal_render($vars['primary']);
  }
  if (!empty($vars['secondary'])) {
    $vars['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $vars['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $vars['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($vars['secondary']);
  }

  return $output;
}

/**
 * Implements hook_menu_local_task().
 */
function cf_theme_menu_local_task($vars) {
  // Remove node view link.
  if ($vars['element']['#link']['path'] == 'node/%/view') {
    return false;
  }

  $link = $vars['element']['#link'];
  $link_text = $link['title'];

  if (!empty($vars['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }

    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  return '<li' . (!empty($vars['element']['#active']) ? ' class="active"' : '') . '>' . l($link_text, $link['href'], $link['localized_options']) . "</li>";
}
