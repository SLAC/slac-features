<?php

/**
 * Display Press Release Archives block with links.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Taxonomy terms menu'),
  'single' => TRUE,
  'defaults' => array(),
  'description' => t("Display a menu with taxonomy terms."),
  'category' => t('KB Article'),
  'render callback' => 'slac_kb_article_content_type_render',
);

/**
 * Outputs links to news archives.
 */
function slac_kb_article_content_type_render($subtype, $conf, $panel_args, $contentext) {
  $block = new stdClass();
  $block->module = 'slac_kb_article';

  if (arg(0) == 'node' && is_numeric(arg(1))) {
    $node = node_load($panel_args['0']);
  }

  $content = array();
  if (isset($node)) {
    $tid = $node->field_kb_categories[LANGUAGE_NONE][0]['tid'];
    $term = taxonomy_term_load($tid);
    $content = slac_kb_article_generate_taxonomy_menu($term, $tid, $tid);
  }
  else {
    $tid = arg(2);
    $term = taxonomy_term_load($tid);
    $content = slac_kb_article_generate_taxonomy_menu($term, $tid);
  }

  // Set the menu title as block title.
  if ($content['childs_number'] > 0) {
    $block->title = t('KB Categories');
  }

  // Set the menu html as block content.
  $block->content = $content['menu_content'];

  return $block;
}

/**
 * Returns the administrative title.
 */
function slac_kb_article_type_admin_title($subtype, $conf) {
  return t('KB Categories');
}

/**
 * Generates vocabulary menu.
 */
function slac_kb_article_generate_taxonomy_menu($term, $tid, $parent = 0) {
  $terms = taxonomy_get_tree($term->vid, $parent);
  $childs_number = 0;

  // Get name for active term.
  if (!empty($terms)) {
    $childs_number = count($terms);
  }

  // Get the active trail tid-s.
  $active = arg($tid);
  $active_parents = taxonomy_get_parents_all($active);
  $active_parents_tids = array();
  foreach ($active_parents as $parent) {
    $active_parents_tids[] = $parent->tid;
  }

  // Build the menu.
  $term_count = count($terms);
  $content = '<ul class="taxonomy_menu">';
  for ($i = 0; $i < $term_count; $i++) {
    // Build the classes string.
    $classes = '';
    $children = taxonomy_get_children($terms[$i]->tid);
    $active_trail = in_array($terms[$i]->tid, $active_parents_tids);
    if ($active_trail && $children) {
      $classes .= 'expanded active-trail ';
    }
    elseif ($active_trail) {
      $classes .= 'active-trail ';
    }
    elseif ($children) {
      $classes .= 'collapsed ';
    }
    if ($i == 0) {
      $content .= '<li class="first ' . $classes . '">' . l($terms[$i]->name, 'taxonomy/term/' . $terms[$i]->tid);
    }
    else {
      if ($terms[$i]->depth == $depth) {
        $content .= '</li><li class="' . $classes . '">' . l($terms[$i]->name, 'taxonomy/term/' . $terms[$i]->tid);
      }
      elseif ($terms[$i]->depth > $depth) {
        $content .= '<ul class="level-' . $terms[$i]->depth . '"><li class="first ' . $classes . '">' . l($terms[$i]->name, 'taxonomy/term/' . $terms[$i]->tid);
      }
      elseif ($terms[$i]->depth < $depth) {
        // Add missing end-tags depending of depth level difference.
        for ($j = $terms[$i]->depth; $j < $depth; $j++) {
          $content .= '</li></ul>';
        }
        $content .= '</li><li class="' . $classes . '">' . l($terms[$i]->name, 'taxonomy/term/' . $terms[$i]->tid);
      }
      // If we have reached the last element add all possibly missing end-tags.
      if (!isset($terms[$i + 1])) {
        for ($j = 0; $j < $terms[$i]->depth; $j++) {
          $content .= '</li></ul>';
        }
      }
    }
    $depth = $terms[$i]->depth;
  }
  $content .= '</li></ul>';

  $results = array(
    'menu_content' => array('#markup' => $content),
    'childs_number' => $childs_number,
  );

  return $results;
}
