(function ($) {
  Drupal.behaviors.imgWidht = {
    attach: function(context) {
      if($('.pp-image-style-description')[0]) {
        var imgWidth = $('.pp-image-style-description img').attr('width');
        if(imgWidth > 0) {
          $('.pp-image-style-description').css('width', imgWidth)
        }
      }
    }
  }  
})(jQuery);




