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
      $profile->field_prf_contact_rg[LANGUAGE_NONE][0]['value'] = 'Aliquam pulvinar magna in scelerisque tincidunt.';
      $profile->field_prf_contact_phone[LANGUAGE_NONE][0]['value'] = '6509262939';
      $profile->field_prf_contact_fax[LANGUAGE_NONE][0]['value'] = '6509262939';
      $profile->field_prf_contact_location[LANGUAGE_NONE][0] = array(
        'street' => '2575 Sand Hill Road',
        'city' => 'Menlo Park',
        'province' => 'CA',
        'postal_code' => '94025',
        'country' => 'us',
        'province_name' => 'California',
        'country_name' => 'United States',
      );
      $profile->field_prf_contact_website = array(
        LANGUAGE_NONE => array(
          array(
            'url' => 'http://slac.stanford.edu',
            'title' => 'slac.stanford.edu',
          )
        )
      );

      // Bio.
      $profile_bio = profile2_create(array('type' => SLAC_PROFILE_BIO_TYPE, 'uid' => $uid));

      $profile_bio->field_prf_bio_bio[LANGUAGE_NONE][0]['value'] = 'Phasellus vel gravida quam. Sed non elementum erat. Nullam accumsan vestibulum orci, at rhoncus tortor accumsan eu? Nullam fermentum leo nibh, quis condimentum metus porta vitae! Vestibulum ultrices felis non urna laoreet, id rhoncus orci fringilla. Mauris venenatis dolor metus, in dignissim nullam.' .
        'Mauris venenatis dolor metus, in dignissim nullam. Phasellus vel gravida quam. Sed non elementum erat. Nullam accumsan vestibulum orci, at rhoncus tortor accumsan eu? Nullam fermentum leo nibh, quis condimentum metus porta vitae! Vestibulum ultrices felis non urna laoreet, id rhoncus orci fringilla. Mauris venenatis dolor metus, in dignissim nullam.' .
        ' Phasellus vel gravida quam. Sed non elementum erat. Nullam accumsan vestibulum orci, at rhoncus tortor accumsan eu? Nullam fermentum leo nibh, quis condimentum metus porta vitae! Vestibulum ultrices felis non urna laoreet, id rhoncus orci fringilla. Mauris venenatis dolor metus, in dignissim nullam. Phasellus vel gravida quam. Sed non elementum erat.' .
        ' Nullam accumsan vestibulum orci, at rhoncus tortor accumsan eu? Nullam fermentum leo nibh, quis condimentum metus porta vitae! Vestibulum ultrices felis non urna laoreet, id rhoncus orci fringilla. Mauris venenatis dolor metus, in dignissim nullam.';

      // Education.
      $profile_bio->field_prf_bio_education[LANGUAGE_NONE][0]['value'] = '1997 | PhD, Scientific Computing and Computational Mathematics';
      $profile_bio->field_prf_bio_education[LANGUAGE_NONE][1]['value'] = '1990 | MSc (with honors), Applied Mathematics, Delft University of Technology';

      // Professional Experience.
      $profile_bio->field_prf_bio_pexp[LANGUAGE_NONE][0]['value'] = '2012 - 2013 | Visiting Professor, Institut National Polytechnique de Tolouse, France';
      $profile_bio->field_prf_bio_pexp[LANGUAGE_NONE][1]['value'] = '2010 - 2014 | Adjunct Professor, Applied and Computational Mathematics, University of Bergen';
      $profile_bio->field_prf_bio_pexp[LANGUAGE_NONE][2]['value'] = '2008 - 2010 | Adjunct Professor, Applied and Computational Mathematics, Uppsala University, Sweden';
      $profile_bio->field_prf_bio_pexp[LANGUAGE_NONE][3]['value'] = '2008 - Present | Visiting Professor, Applied Earth Science, Delft University of Technology';
      $profile_bio->field_prf_bio_pexp[LANGUAGE_NONE][4]['value'] = '2008 - Present | Visiting Professor, Department of Scientific Computing, Uppsala University, Sweden';

      // Areas of Research.
      $profile_bio->field_prf_bio_ar[LANGUAGE_NONE][0]['value'] = '2012 - 2013 | Visiting Professor, Institut National Polytechnique de Tolouse, France';
      $profile_bio->field_prf_bio_ar[LANGUAGE_NONE][1]['value'] = '2010- 2014 | Adjunct Professor, Applied and Computational Mathematics, University of Bergen';
      $profile_bio->field_prf_bio_ar[LANGUAGE_NONE][2]['value'] = '2008 - Present | Visiting Professor, Applied Earth Science, Delft University of Technology';
      $profile_bio->field_prf_bio_ar[LANGUAGE_NONE][3]['value'] = '2008 - Present | Visiting Professor, Department of Scientific Computing, Uppsala University, Sweden';

      // Honors and Awards.
      $profile_bio->field_prf_bio_ha[LANGUAGE_NONE][0]['value'] = '2011 Magne Espedal Professor II, awarded by the University of Bergen , Norway';
      $profile_bio->field_prf_bio_ha[LANGUAGE_NONE][1]['value'] = '2011 School of Earth Sciences Award for Excellence in Teaching';
      $profile_bio->field_prf_bio_ha[LANGUAGE_NONE][2]['value'] = '2010 - 2012 | Stanford Follow';
      $profile_bio->field_prf_bio_ha[LANGUAGE_NONE][3]['value'] = '2009 | Fellow, Leopold Leadership Program';
      $profile_bio->field_prf_bio_ha[LANGUAGE_NONE][4]['value'] = '2008 | Fellow, Leopold Leadership Program II';

      // Professional Activities.
      $profile_bio->field_prf_bio_pa[LANGUAGE_NONE][0]['value'] = '2013 | Invited speaker, Mathematics of Planet Earth, Canada';
      $profile_bio->field_prf_bio_pa[LANGUAGE_NONE][1]['value'] = '2013 | Speaker, TedX Stanford';
      $profile_bio->field_prf_bio_pa[LANGUAGE_NONE][2]['value'] = '2013 - current | LLNL Computational Directorate Review Commitee member';
      $profile_bio->field_prf_bio_pa[LANGUAGE_NONE][3]['value'] = '2013 - current | Advisor Board, Computational Mathematics, University College Dublin';

      // Publications.
      $publications_info = array(
        array(
          'title' => '2013 | First Results From the Electron Hose Instability Studies in FACET',
          'url' => '',
          'doc_type' => 'ms-office-word'
        ),
        array(
          'title' => '2013 | 3D Simulations of Multipacting in the 56 MHz SRF Cavity',
          'url' => '',
          'doc_type' => '_none'
        ),
        array(
          'title' => '2012 | Novel Six-Quark Hidden-Color Dibaryon States in QCD',
          'url' => '',
          'doc_type' => 'pdf'
        ),
        array(
          'title' => '2012 | LCLS Femto-Second Timing and Synchronization System Update',
          'url' => '',
          'doc_type' => 'compressed'
        ),
        array(
          'title' => '2011 | Injected Beam Imaging at SPEAR 3 with a Digital Optic Mask',
          'url' => '',
          'doc_type' => 'external'
        ),
        array(
          'title' => '2010 | Calculation of Coherent Wiggler Radiation Using Eigenfunction Expansion Method',
          'url' => '',
          'doc_type' => 'pdf'
        ),
      );

      foreach ($publications_info as $info) {
        $field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_prf_bio_pub'));
        $field_collection_item->field_title_and_url = array(
          LANGUAGE_NONE => array(
            array(
              'url' => 'http://slac.stanford.edu/',
              'title' => $info['title'],
            )
          )
        );
        $field_collection_item->field_document_type = array(LANGUAGE_NONE => array(array('value' => $info['doc_type'])));
        $field_collection_item->setHostEntity('profile2', $profile_bio);
        entity_save('field_collection_item', $field_collection_item);
      }

      // Talks and Presentations.
      $talks_info = array(
        array(
          'title' => '2013 | DOE Climate Change Study',
          'url' => '',
          'doc_type' => 'ms-office-excel'
        ),
        array(
          'title' => '2012 | 9th Annual SSRL/LCS Users Meeting Presentation. "Developing Nanotube with New Materials."',
          'url' => '',
          'doc_type' => 'gdoc'
        ),
        array(
          'title' => '2012 | Snowmass Conference, Panel Moderator, Funding Strategies Discusion (YouTube)',
          'url' => '',
          'doc_type' => 'ms-office-powerpoint'
        ),
        array(
          'title' => '2011 | 9th Annual SSRL/LCS Users Meeting Presentation. "Developing Nanotube with New Materials."',
          'url' => '',
          'doc_type' => 'keynote'
        ),
      );

      foreach ($talks_info as $info) {
        $field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_prf_bio_tp'));
        $field_collection_item->field_title_and_url = array(
          LANGUAGE_NONE => array(
            array(
              'url' => 'http://slac.stanford.edu/',
              'title' => $info['title'],
            )
          )
        );
        $field_collection_item->field_document_type = array(LANGUAGE_NONE => array(array('value' => $info['doc_type'])));
        $field_collection_item->setHostEntity('profile2', $profile_bio);
        entity_save('field_collection_item', $field_collection_item);
      }

      // Media.
      $profile_media = profile_create(array('type' => SLAC_PROFILE_SOCIAL_MEDIA_TYPE, 'uid' => $uid));

      $profile_media->field_prf_social_twitter = array(
        LANGUAGE_NONE => array(
          array(
            'url' => 'http://twiter.com/simpletestuser1234',
            'title' => 'twitter.com/simpletestuser1234',
          )
        )
      );
      $profile_media->field_prf_social_facebook = array(
        LANGUAGE_NONE => array(
          array(
            'url' => 'http://facebook.com/simpletestuser1234',
            'title' => 'facebook.com/simpletestuser1234',
          )
        )
      );
      $profile_media->field_prf_social_linkedin = array(
        LANGUAGE_NONE => array(
          array(
            'url' => 'http://linkedin.com/in/simpletestuser1234',
            'title' => 'linkedin.com/in/simpletestuser1234',
          )
        )
      );
      $profile_media->field_prf_social_flickr = array(
        LANGUAGE_NONE => array(
          array(
            'url' => 'http://flickr.com/simpletestuser1234',
            'title' => 'flickr.com/simpletestuser1234',
          )
        )
      );
      $profile_media->field_prf_social_googleplus = array(
        LANGUAGE_NONE => array(
          array(
            'url' => 'http://plus.google.com/simpletestuser1234',
            'title' => 'plus.google.com/simpletestuser1234',
          )
        )
      );

      profile2_save($profile_bio);
      profile2_save($profile_media);

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