<?php
/**
 * This file is copied into the /webauth directory of a site
 * It is the glue between Webauth and Drupal - essentially grabbing
 * Webauth session data and copying it into Drupal
 *
 * This login script is passed after webauth is passed
 */


//We collect some information about the user once logged in
global $base_url, $cookie_domain, $conf;

//Store current directory. To get our session to work, we need to be in Drupal root for the next bit
$currdir=getcwd();

//Now we want to get this data over to Drupal - so we need to bootstrap it
//We are in /path/to/drupal/sites/[either default or sitefolder]/webauth/
if ($postition = strpos($currdir, 'sites')) {
  define('DRUPAL_ROOT', rtrim(substr($currdir,0, $postition), "/\//"));
} else {
  define('DRUPAL_ROOT', $_SERVER['DOCUMENT_ROOT']);
}

// @todo: what is the name for the subdirectory ENV name??
if (array_key_exists('SUBDIRECTORY', $_SERVER)) {
  $base_url = 'https://'.$_SERVER['HTTP_HOST'] . '/' . $_SERVER['SUBDIRECTORY'];
} else {
  // assume provisioned sites will be
  $base_url = 'https://'.$_SERVER['HTTP_HOST']; // THIS IS IMPORTANT
}

$base_url = rtrim($base_url, "/\//");

// in case cookie is not there
if (!isset($_COOKIE['webauth_at'])) {
  // setcookie('webauth_at', md5(rand()), time() + 36000, '/');
  header("Location: " . $base_url);
  exit();
}

//store the current time and the webauth_at cookie in an array
$wa_data = array('wa_new' => TRUE, 'wa_time' => time(), 'wa_at' => md5($_COOKIE['webauth_at']));

//store any other webauth data, such as WEBAUTH_USER or WEBAUTH_EMAIL in the array
foreach ($_SERVER as $key => $value) {
  if (strtoupper(substr($key,0,8)) == 'WEBAUTH_') {
    $wa_data['wa_'.strtolower(substr($key,8))] = $value;
  }
}

chdir(DRUPAL_ROOT);
require_once './includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL); // We need this I think to get full session

global $user;
if ($user->uid == 0) {
  drupal_session_start();
}
//We're done and have created our Drupal session in the Drupal root directory
//This means the $_populated SESSION variable will be available to our Drupal code
//Move back to our original place
chdir($currdir);

//Copying our data into the session
$_SESSION['wa_data'] = $wa_data;


//Some notes.  Stanford uses it's own sessions in parallel to Drupal - should we?
//Also they write to a temporary database table storing this data
//And they set cookies - again should we?  Probably.
// $host  = $_SERVER['HTTP_HOST'];
// $http = $_SERVER['HTTPS'] ? 'https' : 'http';
header('Location: ' . $base_url . '/webauth/authenticate');
