core = 7.x
api = 2



; Modules
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc3

projects[better_exposed_filters][subdir] = contrib
projects[better_exposed_filters][version] = 3.0-beta1
; Add improved handling of exposed NULL/NOT NULL filters: http://drupal.org/node/950312#comment-6073974
projects[better_exposed_filters][patch][] = http://drupal.org/files/exposed_EMPTY_NOT_EMPTY-950312-4.patch
; Fix pass by reference issue: http://drupal.org/node/1757578#comment-6397864
projects[better_exposed_filters][patch][] = http://drupal.org/files/pass_by_ref-1757578-1.patch

projects[coder][subdir] = contrib
projects[coder][version] = 1.0

projects[coffee][subdir] = contrib
projects[coffee][version] = 1.0

projects[context][subdir] = contrib
projects[context][version] = 3.0-beta4

projects[context_admin][subdir] = contrib
projects[context_admin][version] = 1.1

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2
; Fixes Block dependency issue: http://drupal.org/node/1754770#comment-6395412
projects[ctools][patch][] = http://drupal.org/files/blocks_dependency_issue-1754770-1.patch

projects[custom_formatters][subdir] = contrib
projects[custom_formatters][version] = 2.2
; Remove Custom Formatters makefile to prevent duplicate downloads: http://drupal.org/node/1721294#comment-6395368
projects[custom_formatters][patch][] = http://drupal.org/files/no_makefile-1721294-1.patch

projects[delete_all][type] = module
projects[delete_all][download][type] = git
projects[delete_all][download][url] = http://git.drupal.org/project/delete_all.git
projects[delete_all][download][revision] = 4986843e4569dc9b78cf99fd2c7cc6db96e3053e
projects[delete_all][subdir] = contrib

projects[devel][subdir] = contrib
projects[devel][version] = 1.3

projects[devel_image_provider][type] = module
projects[devel_image_provider][download][type] = git
projects[devel_image_provider][download][url] = http://git.drupal.org/project/devel_image_provider.git
projects[devel_image_provider][download][revision] = 418a9d8b4ff9ff6434e416eaabbf1ad4ddeb9725
projects[devel_image_provider][subdir] = contrib
; Fix multiple issues: http://drupal.org/node/1539208#comment-5890056 + http://drupal.org/node/1516854#comment-5889600
projects[devel_image_provider][patch][] = https://gist.github.com/raw/3473587/e2194e70015bdd7b51b8cdd078b6deaeae99caff/devel_image_provider-1516854+1539208.patch

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[ds][subdir] = contrib
projects[ds][version] = 2.0-beta2

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc3

projects[environment_indicator][subdir] = contrib
projects[environment_indicator][version] = 1.1

projects[features][subdir] = contrib
projects[features][version] = 1.0

projects[form_builder][subdir] = contrib
projects[form_builder][version] = 1.2

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.1

projects[filefield_paths][type] = module
projects[filefield_paths][download][type] = git
projects[filefield_paths][download][url] = http://git.drupal.org/project/filefield_paths.git
projects[filefield_paths][download][revision] = 84fb63726b5745d2775078f7e31fc72f50d9fb60
projects[filefield_paths][subdir] = contrib

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = 1.5

projects[google_analytics][subdir] = contrib
projects[google_analytics][version] = 1.2

projects[grammar_parser][subdir] = contrib
projects[grammar_parser][version] = 1.2

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.0

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[nodeformcols][subdir] = contrib
projects[nodeformcols][type] = module
projects[nodeformcols][download][type] = git
projects[nodeformcols][download][url] = http://git.drupal.org/project/nodeformcols.git
projects[nodeformcols][download][revision] = 0120682a82fa03d7387cc215ab0cce6d3ae96a45
; Added support for Contextual administration module: http://drupal.org/node/1411060#comment-5491668
projects[nodeformcols][patch][] = http://drupal.org/files/context_admin_support-1411060-1.patch

projects[oauth][subdir] = contrib
projects[oauth][version] = 3.0

projects[omega_tools][subdir] = contrib
projects[omega_tools][version] = 3.0-rc4

projects[options_element][subdir] = contrib
projects[options_element][version] = 1.7

projects[page_title][subdir] = contrib
projects[page_title][version] = 2.7

projects[panels][subdir] = contrib
projects[panels][version] = 3.3

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[prepro][subdir] = contrib
projects[prepro][type] = module
projects[prepro][download][type] = git
projects[prepro][download][url] = http://git.drupal.org/project/prepro.git
projects[prepro][download][revision] = 5d16561487756ccec5fe14bb09ee0ffa1455a8d5

projects[radioactivity][subdir] = contrib
projects[radioactivity][version] = 2.7

; projects[rel][type] = module
; projects[rel][download][type] = git
; projects[rel][download][url] = http://git.drupal.org/project/rel.git
; projects[rel][download][revision] = 8e1b01263b8892084a1457e0bf0763c0082ca3df
; projects[rel][subdir] = contrib

projects[resp_img][subdir] = contrib
projects[resp_img][version] = 1.3

projects[rules][subdir] = contrib
projects[rules][version] = 2.2

projects[sassy][subdir] = contrib
projects[sassy][version] = 2.13

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[site_verify][type] = module
projects[site_verify][download][type] = git
projects[site_verify][download][url] = http://git.drupal.org/project/site_verify.git
projects[site_verify][download][revision] = 6b4662210b333561a23ca498df3f91c060eabbd7
projects[site_verify][subdir] = contrib
; Added CTools exportables integration: http://drupal.org/node/1230956#comment-6068128
projects[site_verify][patch][] = http://drupal.org/files/exportables-1230956-6.patch

projects[subpathauto][subdir] = contrib
projects[subpathauto][version] = 1.2

projects[token][subdir] = contrib
projects[token][version] = 1.3

projects[twitter][subdir] = contrib
projects[twitter][version] = 3.2

projects[views][subdir] = contrib
projects[views][version] = 3.5
; Add improved handling of exposed NULL/NOT NULL filters: http://drupal.org/node/477984#comment-6073924
projects[views][patch][] = http://drupal.org/files/exposed_EMPTY_NOT_EMPTY-477984-60.patch

projects[webform][subdir] = contrib
projects[webform][version] = 3.18

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.1

projects[xmlsitemap][subdir] = contrib
projects[xmlsitemap][version] = 2.0-rc1



; Themes
projects[omega][subdir] = contrib
projects[omega][version] = 3.1

projects[rubik][subdir] = contrib
projects[rubik][version] = 4.0-beta8

projects[tao][subdir] = contrib
projects[tao][version] = 3.0-beta4



; Libraries
libraries[editarea][download][type] = get
libraries[editarea][download][url] = http://downloads.sourceforge.net/project/editarea/EditArea/EditArea%200.8.2/editarea_0_8_2.zip?r=&ts=1334742944&use_mirror=internode

libraries[fittext.js][download][type] = git
libraries[fittext.js][download][url] = https://github.com/davatron5000/FitText.js.git
libraries[fittext.js][download][revision] = 6e86634ea751a575bf4631495ba8b19fdc9a6273

libraries[jquery.fileinput][download][type] = git
libraries[jquery.fileinput][download][url] = https://github.com/Decipher/jQuery-Custom-File-Input.git
libraries[jquery.fileinput][download][revision] = 520f11afaaa37541dde9a51db57b99faa5c252ec

libraries[jquery.snippet][download][type] = file
libraries[jquery.snippet][download][url] = http://www.steamdev.com/snippet/js/jquery.snippet.js

libraries[phpsass][download][type] = git
libraries[phpsass][download][url] = https://github.com/richthegeek/phpsass.git
libraries[phpsass][download][revision] = 42565adb2a2f95e0cbdd5f16d554244fdc30f8dd

libraries[profiler][download][type] = git
libraries[profiler][download][url] = http://git.drupal.org/project/profiler.git
libraries[profiler][download][revision] = d0137cb42bc7a4e9ce0a0431f875806285d09758
; Added support for Devel generate: http://drupal.org/node/1420344#comment-6015282
libraries[profiler][patch][] = http://drupal.org/files/beta_and_devel-1420344-9.patch

libraries[tinymce][download][type] = file
libraries[tinymce][download][url] = http://www.tinymce.com/track.php?url=http%3A%2F%2Fgithub.com%2Fdownloads%2Ftinymce%2Ftinymce%2Ftinymce_3.4.9.zip


