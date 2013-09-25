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
<div class="panel-display three-col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="three-col-middle-right">
    <div class="panel-panel three-col-middle">
      <div class="panel-panel three-col-middle-top">
        <?php if ($content['middle-top']): ?>
          <div class="inside"><?php print $content['middle-top']; ?></div>
        <?php endif ?>
      </div>
      <div class="panel-panel three-col-middle-center">
        <div class="panel-panel three-col-middle-center-left">
          <?php if ($content['middle-center-left']): ?>
            <div class="inside"><?php print $content['middle-center-left']; ?></div>
          <?php endif ?>
        </div>
        <div class="panel-panel three-col-middle-center-right">
          <?php if ($content['middle-center-right']): ?>
            <div class="inside"><?php print $content['middle-center-right']; ?></div>
          <?php endif ?>
        </div>
      </div>
      <div class="panel-panel three-col-middle-bottom">
        <div class="panel-panel three-col-middle-bottom-left">
          <?php if ($content['middle-bottom-left']): ?>
            <div class="inside"><?php print $content['middle-bottom-left']; ?></div>
          <?php endif ?>
        </div>
        <div class="panel-panel three-col-middle-bottom-right">
          <?php if ($content['middle-bottom-right']): ?>
            <div class="inside"><?php print $content['middle-bottom-right']; ?></div>
          <?php endif ?>
        </div>
      </div>
    </div>
    <div class="panel-panel three-col-right">
       <?php if ($content['right']): ?>
          <div class="inside"><?php print $content['right']; ?></div>
        <?php endif ?>
    </div>
  </div>
  <div class="panel-panel three-col-left">
     <?php if ($content['left']): ?>
        <div class="inside"><?php print $content['left']; ?></div>
      <?php endif ?>
  </div>
</div>
