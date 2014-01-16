<?php

/**
 * Create profiles.
 */
function _slac_demo_accounts_create_profiles($uid) {
  $profile = profile2_create(array('type' => SLAC_PROFILE_CONTACT_TYPE, 'uid' => $uid));
  static $profile_counter = 0;

  switch ($profile_counter) {
    case 0:
      //$profile->field_prf_contact_name = array(LANGUAGE_NONE => array(array('value' => 'John Doe')));
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'Mario')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Rossi')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Senior Research Associate')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'LCLS and SSRL')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'mario.rossi@email.com')));
      $file = (object) array(
        'uri' => 'public://mario.rossi.jpg',
      );
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;

      break;
    case 1:
      //$profile->field_prf_contact_name = array(LANGUAGE_NONE => array(array('value' => 'Mauro Capello')));
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'Jan')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Jensen')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Post-Doc Research Fellow')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'Theory Group, FACET')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'jan.jensen@email.com')));
      $file = (object) array(
        'uri' => 'public://jan.jensen.jpg',
      );
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;
      break;
    case 2:
      //$profile->field_prf_contact_name = array(LANGUAGE_NONE => array(array('value' => 'Kami Cropp')));
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'Don')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Nadie')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Researcher')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'KIPAK')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'don.nadie@email.com')));

      $file = (object) array(
        'uri' => 'public://don.nadie.jpg',
      );
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;

      break;
  }
  profile2_save($profile);

  $profile_counter++;
}
