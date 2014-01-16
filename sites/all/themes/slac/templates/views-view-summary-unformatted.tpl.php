<?php
$letters = range('A', 'Z');
foreach($rows as $id => $row){
  $existing_letters[] = $row->link;
  $urls[$row->link] = $row->url;
}
$classes = !empty($row_classes[$id]) ? $row_classes[$id] : '';
print (!empty($options['inline']) ? '<span' : '<div') . ' class="views-summary views-summary-unformatted">';

foreach($letters as $letter){
  if(in_array($letter, $existing_letters)){
    $nav[] = '<span class="result"><a href="' . $urls[$letter] . '"' . 'class="' . $classes . '">' . $letter . '</a></span>';
  }
  else {
    $nav[] = '<span class="no-result">' . $letter . '</span>';
  }
}
if (!empty($row->separator)) {
  print implode(' ' . $row->separator . ' ', $nav);
}
else {
  print implode('  ', $nav);
}
print !empty($options['inline']) ? '</span>' : '</div>';
?>