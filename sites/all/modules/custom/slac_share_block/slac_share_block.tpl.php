<div class="share-block-wrapper">
<?php foreach ($share_options as $option) { ?>
  <div class="share-item share-item-<?php print $option['id']; ?>">
    <a class="share-<?php print $option['id']; ?>" target="_blank" href="<?php print $option['url']; ?>">
        <?php print $option['title']; ?>
    </a>
  </div>
<?php } ?>
</div>
