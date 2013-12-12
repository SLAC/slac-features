(function($) {

// Call parent window function.
$.fn.blockSelectDialogFinalizeSelection = function(bid) {
  // Set the id of the bean block to insert.
  parent.Drupal.bean_wysiwyg.popups.blockSelectDialog.selectedBlock = bid;
  // Click on dialog "OK" button.
  var buttons = $(parent.window.document.body).find('#blockInsertBrowser').parent('.ui-dialog').find('.ui-dialog-buttonpane button');
  buttons[0].click();
};

/**
 * Bind click event on cancel button.
 */
Drupal.behaviors.bean_wysiwygCancelButton = {
  attach: function(context, settings) {
    $('a.fake-cancel').once('bean_wysiwygCancelButton').bind('click', function() {
      // Click on dialog "Cancel" button.
      var buttons = $(parent.window.document.body).find('#blockInsertBrowser').parent('.ui-dialog').find('.ui-dialog-buttonpane button');
      buttons[1].click();
    });
  }
}

})(jQuery);


