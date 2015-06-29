(function ($) {

Drupal.behaviors.initColorboxDefaultStyle = {
  attach: function (context, settings) {
    $(context).bind('cbox_complete', function () {
      // Override the default setting to allow the close button to overflow
      $('#colorbox', context).css('overflow', 'visible');

      // Center the Image X of Y
      var width = $('#cboxCurrent').width();
      var parentWidth = $('#cboxCurrent').offsetParent().width();
      var left = (parentWidth - width) / 2;
      $('#cboxCurrent', context).css('left', left);
    });
  }
};

})(jQuery);
