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

        <?php
          $desc = '';
          if (isset($item['field_fcollection_description'][LANGUAGE_NONE][0]['safe_value'])) {
            $desc = $item['field_fcollection_description'][LANGUAGE_NONE][0]['safe_value'];
          }
        ?>

        <?php if (!empty($desc)): ?>

        <div class="field-slideshow-body">
          <?php if (isset($item['caption']) && $item['caption'] != '') : ?>
            <div class="field-slideshow-caption">
              <span class="field-slideshow-caption-text"><?php print $item['caption']; ?></span>
            </div>
          <?php endif; ?>

            <div class="field-slideshow-description">

              <?php $link = isset($item['path']['path']); ?>

              <?php if ($link): ?>
              <a href="<?php print $item['path']['path']; ?>">
              <?php endif; ?>

                <?php print views_trim_text(array('max_length' => 190, 'word_boundary' => TRUE, 'ellipsis' => TRUE), $desc); ?>

              <?php if ($link): ?>
              </a>
              <?php endif; ?>
            </div>
        </div>

        <?php endif; ?>
      </div>
    <?php endforeach; ?>
  </div>

  <?php if ($controls_position != "before") print(render($controls)); ?>

  <?php if ($pager_position != "before") print(render($pager)); ?>

</div>
