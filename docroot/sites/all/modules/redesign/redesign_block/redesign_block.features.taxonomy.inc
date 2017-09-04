<?php
/**
 * @file
 * redesign_block.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function redesign_block_taxonomy_default_vocabularies() {
  return array(
    'topic_blocks' => array(
      'name' => 'Topic blocks',
      'machine_name' => 'topic_blocks',
      'description' => 'Manage topic blocks for front page and topic pages',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_3' => array(
      'name' => 'Access Level',
      'machine_name' => 'vocabulary_3',
      'description' => 'This is actually a way to provide different levels of security permissions for the various items on the web page. If set to "public" or not set, it means anybody has access. If set to "logged-in only" then only those logged in can access the page.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
