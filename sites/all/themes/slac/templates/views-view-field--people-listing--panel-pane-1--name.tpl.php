<?php

$link = drupal_get_path_alias('profile/' . $row->users_name);

?>

<a href="<?php print '/' . $link; ?>"><?php print $output;?></a>