(function($) {

  $.fn.slac_newletter_builder_forms = function(selector, html) {
    if ($('#edit-results-newsletter-results-value')) {
      $(selector).val(html);
      $(selector).attr('readonly', true);
    }
  };

})(jQuery);