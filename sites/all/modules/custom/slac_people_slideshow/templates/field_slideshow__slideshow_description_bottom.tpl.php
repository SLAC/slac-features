<?php
/**
 * @file
 * Template file for field_slideshow
 *
 *
 */

// Should fix issue #1502772
// @todo: find a nicer way to fix this
if (!isset($controls_position)) {
  $controls_position = "after";
}
if (!isset($pager_position)) {
  $pager_position = "after";
}
?>
<div id="field-slideshow-<?php print $slideshow_id; ?>-wrapper" class="field-slideshow-wrapper">

  <?php if ($controls_position == "before")  print(render($controls)); ?>

  <?php if ($pager_position == "before")  print(render($pager)); ?>

  <?php if (isset($breakpoints) && isset($breakpoints['mapping']) && !empty($breakpoints['mapping'])) {
    $style = 'height:' . $slides_max_height . 'px';
  } else {
    $style = 'width:' . $slides_max_width . 'px; height:' . $slides_max_height . 'px';
  } ?>

  <div class="<?php print $classes; ?>" style="<?php print $style; ?>">
    <?php foreach ($items as $num => $item) : ?>
      <div class="<?php print $item['classes']; ?>"<?php if ($num) : ?> style="display:none;"<?php endif; ?>>
        <div class="field-slideshow-image">
          <?php print $item['image']; ?>
        </div>
        <div class="field-slideshow-body">
          <?php if (isset($item['caption']) && $item['caption'] != '') : ?>
            <div class="field-slideshow-caption">
              <span class="field-slideshow-caption-text"><?php print $item['caption']; ?></span>
            </div>
          <?php endif; ?>
          <?php if (isset($item['field_fcollection_description'])) : ?>
            <div class="field-slideshow-description">
              <?php print $item['field_fcollection_description'][LANGUAGE_NONE][0]['safe_value']; ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
    <?php endforeach; ?>
  </div>

  <?php if ($controls_position != "before") print(render($controls)); ?>

  <?php if ($pager_position != "before") print(render($pager)); ?>

</div>
