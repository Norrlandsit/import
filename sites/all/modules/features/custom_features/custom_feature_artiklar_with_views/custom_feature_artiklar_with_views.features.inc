<?php
/**
 * @file
 * custom_feature_artiklar_with_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_feature_artiklar_with_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function custom_feature_artiklar_with_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function custom_feature_artiklar_with_views_node_info() {
  $items = array(
    'artikel_digitalisera' => array(
      'name' => t('Artikel digitalisera'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Rubrik'),
      'help' => '',
    ),
    'artikel_l_ra_mer' => array(
      'name' => t('Artikel lära mer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Rubrik'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
