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

  <div class="panel-panel header">
     <?php if ($content['header']): ?>
        <div class="inside"><?php print $content['header']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel header-menu">
     <?php if ($content['header-menu']): ?>
        <div class="inside"><?php print $content['header-menu']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel site-title">
     <?php if ($content['site-title']): ?>
        <div class="inside"><?php print $content['site-title']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel main-menu">
     <?php if ($content['main-menu']): ?>
        <div class="inside"><?php print $content['main-menu']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel content">
     <?php if ($content['content']): ?>
        <div class="inside"><?php print $content['content']; ?></div>
      <?php endif ?>
  </div>

  <div class="panel-panel footer-first">
     <?php if ($content['footer']): ?>
        <div class="inside"><?php print $content['footer']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel footer-seccond">
     <?php if ($content['footer']): ?>
        <div class="inside"><?php print $content['footer']; ?></div>
      <?php endif ?>
  </div>
</div>