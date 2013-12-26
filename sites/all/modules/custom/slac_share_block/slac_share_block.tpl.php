<div class="share-block-wrapper">
<?php foreach ($share_options as $option) { ?>
  <div class="share-item">
    <a target="_blank" href="<?php print $option['url']; ?>">
        <?php print $option['title']; ?>
    </a>
  </div>
<?php } ?>
</div>
