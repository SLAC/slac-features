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
<div class="panel-display page-basic clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="sidebar-menu">
    <?php if ($content['menu']): ?>
      <?php print $content['menu']; ?>
    <?php endif ?>
  </div>
  <div class="panel-panel header">
     <?php if ($content['header']): ?>
        <div class="inside"><?php print $content['header']; ?></div>
      <?php endif ?>
  </div>

  <div class="panel-panel content">
     <?php if ($content['content']): ?>
        <div class="inside"><?php print $content['content']; ?></div>
      <?php endif ?>
  </div>

  <div class="panel-panel footer">
     <?php if ($content['footer']): ?>
        <div class="inside"><?php print $content['footer']; ?></div>
      <?php endif ?>
  </div>
</div>