<?php
/**
 * @file
 * Node module integration.
 */

/**
 * Implements hook_node_insert().
 */
function cf_core_form_alter(&$form, $form_state, $form_id) {
  if ('formatter_node_form' == $form_id) {
    $form['title']['#required'] = FALSE;

    $form['#submit'][] = 'cf_core_node_process_import_submit';
    $form['#validate'][] = 'cf_core_node_process_import_validate';
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
      $vocabularies = array(1 => 'field_types', 2 => 'mode');
      foreach ($vocabularies as $vid => $vocab) {
        $form_state['values']["field_formatter_{$vocab}"][LANGUAGE_NONE] = array();
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
      $formatter->code = stripslashes($formatter->code);
      $form_state['values']['field_formatter_code'][LANGUAGE_NONE][0]['value'] = $formatter->code;
      $formatter->fapi = stripslashes($formatter->fapi);
      $form_state['values']['field_formatter_fapi'][LANGUAGE_NONE][0]['value'] = $formatter->fapi;
      $form_state['values']['field_formatter_dapi'][LANGUAGE_NONE][0]['value'] = theme("custom_formatters_{$formatter->mode}_export", array('item' => $formatter, 'module' => 'cf_core'));

      // Details.
      $form_state['values']['body'][LANGUAGE_NONE][0]['value'] = !isset($form_state['values']['body'][LANGUAGE_NONE][0]['value'])
        ? $formatter->description
        : $form_state['values']['body'][LANGUAGE_NONE][0]['value'];
    }
  }
}
