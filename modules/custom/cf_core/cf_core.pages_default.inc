<?php
/**
 * @file
 * cf_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cf_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cf_about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cf_about_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cf_about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '23ebe575-ddba-4324-9fc7-87a7dfc11df8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-71aa001d-fd69-4f5c-851c-4f4426fe447d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'About',
      'body' => '<p>
  Custom Formatters (the website) is a repository for user contributed Custom Formatters (the module) snippets.
</p>
<p>
  <h4>But what are formatters?</h4>
  A Formatter is the theme layer for a Field; an Image field contains a file reference, a Formatter is used to render that file as an Image.
</p>
<p>
  <h4>So what is a custom formatter?</h4>
  A custom formatter is a Formatter created by a user/developer for the purpose of rendering a field as necessary, it is made up of two core Drupal API hooks, <a href="http://api.drupal.org/api/drupal/modules%21field%21field.api.php/function/hook_field_formatter_info/7">hook_field_formatter_info()</a> and <a href="http://api.drupal.org/api/drupal/modules%21field%21field.api.php/function/hook_field_formatter_view/7">hook_field_formatter_view()</a>.
</p>
<p>
  <h4>Then what is Custom Formatters (the module)?</h4>
  Custom Formatters (the module) is a utility to create custom formatters, both in a <a href="http://drupal.org/project/ctools">CTools</a>/<a href="http://drupal.org/project/features">Features</a> exportable method and in a Drupal API based version. 
</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71aa001d-fd69-4f5c-851c-4f4426fe447d';
    $display->content['new-71aa001d-fd69-4f5c-851c-4f4426fe447d'] = $pane;
    $display->panels['middle'][0] = 'new-71aa001d-fd69-4f5c-851c-4f4426fe447d';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-71aa001d-fd69-4f5c-851c-4f4426fe447d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cf_about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cf_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cf_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cf_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1fb638d9-f2e5-4f98-b482-1d30bcbfaaec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8db0cfe9-1bcc-4f5c-a4a1-c514e2a44418';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-cf_blog-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8db0cfe9-1bcc-4f5c-a4a1-c514e2a44418';
    $display->content['new-8db0cfe9-1bcc-4f5c-a4a1-c514e2a44418'] = $pane;
    $display->panels['bottom'][0] = 'new-8db0cfe9-1bcc-4f5c-a4a1-c514e2a44418';
    $pane = new stdClass();
    $pane->pid = 'new-be33d03c-8f5a-4d87-9cd3-31bd77a83351';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-cf_formatters-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be33d03c-8f5a-4d87-9cd3-31bd77a83351';
    $display->content['new-be33d03c-8f5a-4d87-9cd3-31bd77a83351'] = $pane;
    $display->panels['left'][0] = 'new-be33d03c-8f5a-4d87-9cd3-31bd77a83351';
    $pane = new stdClass();
    $pane->pid = 'new-79a6b964-cc03-4f27-9edb-163785a72533';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-cf_formatters-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79a6b964-cc03-4f27-9edb-163785a72533';
    $display->content['new-79a6b964-cc03-4f27-9edb-163785a72533'] = $pane;
    $display->panels['right'][0] = 'new-79a6b964-cc03-4f27-9edb-163785a72533';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-be33d03c-8f5a-4d87-9cd3-31bd77a83351';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cf_frontpage'] = $page;

  return $pages;

}
