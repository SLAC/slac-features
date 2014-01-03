<?php

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
    'command' => 'drush uli'
  ),
);

$command_output = array();
foreach ($commands as $command) {
  exec($command['command'], $command_output);
}

print 'Site has been rebuilt';
print '<pre>' . implode("\n", $command_output) . '</pre>';
