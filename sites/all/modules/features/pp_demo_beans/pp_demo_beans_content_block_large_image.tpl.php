<div class="pp_demo-beans-image-text-link box-about box-type-1">
  <?php if ($title): ?><h2><?php print $title; ?></h2><? endif; ?>
  <div class="<?php if ($shaded){print 'shaded';} ?> <?php if ($subtitle) {print 'with_subtitle';}?> <?php if (isset($image)) {print 'with_image';} ?>">
      <?php if ($subtitle): ?>
        <div class="subtitle"><?php print $subtitle; ?></div>
      <?php endif; ?>
      <?php if (isset($image)): ?>
        <div class="image"><?php print $image; ?></div>
      <?php endif; // if ($image) ?>
      <article><?php print $body; ?></article>
  </div>
</div>
