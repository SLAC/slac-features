<?php

$link = drupal_get_path_alias('user/' . $row->uid);

?>

<a href="<?php print '/' . $link; ?>"><?php print $output;?></a>
