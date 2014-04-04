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
<div class="panel-display general-two-col reverse article_panel_layout<?php if($content['right_sidebar']) { print ' with-right-sidebar';}?> <?php print ($content['left']) ? '' : ' full-width'; ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['left_title']): ?>
    <div class="panel-panel general-left-title">
      <div class="inside">
      <?php if(!$content['social_media']) { print $content['left_title'];} 
          else { ?>
          <div class="left-title-wrapper">
            <?php print $content['left_title'];?>
          <div class="social-media-content">
            <?php print $content['social_media']; ?>
          </div>
          </div> 
        <?php } ?>      
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['left']): ?>
    <div class="panel-panel general-left ">
      <div class="inside"><?php print $content['left']; ?></div>
    </div>
  <?php endif ?>
  <div class="panel-panel general-right <?php if ($content['left_title']){ print 'top_title_exist';}; ?>">
     <?php if ($content['right'] || $content['inner_right']): ?>
        <div class="inside"><?php print $content['right']; ?>
          <?php if ($content['inner_right'] && $content['inner_left'] && $content['inner_title']): ?>
            <div class="event-wrapper">
                <div class="inner_title"><?php print $content['inner_title']; ?></div>
                <div class="event-wrapper-inner">
                    <div class="inner_left"><?php print $content['inner_left']; ?></div>
                    <div class="inner_right"><?php print $content['inner_right']; ?></div>
                </div>       
            </div>  
          <?php endif ?>
        </div>
      <?php endif ?>
  </div>
<?php if ($content['right_sidebar']): ?>
  <div class="panel-panel right-sidebar <?php if ($content['left_title']){ print 'top_title_exist';}; ?>">
    <div class="inside"><?php print $content['right_sidebar']; ?></div>
  </div>
<?php endif ?>
</div>