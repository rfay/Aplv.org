<?php 

function aplv_new_preprocess_html(&$vars, $hook) {
  // Add the terms to the body classes for MY_NODE_TYPE'.
  if ($node = menu_get_object()) {
    if ($node->type == 'MY_NODE_TYPE') {
     
      // Return an array of taxonomy term ID's.
      $termids = field_get_items('node', $node, 'NAME_OF_YOUR_FIELD');
     
      // Load all the terms to get the name and vocab.
      foreach ($termids as $termid) {
        $terms[] = taxonomy_term_load($termid['tid']);
      }

      // Assign the taxonomy values.
      foreach ($terms as $term) {
        $class = strtolower(drupal_clean_css_identifier($term->name));
        $vocabulary = drupal_clean_css_identifier($term->vocabulary_machine_name);
        $vars['classes_array'][] = 'taxonomy-' . $vocabulary . '-' . $class;
      }
    }
  }
}