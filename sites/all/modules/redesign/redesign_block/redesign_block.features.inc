<?php
/**
 * @file
 * redesign_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redesign_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function redesign_block_image_default_styles() {
  $styles = array();

  // Exported image style: topic_block.
  $styles['topic_block'] = array(
    'name' => 'topic_block',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '435',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      2 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '435',
          'height' => '125',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function redesign_block_node_info() {
  $items = array(
    'block' => array(
      'name' => t('Block'),
      'base' => 'node_content',
      'description' => t('Translation-set blocks; these are nodes and can be used in other ways, but they present a block that can be easily used.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Página'),
      'base' => 'node_content',
      'description' => t('Usa este tipo para los demas artículos'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
