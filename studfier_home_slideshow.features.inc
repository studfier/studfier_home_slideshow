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
 * Implements hook_image_default_styles().
 */
function studfier_home_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slide_show.
  $styles['slide_show'] = array(
    'name' => 'slide_show',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
