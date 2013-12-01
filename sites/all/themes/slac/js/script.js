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

Drupal.behaviors.wrapp_frontpage = {
  attach: function(context, settings) {
  	var $front_page_block = $('.front .pane-page-content .general-right .panel-pane')
  	
  	if ($('.front .pane-page-content .general-left .panel-pane')[0]) {
  		$('.pane-page-content .general-left .panel-pane').not('.pane-bundle-slideshow-description-bottom').wrapAll( "<span class='frontpage-wrapper'></span>" )
  	} 
  }
}


Drupal.behaviors.mobile_header = {
  attach: function(context, settings) {
	
	//Lets insert mobile html
	$('<div class="icon-wrapper" ><div class="menu-icon mob-icon"></div><div class="account-icon mob-icon" style="display: none"></div><div class="logout-icon mob-icon" style="display: none"></div></div><div class="mobile-main-menu mobile-block" style="display: none"></div>').insertAfter('.pane-page-logo')
	
	//Click User menu link through js
	if ($('.pane-system-user-menu')[0]) {
		var $element =  $('.pane-system-user-menu'),
			$link_account = $element.find('a'),
			$acc_link,
			$logout_link
		
		$('.pane-system-user-menu a').each(function(){
			if($(this).attr('href') == '/user') {
				$acc_link = this
			}
			if($(this).attr('href') == '/user/logout') {
				$logout_link = this
			}			
		})
		
		$('.account-icon').show().click(function(){
			$acc_link.click()
		})
		
		$('.logout-icon').show().click(function(){
			$logout_link.click()
		})
	}
	
	//Menu cloning
	
	var $cloned_main_menu = $('div.main-menu').clone(),
		$cloned_header_menu = $('div.header-menu').clone(),
		$mobile_wrapper = $('.mobile-main-menu')
		
	$mobile_wrapper.empty()
	$mobile_wrapper.append($cloned_main_menu)
	$mobile_wrapper.append($cloned_header_menu)

	 $('.menu-icon').click(function(event){
		 $(this).toggleClass('active')
		 $mobile_wrapper.toggleClass('active')
			event.stopPropagation();
	 })
	
		$(document).click(function() {
			// all dropdowns
			$('.menu-icon, .mobile-main-menu').removeClass('active');
		});


  }
};


})(jQuery, Drupal, this, this.document);
