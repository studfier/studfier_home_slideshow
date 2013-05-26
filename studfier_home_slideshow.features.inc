<?php
/**
 * @file
 * studfier_home_slideshow.features.inc
 */

/**
 * Implements hook_views_api().
 */
function studfier_home_slideshow_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function studfier_home_slideshow_node_info() {
  $items = array(
    'slideshow_feature' => array(
      'name' => t('Slideshow Feature'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
