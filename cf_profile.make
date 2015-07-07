core = 7.x
api = 2



; Modules
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc2

projects[better_exposed_filters][subdir] = contrib
projects[better_exposed_filters][version] = 3.0-beta1
; Add improved handling of exposed NULL/NOT NULL filters: http://drupal.org/node/950312#comment-6073974
projects[better_exposed_filters][patch][] = http://drupal.org/files/exposed_EMPTY_NOT_EMPTY-950312-4.patch

projects[coder][subdir] = contrib
projects[coder][version] = 1.0

projects[coffee][subdir] = contrib
projects[coffee][version] = 1.0

projects[context][subdir] = contrib
projects[context][version] = 3.0-beta2

projects[context_admin][subdir] = contrib
projects[context_admin][version] = 1.1

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.0

projects[custom_formatters][subdir] = contrib
projects[custom_formatters][version] = 2.2

projects[delete_all][type] = module
projects[delete_all][download][type] = git
projects[delete_all][download][url] = http://git.drupal.org/project/delete_all.git
projects[delete_all][download][revision] = b1aeafdb828238533e77fe3fa9edd586e4226926
projects[delete_all][subdir] = contrib
; Add ability to reset node count: http://drupal.org/node/1671842#comment-6198094
projects[delete_all][patch][] = http://drupal.org/files/reset-counters-on-delete-all-1671842-6.patch

projects[devel][type] = module
projects[devel][download][type] = git
projects[devel][download][url] = http://git.drupal.org/project/devel.git
projects[devel][download][revision] = 17527131583b1870392d18a59741d4a2b0e07dde
projects[devel][subdir] = contrib

projects[devel_image_provider][type] = module
projects[devel_image_provider][download][type] = git
projects[devel_image_provider][download][url] = http://git.drupal.org/project/devel_image_provider.git
projects[devel_image_provider][download][revision] = 418a9d8b4ff9ff6434e416eaabbf1ad4ddeb9725
projects[devel_image_provider][subdir] = contrib
; Fix multiple issues: http://drupal.org/node/1539208#comment-5890056 + http://drupal.org/node/1516854#comment-5889600
projects[devel_image_provider][patch][] = https://gist.github.com/raw/3473587/e2194e70015bdd7b51b8cdd078b6deaeae99caff/devel_image_provider-1516854+1539208.patch

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[ds][type] = module
projects[ds][download][type] = git
projects[ds][download][url] = http://git.drupal.org/project/ds.git
projects[ds][download][revision] = 090aa9aa3b742364414585378625d6db06ae152c
projects[ds][subdir] = contrib

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc2

projects[environment_indicator][subdir] = contrib
projects[environment_indicator][version] = 1.1

projects[features][subdir] = contrib
projects[features][version] = 1.0-rc2

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.1

projects[filefield_paths][type] = module
projects[filefield_paths][download][type] = git
projects[filefield_paths][download][url] = http://git.drupal.org/project/filefield_paths.git
projects[filefield_paths][download][revision] = 84fb63726b5745d2775078f7e31fc72f50d9fb60
projects[filefield_paths][subdir] = contrib

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = 1.4

projects[google_analytics][subdir] = contrib
projects[google_analytics][version] = 1.2

projects[grammar_parser][subdir] = contrib
projects[grammar_parser][version] = 1.2

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.0-alpha2

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.6

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

projects[page_title][subdir] = contrib
projects[page_title][version] = 2.7

projects[panels][subdir] = contrib
projects[panels][version] = 3.2

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.0

projects[prepro][subdir] = contrib
projects[prepro][version] = 0.5

projects[radioactivity][subdir] = contrib
projects[radioactivity][version] = 2.5

; projects[rel][type] = module
; projects[rel][download][type] = git
; projects[rel][download][url] = http://git.drupal.org/project/rel.git
; projects[rel][download][revision] = 8e1b01263b8892084a1457e0bf0763c0082ca3df
; projects[rel][subdir] = contrib

projects[resp_img][subdir] = contrib
projects[resp_img][version] = 1.2

projects[rules][subdir] = contrib
projects[rules][version] = 2.1

projects[sassy][type] = module
projects[sassy][download][type] = git
projects[sassy][download][url] = http://git.drupal.org/project/sassy.git
projects[sassy][download][revision] = daf8fd8f43e9f041b7d51bf5921c69f802a63a9b
projects[sassy][subdir] = contrib
; Fix undefined variable 'list' - http://drupal.org/node/1754704#comment-6395230
projects[sassy][patch][] = http://drupal.org/files/undefined_list-1754704-1.patch

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-rc1

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
projects[token][version] = 1.0

projects[twitter][subdir] = contrib
projects[twitter][version] = 3.0-beta4

projects[views][subdir] = contrib
projects[views][version] = 3.3
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
projects[rubik][version] = 4.0-beta7

projects[tao][subdir] = contrib
projects[tao][version] = 3.0-beta4



; Libraries
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


