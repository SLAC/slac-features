<?php
/**
 * Template for Calendar Teaser node view mode.
 *
 * If you want to have more granular control over the way fields are displayed
 * use something like follwing instead of render($content);
 *
 * <?php print render($content['field_slac_event_date']); ?>
 *
 * <?php if (isset($content['field_location'])): ?>
 *   <?php print render($content['field_location']); ?>
 * <?php endif; ?>
 *
 * <?php if (isset($content['body'])): ?>
 *   <?php print render($content['body']); ?>
 * <?php endif; ?>
 *
 */
?>
<div class="event-listing-item contextual-links-region <?php if(!isset($content['field_event_image'])) {print 'no-image';}?>">
  <?php if (isset($content['field_event_image'])) { ?>
    <figure><?php print render($content['field_event_image']); ?></figure>
  <?php } ?>
  <article>
    <?php
      $event_link = '';
      if (isset($content['field_slac_event_link'][0]['#element']['url'])) {
        $event_link = $content['field_slac_event_link'][0]['#element']['url'];
      }
      $event_url = ($event_link != '') ? $event_link : $node_url;
    ?>
    <?php if (isset($title)) { ?>
      <h3><a href="<?php print $event_url; ?>"><?php print $title; ?></a></h3>
    <?php }
    if (isset($content['field_slac_event_date'])) {
      print render($content['field_slac_event_date']); 
    } if (isset($content['field_location'])) {
      print render($content['field_location']);
    } if (isset($content['body'])) {
      print render($content['body']);
    } ?>
    <?php print render($title_suffix); ?>
  </article>
</div>