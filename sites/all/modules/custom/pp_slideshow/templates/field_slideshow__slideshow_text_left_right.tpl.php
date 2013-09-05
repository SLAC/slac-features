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
<div id="field-slideshow-<?php print $slideshow_id; ?>-wrapper" class="field-slideshow-text-left-right-wrapper">

  <?php if ($controls_position == "before")  print(render($controls)); ?>

  <?php if ($pager_position == "before")  print(render($pager)); ?>

  <div class="<?php print $classes; ?>">
    <?php foreach ($items as $num => $item) : ?>
      <div class="<?php print $item['classes']; ?>" style="
          <?php if ($num) : ?>display:none;<?php endif; ?>
          <?php if (isset($item['field_fcollection_bgcolor'])): ?> background-color:<?php print $item['field_fcollection_bgcolor'][LANGUAGE_NONE][0]['rgb'];?>;<?php endif;?>">

        <div class="field-slideshow-body" <?php if (isset($item['field_fcollection_txtposition'])): ?>style="float:<?php print $item['field_fcollection_txtposition'][LANGUAGE_NONE][0]['value']; ?>"<?php endif;?>>
          <?php if (isset($item['caption']) && $item['caption'] != '') : ?>
            <div class="field-slideshow-caption">
              <span class="field-slideshow-caption-text"><?php print $item['caption']; ?></span>
            </div>
          <?php endif; ?>
          <?php if (isset($item['field_fcollection_description'])) : ?>
            <div class="field-slideshow-description" >
              <?php print $item['field_fcollection_description'][LANGUAGE_NONE][0]['safe_value']; ?>
            </div>
          <?php endif; ?>
        </div>
        <div class="field-slideshow-image-caption">
          <?php print $item['image']; ?>
        </div>

      </div>
    <?php endforeach; ?>
  </div>

  <?php if ($controls_position != "before") print(render($controls)); ?>

  <?php if ($pager_position != "before") print(render($pager)); ?>

</div>
