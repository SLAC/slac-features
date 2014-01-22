<?php

$time_start = microtime(true);

// Rebuild slac_ext_org profile.

$commands = array(
  array(
    'description' => 'Drop all database tables: ',
    'command' => 'drush sql-drop -y',
  ),
  array(
    'description' => 'Install selected profile: ',
    'command' => 'drush si slac_ext_org --db-url=mysql://slac_features:SwHbNJEZ6QRxrlU@localhost/slac_features --account-name=admin --account-pass=618hWVCDmY1n3uf --account-mail=admin@example.com --site-name=SLAC-EXT-ORG-' . date(DATE_ATOM) . ' -y'
  ),
  array(
    'description' => 'Admin login ',
    'command' => 'drush --uri=http://slac-features.wearepropeople.md uli'
  ),
  array(
    'description' => 'Create siteowner user account: ',
    'command' => 'drush user-create siteowner --mail="siteowner@example.com" --password="1"'
  ),
  array(
    'description' => 'Add "site owner" role to siteowner: ',
    'command' => 'drush user-add-role "site owner" siteowner'
  ),
  array(
    'description' => 'Disable webauth module',
    'command' => 'drush dis webauth -y'
  ),
  array(
    'description' => 'Enable demo menu module to show dropdown of main menu',
    'command' => 'drush en slac_menu_demo -y'
  ),
  array(
    'description' => 'Clear all caches: ',
    'command' => 'drush cc all'
  ),
);

$command_output = array();
foreach ($commands as $command) {
  exec($command['command'], $command_output);
}

print 'Site has been rebuilt';
print '<pre>' . implode("\n", $command_output) . '</pre>';

$time_end = microtime(true);
$execution_time = $time_end - $time_start;
print '<br/>Execution time: ' . $execution_time;
