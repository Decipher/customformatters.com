core = 7.x
api = 2



; Includes
includes[custom_formatters] = 'http://dl.dropbox.com/u/1804559/makefiles/custom_formatters-7.x.make'



; Modules - Contrib
projects[admin_menu][subdir] = 'contrib'
projects[admin_menu][version] = '3.0-rc2'

projects[better_exposed_filters][subdir] = 'contrib'
projects[better_exposed_filters][version] = '3.0-beta1'

projects[coder][subdir] = 'contrib'
projects[coder][version] = '1.0'

projects[coffee][subdir] = 'contrib'
projects[coffee][version] = '1.0'

projects[context][subdir] = 'contrib'
projects[context][version] = '3.0-beta2'

projects[context_admin][subdir] = 'contrib'
projects[context_admin][version] = '1.1'

projects[ctools][subdir] = 'contrib'
projects[ctools][version] = '1.0'

projects[devel][type] = "module"
projects[devel][download][type] = "git"
projects[devel][download][url] = "http://git.drupal.org/project/devel.git"
projects[devel][download][revision] = "17527131583b1870392d18a59741d4a2b0e07dde"
projects[devel][subdir] = "contrib"

projects[devel_image_provider][type] = "module"
projects[devel_image_provider][download][type] = "git"
projects[devel_image_provider][download][url] = "http://git.drupal.org/project/devel_image_provider.git"
projects[devel_image_provider][download][revision] = "418a9d8b4ff9ff6434e416eaabbf1ad4ddeb9725"
projects[devel_image_provider][subdir] = "contrib"
projects[devel_image_provider][patch][] = "http://drupal.org/files/resolution-1516854-7.patch"
projects[devel_image_provider][patch][] = "http://drupal.org/files/array_rand_error-1539208-2.patch"

projects[diff][subdir] = 'contrib'
projects[diff][version] = '2.0'

projects[ds][subdir] = 'contrib'
projects[ds][version] = '1.5'
projects[ds][patch][] = 'http://drupal.org/files/hide_tokens-1462544-1.patch'

projects[entity][subdir] = 'contrib'
projects[entity][version] = '1.0-rc2'

projects[environment_indicator][subdir] = 'contrib'
projects[environment_indicator][version] = '1.1'

projects[features][subdir] = 'contrib'
projects[features][version] = '1.0-rc2'

projects[field_group][subdir] = 'contrib'
projects[field_group][version] = '1.1'

projects[globalredirect][subdir] = 'contrib'
projects[globalredirect][version] = '1.4'

projects[google_analytics][subdir] = 'contrib'
projects[google_analytics][version] = '1.2'

projects[grammar_parser][subdir] = 'contrib'
projects[grammar_parser][version] = '1.2'

projects[less][subdir] = 'contrib'
projects[less][version] = '2.5'

projects[libraries][subdir] = 'contrib'
projects[libraries][version] = '2.0-alpha2'

projects[module_filter][subdir] = 'contrib'
projects[module_filter][version] = '1.6'

projects[nodeformcols][subdir] = 'contrib'
projects[nodeformcols][type] = 'module'
projects[nodeformcols][download][type] = 'git'
projects[nodeformcols][download][url] = 'http://git.drupal.org/project/nodeformcols.git'
projects[nodeformcols][download][revision] = '0120682a82fa03d7387cc215ab0cce6d3ae96a45'
projects[nodeformcols][pathces][] = 'http://drupal.org/files/context_admin_support-1411060-1.patch'

projects[oauth][subdir] = 'contrib'
projects[oauth][version] = '3.0'

projects[omega_tools][subdir] = 'contrib'
projects[omega_tools][version] = '3.0-rc4'

projects[page_title][subdir] = 'contrib'
projects[page_title][version] = '2.7'

projects[panels][subdir] = 'contrib'
projects[panels][version] = '3.2'

projects[pathauto][subdir] = 'contrib'
projects[pathauto][version] = '1.0'

projects[pathauto][subdir] = 'contrib'
projects[pathauto][version] = '1.0'

projects[radioactivity][subdir] = 'contrib'
projects[radioactivity][version] = '2.5'

projects[rules][subdir] = 'contrib'
projects[rules][version] = '2.1'

projects[strongarm][subdir] = 'contrib'
projects[strongarm][version] = '2.0-rc1'

projects[site_verify][subdir] = 'contrib'
projects[site_verify][version] = '1.0'
projects[site_verify][patch][] = 'http://drupal.org/files/exportables-1230956-4.patch'

projects[subpathauto][subdir] = 'contrib'
projects[subpathauto][version] = '1.2'

projects[token][subdir] = 'contrib'
projects[token][version] = '1.0'

projects[twitter][subdir] = 'contrib'
projects[twitter][version] = '3.0-beta4'

projects[views][subdir] = 'contrib'
projects[views][version] = '3.3'

projects[wysiwyg][subdir] = 'contrib'
projects[wysiwyg][version] = '2.1'



; Themes - Contrib
projects[omega][subdir] = 'contrib'
projects[omega][version] = '3.1'

projects[rubik][subdir] = 'contrib'
projects[rubik][version] = '4.0-beta7'

projects[tao][subdir] = 'contrib'
projects[tao][version] = '3.0-beta4'



; libraries
projects[fittext.js][type] = 'library'
projects[fittext.js][download][type] = 'git'
projects[fittext.js][download][url] = 'https://github.com/davatron5000/FitText.js.git'
projects[fittext.js][download][revision] = '6e86634ea751a575bf4631495ba8b19fdc9a6273'

projects[jquery.snippet][type] = 'library'
projects[jquery.snippet][download][type] = 'file'
projects[jquery.snippet][download][url] = 'http://www.steamdev.com/snippet/js/jquery.snippet.js'

projects[lessphp][type] = 'library'
projects[lessphp][download][type] = 'file'
projects[lessphp][download][url] = 'http://leafo.net/lessphp/src/lessphp-0.3.4-2.tar.gz'

projects[profiler][type] = "library"
projects[profiler][download][type] = "git"
projects[profiler][download][url] = "http://git.drupal.org/project/profiler.git"
projects[profiler][download][revision] = "d0137cb42bc7a4e9ce0a0431f875806285d09758"
projects[profiler][patch][] = "http://drupal.org/files/beta_and_devel-1420344-9.patch"

projects[tinymce][type] = 'library'
projects[tinymce][download][type] = 'file'
projects[tinymce][download][url] = 'http://www.tinymce.com/track.php?url=http%3A%2F%2Fgithub.com%2Fdownloads%2Ftinymce%2Ftinymce%2Ftinymce_3.4.9.zip'


