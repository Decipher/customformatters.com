<?php
/**
 * @file
 * Node module integration.
 */

/**
 * Implements hook_node_insert().
 */
function cf_core_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'formatter_node_form') {
    if (!empty($form['nid']['#value']) && !isset($_GET['step'])) {
      $form['#multistep']['previous'] = 'group_multistep_import';
      $form['#multistep']['current'] = 'group_multistep_edit';
      $form['#multistep']['next'] = FALSE;
      $form['actions']['previous'] = array_merge(
        $form['actions']['next'],
        array(
          '#value' => t('< Previous'),
          '#weight' => -999,
        )
      );
      unset($form['actions']['next']);
    }

    switch ($form['#multistep']['current']) {
      case 'group_multistep_import':
        $form['#submit'][] = 'cf_core_node_process_import_submit';
        $form['#validate'][] = 'cf_core_node_process_import_validate';
        $form['actions']['next']['#value'] = t('Import');
        unset($form['actions']['save']);
        break;

      case 'group_multistep_edit':
        $form['actions']['previous']['#value'] = t('Re-import');
        break;
    }
  }
}

/**
 * Validation callback for the Formatter node import field.
 */
function cf_core_node_process_import_validate($form, &$form_state) {
  $items = field_get_items('node', (object) $form_state['values'], 'field_formatter_import');
  if (!text_field_is_empty($items[0], NULL)) {
    // Parse import object with the Grammar Parser and return the formatter.
    $formatter = _cf_core_process_formatter("<?php {$items[0]['value']} ?>");
    // @TODO - Add additional formatter validaton.
    if (is_null($formatter) || empty($formatter)) {
      form_set_error('field_formatter_import', '@TODO - Import error message');
      return;
    }
  }
}

/**
 * Submit callback for the Formatter node import field.
 */
function cf_core_node_process_import_submit($form, &$form_state) {
  $items = field_get_items('node', (object) $form_state['values'], 'field_formatter_import');
  if (!text_field_is_empty($items[0], NULL)) {
    // Parse import object with the Grammar Parser and return the formatter.
    $formatter = _cf_core_process_formatter("<?php {$items[0]['value']} ?>");
    if (!empty($formatter)) {
      // Basic information.
      $form_state['values']['title'] = $formatter->label;
      $form_state['values']['field_formatter_name'][LANGUAGE_NONE][0]['value'] = $formatter->name;
      $form_state['values']['field_formatter_description'][LANGUAGE_NONE][0]['value'] = $formatter->description;

      // Taxonomy terms (Format and Field types(s)).
      // @TODO - Re-number vocabularies.
      $vocabularies = array(1 => 'field_types', 3 => 'mode');
      foreach ($vocabularies as $vid => $vocab) {
        foreach (explode(',', $formatter->{$vocab}) as $term_name) {
          $term = taxonomy_get_term_by_name($term_name);
          if (empty($term)) {
            $term = new stdClass();
            $term->vid = $vid;
            $term->name = $term_name;
            taxonomy_term_save($term);
            $term = array($term->tid => $term);
          }
          $form_state['values']["field_formatter_{$vocab}"][LANGUAGE_NONE][] = array('tid' => key($term));
        }
      }

      // Formatter.
      $form_state['values']['field_formatter_code'][LANGUAGE_NONE][0]['value'] = stripslashes($formatter->code);
      $form_state['values']['field_formatter_fapi'][LANGUAGE_NONE][0]['value'] = stripslashes($formatter->fapi);

      // Details.
      $form_state['values']['body'][LANGUAGE_NONE][0]['value'] = $formatter->description;
    }
  }
}
