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
<div class="panel-display general-two-col article_panel_layout<?php print ($content['right']) ? '' : ' full-width'; ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['left_title']): ?>
    <div class="panel-panel general-left-title <?php if ($content['left_author']){ print 'author_exist';}; ?> ">
      <div class="inside">
        <?php if(!$content['social_media_1']) { print $content['left_title'];} 
          else { ?>
          <div class="left-title-wrapper">
            <?php print $content['left_title'];?>
          <div class="social-media-content">
            <?php print $content['social_media_1']; ?>
          </div>
          </div> 
        <?php } ?>
        
        
        <?php if ($content['left_author']) : ?>
          <div class="sub-header <?php if ($content['social_media_2']){ print 'social_media_exist';}; ?>">
              <div class="author-details">
                <?php print $content['left_author']; ?>
              </div>
            <?php if ($content['social_media_2']): ?>
              <div class="social-media-content">
                <?php print $content['social_media_2']; ?>
              </div>
            <?php endif ?> 
          </div>
        <?php endif ?>         
      </div>
    </div>
  <?php endif ?>
  <div class="panel-panel general-left <?php if ($content['left_title']){ print 'top_title_exist';}; ?>">
     <?php if ($content['left']): ?>
        <div class="inside"><?php print $content['left']; ?></div>
      <?php endif ?>
  </div>
  <?php if ($content['right']): ?>
    <div class="panel-panel general-right">
        <div class="inside"><?php print $content['right']; ?></div>
    </div>
  <?php endif ?>
</div>
