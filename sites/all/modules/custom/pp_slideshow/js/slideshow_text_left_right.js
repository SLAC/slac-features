/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

    Drupal.behaviors.sliderResize = {
        attach: function (context, settings) {
            // fix slider width/height on screen resize
            var slider = $('.field-slideshow-text-left-right-wrapper .field-slideshow'),
            resizer = function( event ){
                var h = slider.find('.field-slideshow-image-caption:visible img').height();
                slider.css({
                    'width':'100%',
                    'height':h
                })
                .find('.field-slideshow-body').css({
                    'height':h
                });
            }
            // on DOM ready
            $(window).load(resizer);
            // on window resize
            try{
                window.addEventListener("orientationchange", resizer);
            } catch(e){}
            $(window).resize(resizer);
            // on slider btns click
            $('div[class*="views-slideshow-controls"]').find('a,.views-content-counter').click(resizer);
        }
    }

})(jQuery, Drupal, this, this.document);
