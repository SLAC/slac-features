/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */
 (function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.init = {
     attach: function (context, settings) {
      console.log('theme js init');
     }
   }

 })(jQuery, Drupal, this, this.document);