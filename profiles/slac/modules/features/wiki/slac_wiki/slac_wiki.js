// Javascript document
(function ($) {
  Drupal.behaviors.slac_wiki = {};
  Drupal.behaviors.slac_wiki.attach = function (context, settings) {
  // disable other text formats
  $('select.filter-list').each(function() {
    $(this).attr('disabled', "disabled");
  });
  $('select.filter-list').parent().click(function() {
    $(this).prepend('<div class="messages warning" id="format_message">Note: Other text formats have been disabled for wiki pages.</div>');
    setTimeout(function() {
      $("#format_message").fadeOut().remove();
    }, 5000);
  })
}
}) (jQuery);