core = 7.x
api = 2

; Drupal core
projects[drupal][type] = core
projects[drupal][version] = 7.38

; Install profile
projects[cf_profile][type] = profile
projects[cf_profile][download][type] = git
projects[cf_profile][download][url] = git://github.com/Decipher/customformatters.com.git
projects[cf_profile][download][branch] = master
