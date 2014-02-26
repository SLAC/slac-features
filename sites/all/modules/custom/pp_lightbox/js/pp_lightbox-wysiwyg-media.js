(function ($) {
  $(document).bind('InsertMedia.insert', function(e, parameters) {
    // Set custom parameter to fields property because fields are passed to
    // modal popup as GET parameter when we edit media file. We need this
    // variable there so we can set up default value of the checkbox in
    // pp_lightbox_form_media_format_form_alter() function.
    parameters.info.fields.pp_lightbox = $('#mediaStyleSelector').contents().find('input[name=pp_lightbox]').is(':checked');
    parameters.info.fields.pp_description = $('#mediaStyleSelector').contents().find('input[name=pp_description]').is(':checked');
  });

})(jQuery);
