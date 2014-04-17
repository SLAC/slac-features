(function ($, Drupal) {
  "use strict";
  Drupal.behaviors.style_guide = {
    attach: function () {
      var $style = $('.style-guide'),
        $box = $style.find('.color-box'),
        $span_box = $box.find('span'),
        $hex_color;

      $span_box.each(function () {
        $hex_color = $(this).parent().find('ins').html();
        $(this).css('background-color', $hex_color);
      });
    }
  };
}(this.jQuery, this.Drupal));