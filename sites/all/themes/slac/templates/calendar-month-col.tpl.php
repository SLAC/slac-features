<?php
/**
 * @file
 * Template to display a column
 *
 * - $item: The item to render within a td element.
 */
$id = (isset($item['id'])) ? 'id="' . $item['id'] . '" ' : '';
$date = (isset($item['date'])) ? ' data-date="' . $item['date'] . '" ' : '';
$day = (isset($item['day_of_month'])) ? ' data-day-of-month="' . $item['day_of_month'] . '" ' : '';
$headers = (isset($item['header_id'])) ? ' headers="'. $item['header_id'] .'" ' : '';
$today = '';
$weekend = '';
$non_month = '';
if (date('U', strtotime("TODAY")) == date('U', strtotime($item['date']))) {
  $today = ' today';
}
if (strtolower($item['header_id']) == 'sunday' || strtolower($item['header_id']) == 'saturday') {
  $weekend = ' weekend';
}
if (date('n', strtotime("TODAY")) != date('n', strtotime($item['date']))) {
  $non_month = ' not-current';
}
?>
<td <?php print $id?>class="<?php print $item['class'] ?><?php print $today; ?><?php print $weekend; ?><?php print $non_month; ?>" colspan="<?php print $item['colspan'] ?>" rowspan="<?php print $item['rowspan'] ?>"<?php print $date . $headers . $day; ?>>
  <div class="inner">
    <?php print $item['entry'] ?>
  </div>
</td>
