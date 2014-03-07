<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<?php $date_prefix = '
  <div class="event-block"><div class="date">
      <ins>' . $month . '</ins>
      <i>' . $day . '</i>
  </div>
  <div class="events">';
?>

<?php $date_suffix = '
</div></div>';
?>

<?php
if ($add_date_html_suffix) {
  print $date_suffix;
}
?>

<?php
if ($add_date_html_prefix) {
  print $date_prefix;
}
?>

<?php
  $event_url = (isset($event_link) && $event_link != '') ? $event_link : $node_url;
?>

<?php
  $ics = '/event/' . $nid . '/calendar.ics';
?>

<div class="event contextual-links-region">
  <a href="<?php print $event_url; ?>"><?php print $title; ?></a> - <?php print $period; ?><?php print $location; ?>
  <a class="icon" href="<?php print $ics; ?>"></a>
  <?php print render($title_suffix); ?>
</div>

<?php
if ($add_last_date_html_suffix) {
  print $date_suffix;
}
?>
