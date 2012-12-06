<?php
/**
 * @file
 * redesign_block.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function redesign_block_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'redesign_block_placement_settings';
  $context->description = 'Block placement and settings';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-203' => array(
          'module' => 'nodeblock',
          'delta' => '203',
          'region' => 'dashboard_main',
          'weight' => '-10',
        ),
        'nodeblock-210' => array(
          'module' => 'nodeblock',
          'delta' => '210',
          'region' => 'dashboard_main',
          'weight' => '-10',
        ),
        'nodeblock-215' => array(
          'module' => 'nodeblock',
          'delta' => '215',
          'region' => 'dashboard_main',
          'weight' => '-10',
        ),
        'nodeblock-219' => array(
          'module' => 'nodeblock',
          'delta' => '219',
          'region' => 'dashboard_main',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block placement and settings');
  t('Redesign');
  $export['redesign_block_placement_settings'] = $context;

  return $export;
}
