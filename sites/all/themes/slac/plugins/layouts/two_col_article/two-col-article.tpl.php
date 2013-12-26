<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="panel-display general-two-col article_panel_layout" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['left_title']): ?>
    <div class="panel-panel general-left-title">
      <div class="inside"><?php print $content['left_title']; ?>
        <?php if ($content['left_title']): ?>
          <div class="author-details">
            <?php print $content['left_author']; ?>
          </div>
        <?php endif ?>
      </div>
    </div>
  <?php endif ?>
  <div class="panel-panel general-left">
     <?php if ($content['left']): ?>
        <div class="inside"><?php print $content['left']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel general-right">
     <?php if ($content['right']): ?>
        <div class="inside"><?php print $content['right']; ?></div>
      <?php endif ?>
  </div>
</div>
