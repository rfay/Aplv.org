<?php
/**
 * @file
 * header_slideshow.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function header_slideshow_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_slideshow';
  $context->description = 'Positioning the header slideshow';
  $context->tag = 'Redesign';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        21 => 21,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-header_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'header_slideshow-block',
          'region' => 'header',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Positioning the header slideshow');
  t('Redesign');
  $export['header_slideshow'] = $context;

  return $export;
}
