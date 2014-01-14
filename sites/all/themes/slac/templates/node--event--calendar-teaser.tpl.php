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
<div class="event contextual-links-region">
  <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
  <?php print render($title_suffix); ?>
  <br/>

  <?php print render($content); ?>
</div>
<br/>