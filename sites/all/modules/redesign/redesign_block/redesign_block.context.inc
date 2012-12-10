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
  $context->name = 'about_us_topic_overview_nodeblocks';
  $context->description = '';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        19 => 19,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-220' => array(
          'module' => 'nodeblock',
          'delta' => '220',
          'region' => 'content_bottom_upper',
          'weight' => '-10',
        ),
        'nodeblock-221' => array(
          'module' => 'nodeblock',
          'delta' => '221',
          'region' => 'content_bottom_upper',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Redesign');
  $export['about_us_topic_overview_nodeblocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'how_we_do_it_topic_overview_nodeblocks';
  $context->description = '';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        18 => 18,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-214' => array(
          'module' => 'nodeblock',
          'delta' => '214',
          'region' => 'content_bottom_lower',
          'weight' => '-10',
        ),
        'nodeblock-213' => array(
          'module' => 'nodeblock',
          'delta' => '213',
          'region' => 'content_bottom_lower',
          'weight' => '-10',
        ),
        'nodeblock-211' => array(
          'module' => 'nodeblock',
          'delta' => '211',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'nodeblock-212' => array(
          'module' => 'nodeblock',
          'delta' => '212',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Redesign');
  $export['how_we_do_it_topic_overview_nodeblocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our_work_topic_overview_nodeblocks';
  $context->description = '';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        20 => 20,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-216' => array(
          'module' => 'nodeblock',
          'delta' => '216',
          'region' => 'content_bottom_upper',
          'weight' => '-10',
        ),
        'nodeblock-217' => array(
          'module' => 'nodeblock',
          'delta' => '217',
          'region' => 'content_bottom_upper',
          'weight' => '-10',
        ),
        'nodeblock-218' => array(
          'module' => 'nodeblock',
          'delta' => '218',
          'region' => 'content_bottom_lower',
          'weight' => '-10',
        ),
        'nodeblock-219' => array(
          'module' => 'nodeblock',
          'delta' => '219',
          'region' => 'content_bottom_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Redesign');
  $export['our_work_topic_overview_nodeblocks'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'what_we_do_nodeblock_position';
  $context->description = '';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        17 => 17,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-205' => array(
          'module' => 'nodeblock',
          'delta' => '205',
          'region' => 'content_bottom_upper',
          'weight' => '-10',
        ),
        'nodeblock-206' => array(
          'module' => 'nodeblock',
          'delta' => '206',
          'region' => 'content_bottom_upper',
          'weight' => '-10',
        ),
        'nodeblock-207' => array(
          'module' => 'nodeblock',
          'delta' => '207',
          'region' => 'content_bottom_upper',
          'weight' => '-10',
        ),
        'nodeblock-208' => array(
          'module' => 'nodeblock',
          'delta' => '208',
          'region' => 'content_bottom_lower',
          'weight' => '-10',
        ),
        'nodeblock-209' => array(
          'module' => 'nodeblock',
          'delta' => '209',
          'region' => 'content_bottom_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Redesign');
  $export['what_we_do_nodeblock_position'] = $context;

  return $export;
}
