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
(function (window, document, $, Drupal) {
  "use strict";

// To understand behaviors, see https://drupal.org/node/756722#behaviors

  Drupal.behaviors.mobile_header = {
    attach: function (context) {
      $('.pane-page-logo', context).once('page-logo-mobile', function () {
        $('<div class="icon-wrapper"><div class="menu-icon mob-icon"></div><span class="user-icons"></span></div><div class="mobile-main-menu mobile-block" style="display: none"></div>').insertAfter(this);
      });

        //Menu cloning
      var $cloned_main_menu = $('div.main-menu').clone(),
        $cloned_header_menu = $('div.header-menu').clone(),
        $mobile_wrapper = $('.mobile-main-menu', context),
        $mobile_user_menu = $('.pane-system-user-menu ul.menu li a').clone(),
        $icons_wrapper = $('.user-icons', context),
        $pathname = window.location.pathname,
        //$icons_wrapper_a = $icons_wrapper.find('a'),
        $close_menu;

      $mobile_wrapper.once('mobile-menu-wrapper', function () {
        $(this).empty();
        $(this).append($cloned_main_menu);
        $(this).append($cloned_header_menu);
      });

      $icons_wrapper.once('icons-wrapper', function () {
        $(this).append($mobile_user_menu);
      });

      $('.user-icons a').each(function () {
        //Add icon class
        $(this).addClass('mob-icon');

        //Add class to make icon appear
        if ($(this).attr('href') === '/user/login') {
          $(this).addClass('login-icon');
        }

        if ($(this).attr('href') === '/user/logout') {
          $(this).addClass('logout-icon');
        }

        if ($(this).attr('href') === '/user') {
          $(this).addClass('account-icon');
        }

        //Add active class for icons
        if ($(this).attr('href') === '/user/login' && $pathname.search('/user') === 0) {
          $(this).addClass('active');
        }
        if ($(this).attr('href') === '/user' && $pathname.search('/user') === 0) {
          $(this).addClass('active');
        }
      });

      $('.menu-icon', context).once('menu-icon', function () {
        $(this).click(function (event) {
          $(this).toggleClass('active');
          $mobile_wrapper.slideToggle("fast");
          event.stopPropagation();
        });
      });

      $close_menu = function () {
        $('.mobile-main-menu').slideUp("fast");
        $('.menu-icon, .mobile-main-menu').removeClass('active');
      };

        //Global click to close mobile menu if its clicked
      $(document).click($close_menu);

        //Close menu after click event on menu elements was fired
      $('.user-icons a').click($close_menu);
    }
  };

  //Hide description text and make this visible by hover or tap
  Drupal.behaviors.form_elements = {
    attach: function () {
      var $form = $('#user-profile-form, #user-login, #user-register-form, #user-pass, form.node-blog-form'),
        $description = $form.find('.description'),
        $description_icon,
        $action_description,
        $close_all_description;

      //Funtion to hide all descriptions text
      $close_all_description = function () {
        $description.hide();
      };

      $close_all_description();

      $description.parent().addClass('wrapped-with-icon');

      $('<div class="icon-ask"></div>').appendTo($description.parent());

      $description_icon = $form.find('.icon-ask');

      $action_description = function () {
        $form.find('.description').not($(this).siblings('.description')).hide();
        $(this).siblings('.description').toggle();
      };

      $description_icon.click($action_description);
    }
  };
}(this, this.document, this.jQuery, this.Drupal));