(function($) {

Drupal.behaviors.ppPanelizer = {
  attach: function (context, settings) {
    console.log('click');
    $('.panels-ipe-startedit').once('ppPanelizer').click();
  }
};

})(jQuery);
