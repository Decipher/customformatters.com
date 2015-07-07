<?php
/**
 * @file
 * cf_core.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function cf_core_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cf_about';
  $mini->category = 'Custom Formatters';
  $mini->admin_title = 'About';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '0e9d1573-7f0e-4a83-bf04-ff7abf17c0ee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3eb9f08-a138-4a4a-8331-9eb9a89461ea';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What is Custom Formatters?',
      'body' => '<p>
  Custom Formatters (the website) is a repository for user contributed Custom Formatters (the module) snippets.
</p>
<a href="/about" class="more">Read more</a>',
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
    $pane->uuid = 'b3eb9f08-a138-4a4a-8331-9eb9a89461ea';
    $display->content['new-b3eb9f08-a138-4a4a-8331-9eb9a89461ea'] = $pane;
    $display->panels['middle'][0] = 'new-b3eb9f08-a138-4a4a-8331-9eb9a89461ea';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['cf_about'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cf_beta_signup';
  $mini->category = 'Custom Formatters';
  $mini->admin_title = 'Beta signup';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '7b5f2adc-6f66-4d3e-9924-0c24bb7bb09b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d627e9e-69e7-483e-ab9c-4410142b74de';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/beta-signup"><strong>Beta</strong> testers wanted</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-2 omega',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8d627e9e-69e7-483e-ab9c-4410142b74de';
    $display->content['new-8d627e9e-69e7-483e-ab9c-4410142b74de'] = $pane;
    $display->panels['middle'][0] = 'new-8d627e9e-69e7-483e-ab9c-4410142b74de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8d627e9e-69e7-483e-ab9c-4410142b74de';
  $mini->display = $display;
  $export['cf_beta_signup'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cf_feedback';
  $mini->category = 'Custom Formatters';
  $mini->admin_title = 'Feedback';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '3091a463-92fd-4bed-8b5a-748391a0f20a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ccf8496e-4947-412a-affb-f21e31288e28';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="https://github.com/Decipher/customformatters.com/issues">Feedback / Support</a>',
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
    $pane->uuid = 'ccf8496e-4947-412a-affb-f21e31288e28';
    $display->content['new-ccf8496e-4947-412a-affb-f21e31288e28'] = $pane;
    $display->panels['middle'][0] = 'new-ccf8496e-4947-412a-affb-f21e31288e28';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ccf8496e-4947-412a-affb-f21e31288e28';
  $mini->display = $display;
  $export['cf_feedback'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cf_github';
  $mini->category = 'Custom Formatters';
  $mini->admin_title = 'Github';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '2c198304-c84c-4ecd-b9a6-1313c4e16187';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a5435323-ba56-46cb-b8f0-9c952a596900';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '<body class="html front logged-in page-formatters coffee-processed admin-menu omega-mediaqueries-processed responsive-layout-wid',
      'title' => '',
      'body' => '<a href="https://github.com/Decipher/customformatters.com">
  Steal<br /> this<br /> site<br /> @ <strong>github.com</strong>
</a>',
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
    $pane->uuid = 'a5435323-ba56-46cb-b8f0-9c952a596900';
    $display->content['new-a5435323-ba56-46cb-b8f0-9c952a596900'] = $pane;
    $display->panels['middle'][0] = 'new-a5435323-ba56-46cb-b8f0-9c952a596900';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a5435323-ba56-46cb-b8f0-9c952a596900';
  $mini->display = $display;
  $export['cf_github'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cf_section';
  $mini->category = 'Custom Formatters';
  $mini->admin_title = 'Section';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'e46a0360-af22-4871-ad89-c1de74ce67ac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-23bc46c4-2cc7-4758-9231-edfd398955c3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Section',
      'title' => '',
      'body' => '<?php
$section = \'\';

switch (arg(0)) {
  case \'node\':
    switch (arg(1)) {
      case \'add\':
        // @TODO
        break;

      default:
        $node = menu_get_object();
        switch ($node->type) {
          case \'formatter\':
            $section = \'formatters\';
            break;

          case \'page\':
            $section = $node->title;
            break;

          case \'webform\':
            // @TODO - Ability to override from Node.
            $section = \'Signup\';
            break;

          default:
            $section = $node->type;
        }
    }
    break;

  default:
    $section = arg(0);
}

echo $section;
?>',
      'format' => 'php_code',
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
    $pane->uuid = '23bc46c4-2cc7-4758-9231-edfd398955c3';
    $display->content['new-23bc46c4-2cc7-4758-9231-edfd398955c3'] = $pane;
    $display->panels['middle'][0] = 'new-23bc46c4-2cc7-4758-9231-edfd398955c3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-23bc46c4-2cc7-4758-9231-edfd398955c3';
  $mini->display = $display;
  $export['cf_section'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cf_share';
  $mini->category = 'Custom Formatters';
  $mini->admin_title = 'Share';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '2fe33002-71dd-4ee8-9b89-289ab600a140';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cfc547aa-eda4-4600-9c67-901d9872749b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php $title = drupal_get_title() ? strip_tags(drupal_get_title()) . " | " . check_plain(variable_get("site_name", "Drupal")) : check_plain(variable_get("site_name", "Drupal")) . " | " . filter_xss_admin(variable_get("site_slogan", "")); ?>
<a href="#" title="Share" id="share-handle"></a>
<div id="share-dialog">
  <a href="https://www.facebook.com/sharer/sharer.php?u=<?php echo url(ltrim(request_uri(), \'/\'), array(\'absolute\' => TRUE)) ?>&t=<?php echo $title ?>" class="facebook"><span>Facebook</span></a>
  <a href="https://plus.google.com/share?url=<?php echo url(ltrim(request_uri(), \'/\'), array(\'absolute\' => TRUE)) ?>&title=<?php echo $title ?>" class="gplus"><span>Google+</span></a>
  <a href="https://twitter.com/intent/tweet?text=<?php echo urlencode($title . " - " . url(ltrim(request_uri(), \'/\'), array(\'absolute\' => TRUE)) . " via @CustomFormatter") ?>" class="twitter"><span>Twitter</span></a>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-1 alpha',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfc547aa-eda4-4600-9c67-901d9872749b';
    $display->content['new-cfc547aa-eda4-4600-9c67-901d9872749b'] = $pane;
    $display->panels['middle'][0] = 'new-cfc547aa-eda4-4600-9c67-901d9872749b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cfc547aa-eda4-4600-9c67-901d9872749b';
  $mini->display = $display;
  $export['cf_share'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cf_sponsors';
  $mini->category = 'Custom Formatters';
  $mini->admin_title = 'Sponsors';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '4f67bc38-cc03-4d5e-8f3a-f873402bcc43';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f1b83038-9738-4e35-abcb-620f9d4e0a82';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Realityloop',
      'title' => '',
      'body' => '<a href="http://realityloop.com" alt="Hosting by Realityloop" title="Hosting by Realityloop" class="realityloop">Hosting by <span>Realityloop.com</span></a>',
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
    $pane->uuid = 'f1b83038-9738-4e35-abcb-620f9d4e0a82';
    $display->content['new-f1b83038-9738-4e35-abcb-620f9d4e0a82'] = $pane;
    $display->panels['middle'][0] = 'new-f1b83038-9738-4e35-abcb-620f9d4e0a82';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f1b83038-9738-4e35-abcb-620f9d4e0a82';
  $mini->display = $display;
  $export['cf_sponsors'] = $mini;

  return $export;
}
