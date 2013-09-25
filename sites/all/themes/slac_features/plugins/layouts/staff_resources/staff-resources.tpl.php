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
<div class="panel-display staff-resources clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="panel-panel staff-top">
      <?php if ($content['staffresourcestop']): ?>
        <div class="inside"><?php print $content['staffresourcestop']; ?></div>
      <?php endif ?>
  </div>

  <div class="panel-panel staff-main">
      <?php if ($content['rowonecolone']): ?>
        <div class="inside rowonecolone"><?php print $content['rowonecolone']; ?></div>
      <?php endif ?>
      <?php if ($content['rowonecoltwo']): ?>
        <div class="inside rowonecoltwo"><?php print $content['rowonecoltwo']; ?></div>
      <?php endif ?>
      <?php if ($content['rowonecolthree']): ?>
        <div class="inside rowonecolthree"><?php print $content['rowonecolthree']; ?></div>
      <?php endif ?>
      <?php if ($content['rowtwocolone']): ?>
        <div class="inside rowtwocolone"><?php print $content['rowtwocolone']; ?></div>
      <?php endif ?>
      <?php if ($content['rowtwocoltwo']): ?>
        <div class="inside rowtwocoltwo"><?php print $content['rowtwocoltwo']; ?></div>
      <?php endif ?>
      <?php if ($content['rowtwocolthree']): ?>
        <div class="inside rowtwocolthree"><?php print $content['rowtwocolthree']; ?></div>
      <?php endif ?>
  </div>


</div>
