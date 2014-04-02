<?php
?>

<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> <?php if (isset($content['field_slac_news_media'])) { print 'image_exist';} ?>"<?php print $attributes; ?>>
  <div class="news-content">
    <?php if (!$page && $title): ?>
      <h2 class="newsletter-item-title"><?php print $title; ?></h2>
    <?php endif; ?>
    <?php if (isset($content['field_slac_news_date'])): ?>
      <?php print render($content['field_slac_news_date']); ?>
    <?php endif; ?>
    <?php if (isset($content['field_slac_news_media'])): ?>
      <div class="newsletter-item-image">
        <?php
          if (isset($content['field_slac_news_media']['0']['#contextual_links'])):
            unset($content['field_slac_news_media']['0']['#contextual_links']);
          endif;
          print render($content['field_slac_news_media']);
        ?>
      </div>
    <?php endif; ?>
    <?php
    if (isset($content['field_slac_news_media'])):
      hide($content['field_slac_news_media']);
    endif;
    hide($content['comments']);
    hide($content['links']);

    if (isset($content['field_slac_news_source'])):
      hide($content['field_slac_news_source']);
    endif;
    print render($content);
    ?>
  </div>
</article>