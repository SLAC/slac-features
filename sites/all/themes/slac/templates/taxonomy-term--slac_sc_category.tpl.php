<?php
/**
 * @file
 */
?>

<div id="taxonomy-term-<?php print $tid ?>" class="<?php print $classes ?> contextual-links-region">
  <?php print render($title_prefix); ?>
  <h2>
    <a href="<?php print $term_url ?>"><?php print $name ?></a>
  </h2>
  <?php print render($title_suffix); ?>
  <div class="content">
    <?php print render($content); ?>
  </div>
</div>