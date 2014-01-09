<?php


$plugin = array(

  'single' => TRUE,
  'title' => t('Profile Complete Pane'),  // Title to show up on the pane screen.
  'description' => t('Shows Profile Completeness'), // Description to show up on the pane screen.
  'category' => t('SLAC'), // A category to put this under.
  'edit form' => 'slac_profile_complete_pane_edit_form', // A function that will return the settings form for the pane.
  'render callback' => 'slac_profile_complete_pane_render', // A function that will return the renderable content.
  'admin info' => 'slac_profile_complete_pane_admin_info', // A function that will return the information displayed on the admin screen (optional).
  'defaults' => array( // Array of defaults for the settings form.
    'text' => '',
  ),
);


/**
 * An edit form for the pane's settings.
 */
function slac_profile_complete_pane_edit_form($form, &$form_state) {

  return $form;
}

/**
 * Checks to see if a particular profile has been created and returns message to create it.
 */
function slac_profile_complete_check_profile ($profile_type, $profile_label, $profile_link) {
  global $user;
  $message = '';
  $result = db_query("SELECT * FROM {profile} p WHERE p.uid = :uid AND p.type = :type", array(':uid' => $user->uid, ':type' => $profile_type));

  $row_count = $result->rowCount();

  if ($row_count === 0) {
    $message = '<p>' .
    t("You haven't created your @profile-label profile yet.  Please <a href=\"!user-path\">create it</a>.",
      array(
        '@profile-label' => $profile_label, 
        '!user-path' => url('user/' . $user->uid . '/' . $profile_link . '/edit'),
      )
    ) . '</p>';
  }
  return $message;
}

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function slac_profile_complete_pane_render($subtype, $conf, $args, $contexts) {

  $accounts_uid = $args[0];
  global $user;

  $block = new stdClass();

  if ($user->uid == $accounts_uid) {
    $block->title = t('Your account');

    $content = slac_profile_complete_check_profile('bio', 'Bio', SLAC_PROFILE_BIO_TYPE);
    $content .= slac_profile_complete_check_profile('contact', 'Contact', SLAC_PROFILE_CONTACT_TYPE);
    $content .= slac_profile_complete_check_profile('social_media', 'Social Media', SLAC_PROFILE_SOCIAL_MEDIA_TYPE);
  }
  else {
    $account = user_load($accounts_uid);
    $block->title = t('Account of @username', array('@username' => format_username($account)));

    $content = t('Placeholder for profile information.');
  }
  $block->content = $content;

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function slac_profile_complete_pane_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $conf['text'];
    return $block;
  }
}
