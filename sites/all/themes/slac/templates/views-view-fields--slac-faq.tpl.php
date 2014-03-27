<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<div class="views-field views-field-title">
  <span class="field-content"><?php print $faq_title;?></span>
</div>
<?php print render($title_suffix); ?>
<div class="views-field-field-slac-faq-answer">
  <span class="faq-details">
    <?php if (isset($question_details)): ?>
      <h2 class="faq-details-title"><?php print t('Question details') . ':'; ?></h2>
      <?php print $question_details; ?>
    <?php endif;?>
  </span>
  <span class="faq-answer">
    <?php if (isset($faq_answer)): ?>
      <h2 class="faq-answer-title"><?php print t('Answer') . ':'; ?></h2>
      <?php print $faq_answer; ?>
    <?php endif;?>
  </span>
  <span class="faq-comments">
    <?php if (isset($comments)) : ?>
      <h2 class="faq-comments-title"><?php print t('Comments') . ':'; ?></h2>
      <?php print drupal_render($comments); ?>
    <?php endif; ?>
  </span>
</div>
