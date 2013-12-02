(function ($) {
  $(document).bind('InsertMedia.insert', function(e, parameters) {
    parameters.info.pp_lightbox = $('#mediaStyleSelector').contents().find('input[name=pp_lightbox]').is(':checked');
  });

})(jQuery);
