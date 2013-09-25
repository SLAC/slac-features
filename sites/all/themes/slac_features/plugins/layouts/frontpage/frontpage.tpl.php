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
<div class="panel-display panel-frontpage clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <?php if ($content['slider']): ?>
    <div class="inside slider"><?php print $content['slider']; ?></div>    
  <?php endif ?>


  <div class="center-wrapper">
    <div class="middleright-wrapper">
      <div class="frontpage-middle-col">
        <?php if ($content['middletop']): ?>
          <div class="inside middletop"><?php print $content['middletop']; ?></div>    
        <?php endif ?>
        <div class="frontpage-middle-left">
          <?php if ($content['middleleft']): ?>
            <div class="inside middleleft"><?php print $content['middleleft']; ?></div>    
          <?php endif ?>
        </div>
        <div class="frontpage-middle-right">
          <?php if ($content['middleright']): ?>
            <div class="inside middleright"><?php print $content['middleright']; ?></div>    
          <?php endif ?>
        </div>
      </div>

      <div class="frontpage-right-col">
        <?php if ($content['right']): ?>
          <div class="inside right"><?php print $content['right']; ?></div>
        <?php endif ?>
      </div>      
    </div>

    <div class="frontpage-left-col">
      <?php if ($content['left']): ?>
        <div class="inside left"><?php print $content['left']; ?></div>
      <?php endif ?>
    </div>
    

  </div>


  
</div>

