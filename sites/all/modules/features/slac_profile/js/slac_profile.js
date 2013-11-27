// Javascript document
(function ($) {
    Drupal.behaviors.slac_profile = {};
    Drupal.behaviors.slac_profile.attach = function (context, settings) {
        $('.profile-textformatter-list').hideMaxListItems({
            'max':4,
            'speed':50,
            'moreText':'expand listings',
            'lessText':'collaps listings'
        });
        $('.profile-info-full .field-content').once(function() {
            var more = $(this).find('p.maxlist-more');
            if ($(this).find('p.maxlist-more a').length > 0) {
                more.hide();
                $('<p class="profile-maxlist-more"><span class="expand-collapse-icon collapsed-list"></span><a href="#">expand listings</a></p>').insertAfter(this);
            }
        })
        $('.profile-info-full p.profile-maxlist-more a').click(function(e) {
            e.preventDefault();
            var original_link = $(this).parent().parent().find('p.maxlist-more a');
            original_link.click();
            if (original_link.text() == 'collaps listings') {
                $(this).parent().find('span.expand-collapse-icon').addClass('expanded-list');
                $(this).parent().find('span.expand-collapse-icon').removeClass('collapsed-list');
            }
            else {
                $(this).parent().find('span.expand-collapse-icon').addClass('collapsed-list');
                $(this).parent().find('span.expand-collapse-icon').removeClass('expanded-list');
            }
            $(this).text(original_link.text());
        })
    }
}) (jQuery);
