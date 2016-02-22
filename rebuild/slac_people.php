<?php

  $commands = array(
    array(
      'description' => 'Drop all database tables: ',
      'command' => 'drush sql-drop -y',
    ),
    array(
      'description' => 'Install selected profile: ',
      'command' => 'drush si slac_people --db-url=mysql://slac_features:SwHbNJEZ6QRxrlU@localhost/slac_features --account-name=admin --account-pass=618hWVCDmY1n3uf --account-mail=admin@example.com --site-name=SLAC-PEOPLE-PROFILE-' . date(DATE_ATOM) . ' -y'
    ),
    array(
      'description' => 'Disable webauth module',
      'command' => 'drush dis webauth -y'
    ),
    array(
      'description' => 'Disable securepages module',
      'command' => 'drush dis securepages -y'
    ),
    array(
      'description' => 'Disable slac_ldap_roles module',
      'command' => 'drush dis slac_ldap_roles -y'
    ),
  );

  foreach ($commands as $command) {
    exec($command['command'], $command_output);
  }

  print 'Site has been rebuilt';
