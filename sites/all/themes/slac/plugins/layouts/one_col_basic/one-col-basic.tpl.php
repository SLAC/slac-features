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
<div class="panel-display general-one-col  " <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['title']): ?>
    <div class="panel-panel general-title">  
      <div class="inside"><?php print $content['title']; ?></div>
    </div>
  <?php endif ?>
  <?php if ($content['content']): ?>
    <div class="panel-panel general-content <?php if ($content['title']){ print 'top_title_exist';}; ?>">
       <div class="inside"><?php print $content['content']; ?></div>
    </div>
  <?php endif ?>
</div>