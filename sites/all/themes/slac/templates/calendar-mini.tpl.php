<?php
/**
 * @file
 * Template to display a view as a mini calendar month.
 *
 * @see template_preprocess_calendar_mini.
 *
 * $day_names: An array of the day of week names for the table header.
 * $rows: An array of data for each day of the week.
 * $view: The view.
 * $min_date_formatted: The minimum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 * $max_date_formatted: The maximum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 *
 * $show_title: If the title should be displayed. Normally false since the title is incorporated
 *   into the navigation, but sometimes needed, like in the year view of mini calendars.
 *
 */
//dsm('Display: '. $display_type .': '. $min_date_formatted .' to '. $max_date_formatted);dsm($day_names);
$params = array(
  'view' => $view,
  'granularity' => 'month',
  'link' => FALSE,
);
$date_view = strtotime("TODAY");
$arg0 = arg(0);
$arg3 = arg(3);
if ($arg0 == SLAC_EVENT_EVENTS_PAGE_URI) {
  if (!empty($arg3) && preg_match('/^(\d+)-(\d+)-(\d+)/', $arg3)) {
    $date_view = strtotime($arg3);
  }
}
$this_week = date('W', $date_view);
?>
<div class="calendar-calendar"><div class="month-view">
<?php if ($show_title): ?>
<div class="date-nav-wrapper clear-block">
  <div class="date-nav">
    <div class="date-heading">
      <?php print theme('date_nav_title', $params) ?>
    </div>
  </div>
</div>
<?php endif; ?>
<table class="mini">
  <thead>
    <tr>
      <?php foreach ($day_names as $cell): ?>
        <th class="<?php print $cell['class']; ?>">
          <?php print $cell['data']; ?>
        </th>
      <?php endforeach; ?>
    </tr>
  </thead>
  <tbody>
    <?php foreach ((array) $rows as $row): ?>
      <tr>
        <?php foreach ($row as $index => $cell): ?>
          <?php $mod_date = str_replace('events-', '', $cell['id']); ?>
          <?php $mod_week = date('W', strtotime($mod_date)); ?>
          <?php if ($index == 0) { $mod_week = $mod_week + 1; } ?>
          <?php $current_week = ''; ?>
          <?php if ($mod_week == $this_week) { $current_week = ' currently-viewed-week'; } ?>
          <td id="<?php print $cell['id']; ?>" class="<?php print $cell['class']; ?><?php print $current_week; ?>">
            <?php print $cell['data']; ?>
          </td>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
</div></div>