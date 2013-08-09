// Javascript document
(function ($) {
  Drupal.behaviors.slac_faq = {};
  Drupal.behaviors.slac_faq.attach = function (context, settings) {
  $('.view-id-faq .views-field-field-slac-faq-answer').hide();
  $('.view-id-faq .views-field-body').append('<a class="action_expand hidden">+ Show answer</a>');
  
  $('.action_expand').click(function() {
    if ($(this).hasClass('hidden')) {
      $(this).parent().next().slideDown();
      $(this).removeClass('hidden').addClass('show');
      $(this).text('- Hide Answer');
    } 
    else {
      $(this).parent().next().slideUp();
      $(this).removeClass('show').addClass('hidden');
      $(this).addClass('hidden');
      $(this).text('+ Show Answer'); 
    }
  });
}
}) (jQuery);