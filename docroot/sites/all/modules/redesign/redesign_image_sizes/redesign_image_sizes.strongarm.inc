<?php
/**
 * @file
 * redesign_image_sizes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redesign_image_sizes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'file' => array(
      'original' => array(
        'label' => 'Original',
        'custom settings' => 1,
      ),
      'medium' => array(
        'label' => 'Medium',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
