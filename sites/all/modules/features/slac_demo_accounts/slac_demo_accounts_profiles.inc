<?php

/**
 * Create profiles.
 */
function _slac_demo_accounts_create_profiles($uid) {
  $profile = profile2_create(array('type' => SLAC_PROFILE_CONTACT_TYPE, 'uid' => $uid));
  static $profile_counter = 0;

  switch ($profile_counter) {
    case 0:
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'Mario')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Rossi')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Senior Research Associate')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'LCLS and SSRL')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'mario.rossi@email.com')));

      $photo = _slac_demo_accounts_create_image('mario.rossi.jpg');

      $file = (object) array(
        'uri' => $photo->uri,
      );
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;

      break;
    case 1:
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'Jan')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Jensen')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Post-Doc Research Fellow')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'Theory Group, FACET')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'jan.jensen@email.com')));

      $photo = _slac_demo_accounts_create_image('jan.jensen.jpg');

      $file = (object) array(
        'uri' => $photo->uri,
      );
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;
      break;
    case 2:
      $profile->field_prf_contact_fname = array(LANGUAGE_NONE => array(array('value' => 'Don')));
      $profile->field_prf_contact_lname = array(LANGUAGE_NONE => array(array('value' => 'Nadie')));
      $profile->field_prf_contact_title = array(LANGUAGE_NONE => array(array('value' => 'Researcher')));
      $profile->field_prf_contact_affiliation = array(LANGUAGE_NONE => array(array('value' => 'KIPAK')));
      $profile->field_prf_contact_email = array(LANGUAGE_NONE => array(array('email' => 'don.nadie@email.com')));

      $photo = _slac_demo_accounts_create_image('don.nadie.jpg');

      $file = (object) array(
        'uri' => $photo->uri,
      );
      _uuid_features_file_field_import_file($file);
      $profile->field_prf_contact_photo[LANGUAGE_NONE][0] = (array) $file;

      break;
  }
  profile2_save($profile);

  $profile_counter++;
}

/**
 * Create images.
 */
function _slac_demo_accounts_create_image($filename) {
  global $user;
  $destination_directory = 'public://demo_accounts_photos';
  file_prepare_directory($destination_directory, FILE_CREATE_DIRECTORY);
  $source = DRUPAL_ROOT . '/' . drupal_get_path('module', 'slac_demo_accounts') . '/demo_accounts_photos/' . $filename;
  $destination = $destination_directory . '/' . $filename;
  $uri = file_unmanaged_copy($source, $destination);
  $file = new stdClass();
  $file->fid = NULL;
  $file->uri = $uri;
  $file->filename = drupal_basename($uri);
  $file->filemime = file_get_mimetype($file->uri);
  $file->uid      = $user->uid;
  $file->status   = FILE_STATUS_PERMANENT;
  $saved_file = file_save($file);

  return $saved_file;
}