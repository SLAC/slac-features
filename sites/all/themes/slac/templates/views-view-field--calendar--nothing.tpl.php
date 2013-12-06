<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
$color = '';
if (isset($row->field_field_slac_event_category[0]['raw']['taxonomy_term'])) {
  $taxonomy_term = $row->field_field_slac_event_category[0]['raw']['taxonomy_term'];
  if (isset($taxonomy_term->field_slac_event_color_reference[LANGUAGE_NONE][0]['tid'])) {
    $term_tid = $taxonomy_term->field_slac_event_color_reference[LANGUAGE_NONE][0]['tid'];
    $term_color = taxonomy_term_load($term_tid);
    $color = strtolower($term_color->name);
  }
}
?>

<?php if ($color): ?>
  <div class="event-bg-<?php print $color;?>" style="background-color:<?php print $color;?>">
<?php endif;?>
<?php print $output; ?>
<?php if ($color): ?>
  </div>
<?php endif;?>