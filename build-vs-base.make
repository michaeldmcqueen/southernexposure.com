; NBM Base Profile - drupal-org.make
api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.43

; VS Base Profile
projects[vs_base][type] = profile
projects[vs_base][download][type] = git
projects[vs_base][download][url] = "git@github.com:michaeldmcqueen/vs-base.git"
projects[vs_base][download][branch] = master

; Defaults
defaults[projects][subdir] = "contrib"

; Contrib Modules
projects[admin_menu][version] = "3.0-rc5"
projects[advagg][version] = "2.17"
projects[advanced_help][version] = "1.3"
projects[auto_nodetitle][version] = "1.0"
projects[better_exposed_filters][version] = "3.2"
projects[blockify][version] = "1.2"
projects[breakpoints][version] = "1.4"
projects[chosen][version] = "2.0-beta4"
projects[ckeditor][version] = "1.7"
projects[context][version] = "3.6"
projects[ctools][version] = "1.9"
projects[date][version] = "2.9"
projects[date_popup_authored][version] = "1.2"
projects[delta][version] = "3.0-beta11"
projects[diff][version] = "3.2"
projects[ds][version] = "2.13"
projects[elements][version] = "1.3"
projects[email][version] = "1.3"
projects[entity][version] = "1.6"
projects[entity_view_mode][version] = "1.0-rc1"
projects[entityreference][version] = "1.1"
projects[features][version] = "2.7"
projects[features_extra][version] = "1.0"
projects[fences][version] = "1.2"
projects[field_collection][version] = "1.0-beta11"
projects[field_group][version] = "1.5"
projects[file_entity][version] = "2.0-beta2"
projects[filefield_paths][version] = "1.0"
projects[filter_perms][version] = "1.0"
projects[globalredirect][version] = "1.5"
projects[google_analytics][version] = "2.1"
projects[honeypot][version] = "1.21"
projects[html5_tools][version] = "1.3"
projects[ie6update][version] = "1.1"
projects[imagecache_token][version] = "1.0-rc2"
projects[invisimail][version] = "1.2"
projects[job_scheduler][version] = "2.0-alpha3"
projects[jquery_update][version] = "2.7"
projects[libraries][version] = "2.2"
projects[link][version] = "1.4"
projects[magic][version] = "2.2"
projects[media][version] = "2.0-beta1"
projects[menu_attributes][version] = "1.0"
projects[menu_block][version] = "2.7"
projects[metatag][version] = "1.13"
projects[module_filter][version] = "2.0"
projects[multiform][version] = "1.1"
projects[pathauto][version] = "1.3"
projects[picture][version] = "2.13"
projects[plupload][version] = "1.7"
projects[publishcontent][version] = "1.3"
projects[redirect][version] = "1.0-rc3"
projects[role_delegation][version] = "1.1"
projects[rules][version] = "2.9"
projects[search404][version] = "1.4"
projects[special_menu_items][version] = "2.0"
projects[speedy][version] = "1.22"
projects[strongarm][version] = "2.0"
projects[token][version] = "1.6"
projects[transliteration][version] = "3.2"
projects[user_settings_access][version] = "1.0"
projects[userprotect][version] = "1.2"
projects[view_unpublished][version] = "1.2"
projects[views][version] = "3.13"
projects[views_bulk_operations][version] = "3.13"
projects[views_ui_basic][version] = "1.3"
projects[weight][version] = "3.1"
projects[xmlsitemap][version] = "2.2"


; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.4/ckeditor_4.3.4_full.zip"
libraries[ckeditor][destination] = "modules/contrib/ckeditor"
libraries[ckeditor][directory_name] = "ckeditor"

; Themes
projects[shiny][version] = "1.7"

