<?php
/**
 * @file
 * redesign_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function redesign_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'superfish-1' => array(
      'delta' => '1',
      'module' => 'superfish',
    ),
    'superfish-2' => array(
      'delta' => '2',
      'module' => 'superfish',
    ),
    'superfish-3' => array(
      'delta' => '3',
      'module' => 'superfish',
    ),
  );

  // aplv2012d7
  $theme = array();

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'aplv2012d7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'aplv2012d7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['superfish-3'] = array(
    'module' => 'superfish',
    'delta' => '3',
    'theme' => 'aplv2012d7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['aplv2012d7'] = $theme;

  // aplv_new
  $theme = array();

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'aplv_new',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'aplv_new',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['superfish-3'] = array(
    'module' => 'superfish',
    'delta' => '3',
    'theme' => 'aplv_new',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['aplv_new'] = $theme;

  // garland
  $theme = array();

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['superfish-3'] = array(
    'module' => 'superfish',
    'delta' => '3',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['garland'] = $theme;

  // seven
  $theme = array();

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['superfish-3'] = array(
    'module' => 'superfish',
    'delta' => '3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
