<div class="pp_demo-beans-image-text-link box-about box-type-2">
  <?php if ($title): ?>
    <h2><?php print $title; ?></h2>
  <? endif; ?>
  <div class="<?php if ($shaded){print 'shaded';} ?> <?php if ($subtitle) {print 'with_subtitle';}?> <?php if (isset($links_list)) {print 'with_lists';} ?>">
    <?php if ($subtitle): ?>
      <div class="subtitle"><?php print $subtitle; ?></div>
   <?php endif; 
    if (!empty($links_list)): ?>
      <ul>
        <?php foreach($links_list as $link_from_list): ?><li><?php print $link_from_list; ?></li><?php endforeach; ?>
      </ul>
    <?php endif; // if ($links_list) ?>
    <article><?php print $body; ?></article>
    <?php if ($link): ?><div class="link-reference"><?php print $link; ?></div><?php endif; ?>
  </div>
</div>