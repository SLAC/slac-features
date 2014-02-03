<?php
/**
 * @file
 * Returns the HTML for a node.
 */
?>

<div class="faq contextual-links-region">
  <div class="views-field views-field-title">
    <span class="field-content"><?php print $title; ?></span>
  </div>
  <?php print render($title_suffix); ?>
  <div class="views-field-field-slac-faq-answer">
    <span class="field-content"><?php print $answer; ?></span>
  </div>
</div>
