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
<div class="l-calendar l-calendar-container">
  <div class="l-calendar l-calendar-upper">
    <?php if ($content['title']): ?>
      <div class="l-calendar-title">
        <div class="inside">
            <div class="l-calendar-title-wrapper">
              <?php print $content['title'];?>
            </div> 
        </div>
      </div>
       <?php endif ?>
    <div class="l-calendar-center ">
       <?php if ($content['center']): ?>
          <div class="inside"><?php print $content['center']; ?>
          </div>
        <?php endif ?>
    </div>
  <?php if ($content['right']): ?>
    <div class="l-calendar-right-sidebar">
      <div class="inside"><?php print $content['right']; ?></div>
    </div>
  <?php endif ?>
  </div>
  <div class="l-calendar-lower-section">
    <a name ="linktotop"></a>
    <?php if ($content['list-left']): ?>
    <div class="l-calendar-list-left">
      <div class="inside"><?php print $content['list-left']; ?></div>
    </div>
    <?php endif ?>
    <?php if ($content['list-right']): ?>
    <div class="l-calendar-list-right">
      <div class="inside"><?php print $content['list-right']; ?></div>
    </div>
    <?php endif ?>
    <?php if ($content['list-bottom']): ?>
    <div class="l-calendar-list-bottom">
      <div class="inside"><?php print $content['list-bottom']; ?></div>
    </div>
    <?php endif ?>
  </div>

</div>