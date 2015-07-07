core = 7.x
api = 2



; Defaults

defaults[projects][type] = module
defaults[projects][subdir] = contrib



; Modules

projects[admin_menu][version] = 3.0-rc3

projects[better_exposed_filters][version] = 3.0-beta1
; Add improved handling of exposed NULL/NOT NULL filters: http://drupal.org/node/950312#comment-6073974
projects[better_exposed_filters][patch][] = http://drupal.org/files/exposed_EMPTY_NOT_EMPTY-950312-4.patch
; Fix pass by reference issue: http://drupal.org/node/1757578#comment-6397864
projects[better_exposed_filters][patch][] = http://drupal.org/files/pass_by_ref-1757578-1.patch

projects[coder][version] = 1.0

projects[coffee][version] = 1.0

projects[context][version] = 3.0-beta4

projects[context_admin][version] = 1.1

projects[ctools][version] = 1.2
; Fixes Block dependency issue: http://drupal.org/node/1754770#comment-6395412
projects[ctools][patch][] = http://drupal.org/files/blocks_dependency_issue-1754770-1.patch

projects[custom_formatters][version] = 2.2
; Remove Custom Formatters makefile to prevent duplicate downloads: http://drupal.org/node/1721294#comment-6395368
projects[custom_formatters][patch][] = http://drupal.org/files/no_makefile-1721294-1.patch

projects[delete_all][download][revision] = 4986843

projects[devel][version] = 1.3

projects[devel_image_provider][download][revision] = 418a9d8
; Fix multiple issues: http://drupal.org/node/1539208#comment-5890056 + http://drupal.org/node/1516854#comment-5889600
projects[devel_image_provider][patch][] = https://gist.github.com/raw/3473587/e2194e70015bdd7b51b8cdd078b6deaeae99caff/devel_image_provider-1516854+1539208.patch

projects[diff][version] = 2.0

projects[ds][version] = 2.0-beta2

projects[entity][version] = 1.0-rc3

projects[environment_indicator][version] = 1.1

projects[features][version] = 1.0

projects[form_builder][version] = 1.2

projects[field_group][version] = 1.1

projects[filefield_paths][download][revision] = 84fb637

projects[globalredirect][version] = 1.5

projects[google_analytics][version] = 1.2

projects[grammar_parser][version] = 1.2

projects[libraries][version] = 2.0

projects[module_filter][version] = 1.7

projects[nodeformcols][download][revision] = 0120682
; Added support for Contextual administration module: http://drupal.org/node/1411060#comment-5491668
projects[nodeformcols][patch][] = http://drupal.org/files/context_admin_support-1411060-1.patch

projects[oauth][version] = 3.0

projects[omega_tools][version] = 3.0-rc4

projects[options_element][version] = 1.7

projects[page_title][version] = 2.7

projects[panels][version] = 3.3

projects[pathauto][version] = 1.2

projects[prepro][download][revision] = 5d16561

projects[radioactivity][version] = 2.7

; projects[rel][download][revision] = 8e1b012

projects[resp_img][version] = 1.3

projects[rules][version] = 2.2

projects[sassy][version] = 2.13

projects[strongarm][version] = 2.0

projects[site_verify][download][revision] = 6b46622
; Added CTools exportables integration: http://drupal.org/node/1230956#comment-6068128
projects[site_verify][patch][] = http://drupal.org/files/exportables-1230956-6.patch

projects[subpathauto][version] = 1.2

projects[token][version] = 1.3

projects[twitter][version] = 3.2

projects[views][version] = 3.5
; Add improved handling of exposed NULL/NOT NULL filters: http://drupal.org/node/477984#comment-6073924
projects[views][patch][] = http://drupal.org/files/exposed_EMPTY_NOT_EMPTY-477984-60.patch

projects[webform][version] = 3.18

projects[wysiwyg][version] = 2.1

projects[xmlsitemap][version] = 2.0-rc1



; Themes

projects[omega][type] = theme
projects[omega][version] = 3.1

projects[rubik][type] = theme
projects[rubik][version] = 4.0-beta8

projects[tao][type] = theme
projects[tao][version] = 3.0-beta4



; Libraries

libraries[editarea][download][type] = get
libraries[editarea][download][url] = http://downloads.sourceforge.net/project/editarea/EditArea/EditArea%200.8.2/editarea_0_8_2.zip?r=&ts=1334742944&use_mirror=internode

libraries[fittext.js][download][type] = git
libraries[fittext.js][download][url] = https://github.com/davatron5000/FitText.js.git
libraries[fittext.js][download][revision] = 6e86634

libraries[jquery.fileinput][download][type] = git
libraries[jquery.fileinput][download][url] = https://github.com/Decipher/jQuery-Custom-File-Input.git
libraries[jquery.fileinput][download][revision] = 520f11a

libraries[jquery.snippet][download][type] = file
libraries[jquery.snippet][download][url] = http://www.steamdev.com/snippet/js/jquery.snippet.js

libraries[phpsass][download][type] = git
libraries[phpsass][download][url] = https://github.com/richthegeek/phpsass.git
libraries[phpsass][download][revision] = 42565ad

libraries[profiler][download][type] = git
libraries[profiler][download][url] = http://git.drupal.org/project/profiler.git
libraries[profiler][download][revision] = d0137cb
; Added support for Devel generate: http://drupal.org/node/1420344#comment-6015282
libraries[profiler][patch][] = http://drupal.org/files/beta_and_devel-1420344-9.patch

libraries[tinymce][download][type] = file
libraries[tinymce][download][url] = http://github.com/downloads/tinymce/tinymce/tinymce_3.4.9.zip

