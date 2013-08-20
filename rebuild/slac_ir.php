<?php

// Rebuild slac_ir profile.

$commands = array(
  array(
    'description' => 'Drop all database tables: ',
    'command' => 'drush sql-drop -y',
  ),
  array(
    'description' => 'Install selected profile: ',
    'command' => 'drush si slac_ir --db-url=mysql://root:slac_features@localhost/slac_features --account-name=admin --account-pass=618hWVCDmY1n3uf --account-mail=admin@example.com --site-name=Site-Install -y'
  ),
);

foreach ($commands as $command) {
  exec($command['command'], $command_output);
}
