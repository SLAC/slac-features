<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> <?php if (isset($content['field_slac_news_media'])) { print 'image_exist';} ?>"<?php print $attributes; ?>>
  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <?php if (isset($content['field_slac_news_media'])): ?>
        <div class="news-image">
          <?php if ($view_mode == 'teaser') :?>
            <a href="<?php print $node_url; ?>"><?php print render($content['field_slac_news_media'][0]['file']); ?></a>
          <?php else: ?>
            <?php print render($content['field_slac_news_media']); ?>
          <?php endif; ?>
        </div>
      <?php endif; ?>
      <div class="news-content">
      <?php if ($display_submitted): ?>
        <?php print $user_picture; ?>
        <?php print render($content['field_slac_news_date']); ?>
      <?php endif; ?>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2 class='separator' <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
      
  <?php endif; ?>

  <?php
    if (isset($content['field_slac_news_media'])):
      hide($content['field_slac_news_media']);
    endif;
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>
  </div>
  <?php //print render($content['links']); ?>

  <?php //print render($content['comments']); ?>

</article>