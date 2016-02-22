<?php


  // Rebuild slac_ext_org profile.

  $commands = array(
    array(
      'description' => 'Drop all database tables: ',
      'command' => 'drush sql-drop -y',
    ),
    array(
      'description' => 'Install selected profile: ',
      'command' => 'drush si slac_int_org --db-url=mysql://slac_features:SwHbNJEZ6QRxrlU@localhost/slac_features --account-name=admin --account-pass=618hWVCDmY1n3uf --account-mail=admin@example.com --site-name=SLAC-INT-ORG-' . date(DATE_ATOM) . ' -y'
    ),
    array(
      'description' => 'Admin login ',
      'command' => 'drush --uri=http://slac-features.wearepropeople.md uli'
    ),
    array(
      'description' => 'Create manager user account: ',
      'command' => 'drush user-create manager --mail="manager@example.com" --password="1"'
    ),
    array(
      'description' => 'Add "manager" role to manager: ',
      'command' => 'drush user-add-role "manager" manager'
    ),
    array(
      'description' => 'Create author user account: ',
      'command' => 'drush user-create author --mail="author@example.com" --password="1"'
    ),
    array(
      'description' => 'Add "author" role to author: ',
      'command' => 'drush user-add-role "author" author'
    ),
    array(
      'description' => 'Create editor user editor: ',
      'command' => 'drush user-create editor --mail="editor@example.com" --password="1"'
    ),
    array(
      'description' => 'Add "editor" role to editor: ',
      'command' => 'drush user-add-role "editor" editor'
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
  $execution_time = round($time_end - $time_start);
  print '<br/>Execution time: ' . $execution_time;
