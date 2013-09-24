<?php

// Rebuild slac_people_profile profile.

$commands = array(
  array(
    'description' => 'Drop all database tables: ',
    'command' => 'drush sql-drop -y',
  ),
  array(
    'description' => 'Install selected profile: ',
    'command' => 'drush si slac_people --db-url=mysql://slac_features:SwHbNJEZ6QRxrlU@localhost/slac_features --account-name=admin --account-pass=618hWVCDmY1n3uf --account-mail=admin@example.com --site-name=SLAC-PEOPLE-PROFILE-' . date(DATE_ATOM) . ' -y'
  ),
);

foreach ($commands as $command) {
  exec($command['command'], $command_output);
}

print 'Site has been rebuilt';
