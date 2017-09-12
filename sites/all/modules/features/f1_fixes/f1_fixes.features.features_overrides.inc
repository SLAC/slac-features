<?php
/**
 * @file
 * f1_fixes.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function f1_fixes_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.full_html.settings|acf_allowed_content"] = '';
  $overrides["wysiwyg.full_html.settings|acf_mode"] = 0;
  $overrides["wysiwyg.full_html.settings|add_to_summaries"] = 1;
  $overrides["wysiwyg.full_html.settings|advanced__active_tab"] = 'edit-basic';
  $overrides["wysiwyg.full_html.settings|buttons|linkit"] = array(
    'linkit' => 1,
  );

 return $overrides;
}
