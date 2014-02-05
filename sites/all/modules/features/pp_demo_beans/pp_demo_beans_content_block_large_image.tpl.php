<?php
  $css_file = DRUPAL_ROOT . '/' . drupal_get_path('module', 'pp_demo_beans') . '/css/pp_demo_beans_shared.css';
  if (file_exists($css_file)):
?>
  <style type="text/css">
    <?php print file_get_contents($css_file); ?>
  </style>
<?php endif; ?>

<div class="pp_demo-beans-image-text-link box-about box-type-1">
  <?php if ($title): ?>
    <h2><?php print $title; ?></h2>
  <?php endif; ?>
  <div class="<?php if ($shaded){print 'shaded';} ?> <?php if ($subtitle) {print 'with_subtitle';}?> <?php if (isset($image)) {print 'with_image';} ?>">
      <?php if ($subtitle): ?>
        <div class="subtitle"><?php print $subtitle; ?></div>
      <?php endif; ?>
      <?php if (isset($image)): ?>
        <figure class="large-image"><?php print $image; ?></figure>
      <?php endif; // if ($image) ?>
      <article><?php print $body; ?></article>
  </div>
</div>