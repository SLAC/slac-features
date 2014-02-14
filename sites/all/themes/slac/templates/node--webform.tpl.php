<?php
/**
 * @file
 */
?>

<div class="node-<?php print $node->nid; ?> <?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="webform-content">
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h2 class='separator' <?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php print render($content); ?>
  </div>
</div>