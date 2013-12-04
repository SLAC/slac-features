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
	//$('<div class="icon-wrapper " ><div class="menu-icon mob-icon"></div><span class="user-icons"></span></div><div class="mobile-main-menu mobile-block" style="display: none"></div>').insertAfter('.pane-page-logo', context)
	
	$('.pane-page-logo').once(function(){
		$('<div class="icon-wrapper"><div class="menu-icon mob-icon"></div><span class="user-icons"></span></div><div class="mobile-main-menu mobile-block" style="display: none"></div>').insertAfter(this)
	})
	
	

	
	//Menu cloning
	
	var $cloned_main_menu = $('div.main-menu').clone(),
		$cloned_header_menu = $('div.header-menu').clone(),
		$mobile_wrapper = $('.mobile-main-menu'),
		$mobile_user_menu = $('.pane-system-user-menu ul li a').clone(),
		$icons_wrapper = $('.user-icons'),
		$pathname = window.location.pathname
		$icons_wrapper_a = $icons_wrapper.find('a')
		
		
	$mobile_wrapper.once(function(){
		$(this).empty()
		$(this).append($cloned_main_menu)
		$(this).append($cloned_header_menu)
	})	
		
	$icons_wrapper.once(function(){
		$(this).append($mobile_user_menu)
	})


	$('.user-icons a').each(function(){
	
		//Add icon class
		$(this).addClass('mob-icon')
		
		//Add class to make icon appear
		if($(this).attr('href') == '/user/login'){
			$(this).addClass('login-icon')
		}
		
		if($(this).attr('href') == '/user/logout'){
			$(this).addClass('logout-icon')
		}	
		
		if($(this).attr('href') == '/user'){
			$(this).addClass('account-icon')
		}	
		
		//Add active class for icons
		if($(this).attr('href') == '/user/login' && $pathname.search('/user') == 0 ) {
			$(this).addClass('active')
		}
		if($(this).attr('href') == '/user' && $pathname.search('/user') == 0 ) {
			$(this).addClass('active')
		}	
		
	})


	 $('.menu-icon').once(function(){
		$(this).click(function(event){
			$(this).toggleClass('active')
			 
			$mobile_wrapper.slideToggle( "fast" );
			event.stopPropagation();
		 })	 	
	 })
	
	var $close_menu = $(document).click(function() {
		$('.mobile-main-menu').slideUp( "fast" )
		$('.menu-icon, .mobile-main-menu').removeClass('active');
		
	});

	$('.user-icons a').click(function(){
		$close_menu()
	})

  }
};


})(jQuery, Drupal, this, this.document);
