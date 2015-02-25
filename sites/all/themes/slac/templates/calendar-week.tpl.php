<?php
/**
 * @file
 * Template to display a view as a calendar week.
 *
 * @see template_preprocess_calendar_week.
 *
 * $day_names: An array of the day of week names for the table header.
 * $rows: The rendered data for this week.
 *
 * For each day of the week, you have:
 * $rows['date'] - the date for this day, formatted as YYYY-MM-DD.
 * $rows['datebox'] - the formatted datebox for this day.
 * $rows['empty'] - empty text for this day, if no items were found.
 * $rows['all_day'] - an array of formatted all day items.
 * $rows['items'] - an array of timed items for the day.
 * $rows['items'][$time_period]['hour'] - the formatted hour for a time period.
 * $rows['items'][$time_period]['ampm'] - the formatted ampm value, if any for a time period.
 * $rows['items'][$time_period]['values'] - An array of formatted items for a time period.
 *
 * $view: The view.
 * $min_date_formatted: The minimum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 * $max_date_formatted: The maximum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 *
 */
//dsm('Display: '. $display_type .': '. $min_date_formatted .' to '. $max_date_formatted);
//dsm($rows);
//dsm($items);
$index = 0;
$header_ids = array();
foreach ($day_names as $key => $value) {
  $header_ids[$key] = $value['header_id'];
}
// Calendar day calculation.
$start_timestamp = strtotime($view->args[0]);
?>
<div class="calendar-calendar"><div class="week-view">
<table class="full">
  <thead>
    <tr>
      <?php foreach ($day_names as $cell): ?>
        <th class="<?php print $cell['class']; ?>" id="<?php print $cell['header_id']; ?>">
          <?php print $cell['data']; ?>
        </th>
      <?php endforeach; ?>
    </tr>
  </thead>
  <tbody>
    <tr>
      <?php foreach ($columns as $index => $column): ?>
        <?php $dow = $index - 1; ?>
        <?php $weekend = ''; ?>
        <?php $today = ''; ?>
        <?php if (date('U', strtotime("TODAY")) == date('U', strtotime('+' . $dow . ' DAYS', $start_timestamp))): ?>
          <?php $today = ' today'; ?>
        <?php endif; ?>
        <?php if (strtolower($header_ids[$index]) == 'sunday' || strtolower($header_ids[$index]) == 'saturday'):?>
          <?php $weekend = ' weekend'; ?>
        <?php endif; ?>
        <td class="calendar-day-of-month<?php print $today; ?><?php print $weekend; ?>">
          <div class="week-days"><?php print date('j', strtotime('+' . $dow . ' DAYS', $start_timestamp)); ?></div>
        </td>
      <?php endforeach; ?>
    </tr>
    <?php for ($i = 0; $i < $multiday_rows; $i++): ?>
    <?php
      $colpos = 0;
      $rowclass = "all-day";
      if( $i == 0) {
        $rowclass .= " first";
      }
      if( $i == $multiday_rows - 1) {
        $rowclass .= " last";
      }
    ?>
    <tr class="<?php print $rowclass?>">
      <?php if($i == 0 && ($by_hour_count > 0 || !empty($start_times))) :?>
      <td class="<?php print $agenda_hour_class ?>" rowspan="<?php print $multiday_rows?>">74
        <span class="calendar-hour"><?php print t('All day', array(), array('context' => 'datetime'))?></span>
      </td>
      <?php endif; ?>
      <?php for($j = 0; $j < 6; $j++): ?>
        <?php $cell = (empty($all_day[$j][$i])) ? NULL : $all_day[$j][$i]; ?>
        <?php if($cell != NULL && $cell['filled'] && $cell['wday'] == $j): ?>
          <?php for($k = $colpos; $k < $cell['wday']; $k++) : ?>
            <?php $weekend = ''; ?>
            <?php $today = ''; ?>
            <?php if (strtolower($header_ids[$k]) == 'sunday' || strtolower($header_ids[$k]) == 'saturday'):?>
              <?php $weekend = ' weekend'; ?>
            <?php endif; ?>
            <?php $dow = $k - 1; ?>
            <?php if (date('U', strtotime("TODAY")) == date('U', strtotime('+' . $dow . ' DAYS', $start_timestamp))): ?>
              <?php $today = ' today'; ?>
            <?php endif; ?>
            <td class="multi-day no-entry<?php print $today; ?><?php print $weekend; ?>"><div class="inner">&nbsp;</div></td>
          <?php endfor;?>
          <?php $weekend = ''; ?>
          <?php $today = ''; ?>
          <?php if (strtolower($header_ids[$j]) == 'sunday' || strtolower($header_ids[$j]) == 'saturday'):?>
            <?php $weekend = ' weekend'; ?>
          <?php endif; ?>
          <?php $dow = $j - 1; ?>
          <?php if (date('U', strtotime("TODAY")) == date('U', strtotime('+' . $dow . ' DAYS', $start_timestamp))): ?>
            <?php $today = ' today'; ?>
          <?php endif; ?>
          <td colspan="<?php print $cell['colspan']?>" class="multi-day<?php print $today; ?><?php print $weekend; ?>">
            <div class="inner">
            <?php print $cell['entry']?>
            </div>
          </td>
          <?php $colpos = $cell['wday'] + $cell['colspan']; ?>
        <?php endif; ?>
      <?php endfor; ?>
      <?php for($j = $colpos; $j < 7; $j++) : ?>
      <?php $weekend = ''; ?>
      <?php $today = ''; ?>
      <?php if (strtolower($header_ids[$j]) == 'sunday' || strtolower($header_ids[$j]) == 'saturday'):?>
        <?php $weekend = ' weekend'; ?>
      <?php endif; ?>
      <?php $dow = $j - 1; ?>
      <?php if (date('U', strtotime("TODAY")) == date('U', strtotime('+' . $dow . ' DAYS', $start_timestamp))): ?>
        <?php $today = ' today'; ?>
      <?php endif; ?>
      <td class="multi-day no-entry<?php print $today; ?><?php print $weekend; ?>"><div class="inner">&nbsp;</div></td>
      <?php endfor;?>
    </tr>
    <?php endfor; ?>
    <tr class="not-all-day">
      <?php foreach ($columns as $index => $column): ?>
        <?php $weekend = ''; ?>
        <?php $today = ''; ?>
        <?php if (strtolower($header_ids[$index]) == 'sunday' || strtolower($header_ids[$index]) == 'saturday'):?>
          <?php $weekend = ' weekend'; ?>
        <?php endif; ?>
        <?php $dow = $index - 1; ?>
        <?php if (date('U', strtotime("TODAY")) == date('U', strtotime('+' . $dow . ' DAYS', $start_timestamp))): ?>
          <?php $today = ' today'; ?>
        <?php endif; ?>
        <td class="calendar-agenda-items single-day<?php print $weekend; ?><?php print $today; ?>" headers="<?php print $header_ids[$index] ?>">
          <?php foreach ($items as $time): ?>
            <?php if(!empty($time['values'][$column])) :?>
              <div class="calendar">
              <div class="inner">
              <?php foreach($time['values'][$column] as $item) :?>
                <?php print $item['entry'] ?>
              <?php endforeach; ?>
              </div>
              </div>
            <?php endif; ?>
          <?php endforeach; ?>
        </td>
      <?php endforeach; ?>
    </tr>
  </tbody>
</table>
</div></div>
