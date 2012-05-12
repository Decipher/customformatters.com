<?php
/**
 * @file
 */

/**
 * Include for Profiler library.
 */
!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('cf_profile');

/**
 * Implements hook_form_alter().
 */
function cf_profile_form_install_configure_form_alter(&$form, &$form_state, $form_id) {
  $form['site_information']['#access'] = FALSE;
  $form['site_information']['site_name'] = array(
    '#type' => 'value',
    '#value' => t('Custom Formatters'),
  );
  $form['site_information']['site_mail'] = array(
    '#type' => 'value',
    '#value' => 'info@customformatters.com',
  );

  // $form['debug'] = array(
  //   '#type' => 'fieldset',
  //   '#title' => t('Debug settings'),
  // );
  // $form['debug']['devel_generate'] = array(
  //   '#type' => 'checkbox',
  //   '#title' => t('Populate site with Devel generate content.'),
  // );

  // $form['#submit'][] = 'cf_profile_install_configure_form_submit';
}

/**
 *
 */
// function cf_profile_install_configure_form_submit($form, &$form_state) {
//   if ($form_state['values']['devel_generate']) {
//     module_enable(array('devel_generate'));
//     module_load_include('inc', 'devel_generate');
//     devel_generate_content(array(
//       'values' => array(
//         'title_length' => 6,
//         'num_nodes' => 50,
//         'node_types' => drupal_map_assoc(array('blog', 'formatter')),
//       ),
//     ));
//   }
// }
