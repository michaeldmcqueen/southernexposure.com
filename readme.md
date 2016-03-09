# NBM Base Install Profile for Drupal 7

This profile serves as a base to be used as the parent profile in sub-profiles for the key projects.

This will contain modules used for any and all projects, as well as minor drupal configuration changes made on any and all projects.

## Patches Documented in Make File ##
Review make file for any info on patched contrib

## Depends on Inherited Profiles Patch for Drupal 7 ##
A drupal-org-core.make file should be included in the .make for sub-profiles using this base. Example:
```
;
; Patched Drupal Core to facilitate sub-install-profiles, and required patches for securepages
;

core = 7.x
api = 2

projects[drupal][type] = core
projects[drupal][version] = 7.26
projects[drupal][patch][] = http://drupal.org/files/1356276-cleanup-patch42-45.patch
projects[drupal][patch][] = http://drupal.org/files/961508-20.patch
projects[drupal][patch][] = http://drupal.org/files/issues/471970_0.patch

```