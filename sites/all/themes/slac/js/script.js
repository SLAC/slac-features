/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.mobile_header = {
  attach: function(context, settings) {
	
	$('<div class="icon-wrapper" ><div class="menu-icon mob-icon"></div><div class="account-icon mob-icon" style="display: none"></div><div class="logout-icon mob-icon" style="display: none"></div></div><div class="mobile-account mobile-block" style="display: none"></div><div class="mobile-main-menu mobile-block" style="display: none"></div>').insertAfter('.pane-page-logo')
	
	var element =  $('.pane-system-user-menu')
	
	if ($('.pane-system-user-menu')[0]) {
		$('.account-icon').show()
		$('.logout-icon').show()
	}
	
	//$('.pane-page-logo').parent().text('<div>')
	
    // Place your code here.

  }
};


})(jQuery, Drupal, this, this.document);
