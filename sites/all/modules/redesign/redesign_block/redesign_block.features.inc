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
