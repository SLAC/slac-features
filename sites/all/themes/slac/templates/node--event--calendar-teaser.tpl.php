<?php
/**
 * Template for Calendar Teaser node view mode.
 */
?>
<a href="<?php print $node_url; ?>"><?php print $title; ?></a><br/>
<?php print render($content['field_slac_event_date']); ?>