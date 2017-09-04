<?php
/**
 * @file
 * redesign_menus.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function redesign_menus_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main-menu-french-positioning';
  $context->description = 'Position the main menu for english';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'fr' => 'fr',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-3' => array(
          'module' => 'superfish',
          'delta' => '3',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Position the main menu for english');
  t('Redesign');
  $export['main-menu-french-positioning'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main-menu-positioning';
  $context->description = 'Position the main menu for english';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Position the main menu for english');
  t('Redesign');
  $export['main-menu-positioning'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main-menu-spanish-positioning';
  $context->description = 'Position the main menu for english';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'es' => 'es',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Position the main menu for english');
  t('Redesign');
  $export['main-menu-spanish-positioning'] = $context;

  return $export;
}
