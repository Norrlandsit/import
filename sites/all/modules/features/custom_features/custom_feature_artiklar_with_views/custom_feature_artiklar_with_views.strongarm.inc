<?php
/**
 * @file
 * custom_feature_artiklar_with_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function custom_feature_artiklar_with_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_artikel_digitalisera';
  $strongarm->value = 0;
  $export['comment_anonymous_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_artikel_l_ra_mer';
  $strongarm->value = 0;
  $export['comment_anonymous_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_artikel_digitalisera';
  $strongarm->value = '2';
  $export['comment_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_artikel_l_ra_mer';
  $strongarm->value = '2';
  $export['comment_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_artikel_digitalisera';
  $strongarm->value = 1;
  $export['comment_default_mode_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_artikel_l_ra_mer';
  $strongarm->value = 1;
  $export['comment_default_mode_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_artikel_digitalisera';
  $strongarm->value = '50';
  $export['comment_default_per_page_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_artikel_l_ra_mer';
  $strongarm->value = '50';
  $export['comment_default_per_page_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_artikel_digitalisera';
  $strongarm->value = 1;
  $export['comment_form_location_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_artikel_l_ra_mer';
  $strongarm->value = 1;
  $export['comment_form_location_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_artikel_digitalisera';
  $strongarm->value = '1';
  $export['comment_preview_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_artikel_l_ra_mer';
  $strongarm->value = '1';
  $export['comment_preview_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_artikel_digitalisera';
  $strongarm->value = 1;
  $export['comment_subject_field_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_artikel_l_ra_mer';
  $strongarm->value = 1;
  $export['comment_subject_field_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__artikel_digitalisera';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__artikel_l_ra_mer';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_artikel_digitalisera';
  $strongarm->value = array();
  $export['menu_options_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_artikel_l_ra_mer';
  $strongarm->value = array();
  $export['menu_options_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_artikel_digitalisera';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_artikel_l_ra_mer';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_artikel_digitalisera';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_artikel_l_ra_mer';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_artikel_digitalisera';
  $strongarm->value = '1';
  $export['node_preview_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_artikel_l_ra_mer';
  $strongarm->value = '1';
  $export['node_preview_artikel_l_ra_mer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_artikel_digitalisera';
  $strongarm->value = 1;
  $export['node_submitted_artikel_digitalisera'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_artikel_l_ra_mer';
  $strongarm->value = 1;
  $export['node_submitted_artikel_l_ra_mer'] = $strongarm;

  return $export;
}
