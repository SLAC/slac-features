// Javascript document
(function ($) {
    Drupal.behaviors.slac_profile = {};
    Drupal.behaviors.slac_profile.attach = function (context, settings) {
        $('.profile-textformatter-list').hideMaxListItems({
            'max':4,
            'speed':50,
            'moreText':'expand listings',
            'lessText':'collapse listings'
        });
        $('.profile-info-full .field-content').once(function() {
            var more = $(this).find('p.maxlist-more');
            if ($(this).find('p.maxlist-more a').length > 0) {
                more.hide();
                $('<p class="profile-maxlist-more"><a class="expand-collapse-icon collapsed-list" href="#">expand listings</a></p>').insertAfter(this);
            }
        })
        $('.profile-info-full p.profile-maxlist-more a').click(function(e) {
            e.preventDefault();
            var original_link = $(this).parent().parent().find('p.maxlist-more a');
            original_link.click();
            if (original_link.text() == 'collapse listings') {
                $(this).parent().find('.expand-collapse-icon').toggleClass('collapsed-list');
                //$(this).parent().find('.expand-collapse-icon').removeClass();
            }
            else {
                $(this).parent().find('.expand-collapse-icon').toggleClass('collapsed-list');
                //$(this).parent().find('.expand-collapse-icon').removeClass('expanded-list');
            }
            $(this).text(original_link.text());
        })
    }
}) (jQuery);
