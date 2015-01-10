<?php
/**
 * @file
 * custom_feature_artiklar_with_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function custom_feature_artiklar_with_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_digitalisera:digitalisera
  $menu_links['main-menu_digitalisera:digitalisera'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'digitalisera',
    'router_path' => 'digitalisera',
    'link_title' => 'digitalisera',
    'options' => array(
      'identifier' => 'main-menu_digitalisera:digitalisera',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_lra-mer:l-ra-mer
  $menu_links['main-menu_lra-mer:l-ra-mer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'l-ra-mer',
    'router_path' => 'l-ra-mer',
    'link_title' => 'Lära mer',
    'options' => array(
      'identifier' => 'main-menu_lra-mer:l-ra-mer',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Lära mer');
  t('digitalisera');


  return $menu_links;
}
