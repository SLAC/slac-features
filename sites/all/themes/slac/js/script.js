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
(function(window, document, $, Drupal) {
  "use strict";

  // To understand behaviors, see https://drupal.org/node/756722#behaviors

  Drupal.behaviors.mobile_header = {
    attach: function(context) {
      var $search_form = '',
        $long_menu = false;
      if ($('.pane-search-block')[0]) {
        $search_form = '<div class="search-icon mob-icon"></div>';
      }

      if ($('.main-menu .pane-superfish-1')[0]) {
        var $count_items = $('.main-menu .pane-superfish-1 ul.menu > li').length;

        if ($count_items > 5) {
          $long_menu = true;
        }

        if ($long_menu) {
          $('.page-basic > .main-menu', context).once('main-menu-length', function() {
            $(this).addClass('long-menu')
          });
        }
      }

      $('.user-search', context).once('user-search', function() {
        $(this).append('<div class="icon-wrapper"><div class="menu-icon mob-icon"></div>' + $search_form + '<span class="user-icons"></span></div>');
      });

      $('.header > .inside', context).once('header-inside', function() {
        //$(this).append('<div class="mobile-main-menu mobile-block" style="display: none"></div>');
        if ($('.pane-search-block')[0]) {
          $(this).append('<div class="mobile-search-form mobile-block" style="display: none"></div>');
        }

      });

      //Menu cloning
      var $cloned_main_menu = $('div.main-menu').clone(),
        $cloned_header_menu = $('div.header-menu').clone(),
        $cloned_search_form = $('.pane-search-block').clone(),
        $mobile_wrapper_search = $('.mobile-search-form', context),
        $mobile_wrapper = $('.mobile-main-menu', context),
        $mobile_user_menu = $('.pane-system-user-menu ul.menu li a').clone(),
        $icons_wrapper = $('.user-icons', context);
      //$pathname = window.location.pathname,
      //$icons_wrapper_a = $icons_wrapper.find('a'),
      //$close_menu;

      //$mobile_wrapper.once('mobile-menu-wrapper', function () {
      //$(this).empty();
      //$(this).append($cloned_main_menu);
      //$(this).append($cloned_header_menu);
      //});

      $mobile_wrapper_search.once('mobile-menu-search', function() {
        $(this).empty();
        $(this).append($cloned_search_form);
      });

      $icons_wrapper.once('icons-wrapper', function() {
        $(this).append($mobile_user_menu);
      });

      $('.menu-icon', context).once('menu-icon', function() {
        $(this).click(function(event) {
          $(this).toggleClass('active');
          $mobile_wrapper.slideToggle("fast");
          event.stopPropagation();
        });
      });

      $('.search-icon', context).once('search-icon', function() {
        $(this).click(function(event) {
          $(this).toggleClass('active');
          $mobile_wrapper_search.slideToggle("fast");
          event.stopPropagation();
        });
      });

      $('.user-search #search-block-search-form', context).once('focus-effekt', function() {
        if (!$('.page-basic-io').length) {
          $(this).hover(
            function() {
              $('.user-search #slac-search-options > div').slideDown('medium');
            },
            function() {
              $('.user-search #slac-search-options > div').slideUp('medium');
            }
          );
        } else {
          // Radio to select for search.
          var $searchOptions = $('#slac-search-options');
          $searchOptions.insertBefore($('#slac-search'));

          var $checkbox = $searchOptions.find('input[type=radio]');
          var $select = $('<select class="form-select"></select>'); // create a select
          $select.attr('name', $checkbox.attr('name')); // set name and value
          $checkbox.each(function(i, checkbox) {
            var checkVal = $checkbox.eq(i).val();
            var checkText = $checkbox.eq(i).next().text();
            $select.append($('<option>').val(checkVal).text(checkText));
          });

          $searchOptions.find('.form-item').hide();
          $searchOptions.append($select);

          $('#slac-search input').addClass('web');

          $searchOptions.find('select').change(function(e) {
            var value = parseInt($(this).val());
            var placeholder = value ? Drupal.t('SEARCH PEOPLE') : Drupal.t('SEARCH SLAC');
            var inputClass = value ? 'people' : 'web';
            $('#slac-search input')
              .attr('placeholder', placeholder)
              .removeClass('people').removeClass('web').addClass(inputClass);
          })
        }
      });

      //$close_menu = function () {
      //$('.mobile-block').slideUp("fast");
      //$('.menu-icon, .mobile-main-menu, .search-icon').removeClass('active');
      //};

      //Global click to close mobile menu if its clicked
      //$(document).click($close_menu);

      //Close menu after click event on menu elements was fired
      //$('.user-icons a').click($close_menu);
    }
  };

  //Hide description text and make this visible by hover or tap
  Drupal.behaviors.form_elements = {
    attach: function() {
      var $form = $('#user-profile-form, #user-login, #user-register-form, #user-pass, form.node-blog-form'),
        $description = $form.find('.description'),
        $description_icon,
        $action_description,
        $close_all_description;

      //Function to hide all descriptions text
      $close_all_description = function() {
        $description.hide();
      };

      $close_all_description();

      $description.parent().addClass('wrapped-with-icon');

      $('<div class="icon-ask"></div>').appendTo($description.parent());

      $description_icon = $form.find('.icon-ask');

      $action_description = function() {
        $form.find('.description').not($(this).siblings('.description')).hide();
        $(this).siblings('.description:not(.password-suggestions)').toggle();
      };

      $description_icon.click($action_description);
    }
  };

  Drupal.behaviors.nth_issues = {
    attach: function() {
      $('.projects-blocks-wrapper .project-block-wrapper:nth-child(2n+2)').addClass('nth-2');
      $('.projects-blocks-wrapper .project-block-wrapper:nth-child(3n+3)').addClass('nth-3');
    }
  };

  Drupal.behaviors.adminMissingBlocks = {
    attach: function(context) {
      function hideblocksForAdmin() {
        // Exit if not admin.
        if ($('body').hasClass('not-logged-in')) return;

        var $rightSidebar = $('.right-sidebar', context);
        var $eventWrapper = $('.event-wrapper', context);

        if ($rightSidebar.length) {
          // Only if has no children
          if (!$rightSidebar.find('.panels-ipe-sort-container').children().length)
            $rightSidebar.prev('.general-right').addClass('expand-full');
        }
        if ($eventWrapper.length) {
          // Only if has no children
          if (!$eventWrapper.find('.panels-ipe-sort-container').children().length)
            $eventWrapper.addClass('expand-hide');
        }
      }
      // visually hide empty regions.
      hideblocksForAdmin();

    }
  };

}(this, this.document, this.jQuery, this.Drupal));
