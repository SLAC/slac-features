(function($) {
  namespace('Drupal.bean_wysiwyg.popups');

  /**
   * Create new block popup.
   */
  Drupal.bean_wysiwyg.popups.blockSelectDialog = function (insert, globalOptions, pluginOptions, widgetOptions) {
    var options = Drupal.bean_wysiwyg.popups.blockSelectDialog.getDefaults();
    options.global = $.extend({}, options.global, globalOptions);
    options.plugins = pluginOptions;
    options.widget = $.extend({}, options.widget, widgetOptions);

    // Create it as a modal window.
    var browserSrc = options.widget.src;
    if ($.isArray(browserSrc) && browserSrc.length) {
      browserSrc = browserSrc[browserSrc.length - 1];
    }
    // Params to send along to the iframe.  WIP.
    var params = {};
    $.extend(params, options.global);
    params.plugins = options.plugins;

    browserSrc += '&' + $.param(params);
    var blockInsertIframe = Drupal.bean_wysiwyg.popups.getPopupIframe(browserSrc, 'blockInsertBrowser');
    Drupal.bean_wysiwyg.popups.blockSelectDialog.blockInsertIframe = blockInsertIframe;
    // Attach the onLoad event
    blockInsertIframe.bind('load', options, options.widget.onLoad);
    /**
     * Setting up the modal dialog
     */

    var ok = 'OK';
    var cancel = 'Cancel';
    var notSelected = 'You have not selected anything!';

    if (Drupal && Drupal.t) {
      ok = Drupal.t(ok);
      cancel = Drupal.t(cancel);
      notSelected = Drupal.t(notSelected);
    }

    // @todo: let some options come through here. Currently can't be changed.
    var dialogOptions = options.dialog;

    dialogOptions.buttons[ok] = function () {
      var selected = Drupal.bean_wysiwyg.popups.blockSelectDialog.selectedBlock;
      if (selected.length < 1) {
        alert(notSelected);
        return;
      }
      insert(selected);
      $(this).dialog("destroy");
      $(this).remove();
    };

    dialogOptions.buttons[cancel] = function () {
      $(this).dialog("destroy");
      $(this).remove();
    };

    var dialog = blockInsertIframe.dialog(dialogOptions);

    // Remove the title bar.
    dialog.parents(".ui-dialog").find(".ui-dialog-titlebar").remove();

    Drupal.bean_wysiwyg.popups.sizeDialog(dialog);
    Drupal.bean_wysiwyg.popups.resizeDialog(dialog);
    Drupal.media.popups.scrollDialog(dialog);
    Drupal.media.popups.overlayDisplace(dialog.parents(".ui-dialog"));

    return blockInsertIframe;
  };

  Drupal.bean_wysiwyg.popups.blockSelectDialog.getDefaults = function () {
    return {
      global: {
        types: [], // Types to allow, defaults to all.
        activePlugins: [] // If provided, a list of plugins which should be enabled.
      },
      widget: { // Settings for the actual iFrame which is launched.
        src: Drupal.settings.bean_wysiwyg.browserUrl, // Src of the media browser (if you want to totally override it)
        updateSrc: Drupal.settings.bean_wysiwyg.browserUpdateBlockUrl, // Src of the page to edit the block
        onLoad: Drupal.bean_wysiwyg.popups.blockSelectDialog.onLoad // Onload function when iFrame loads.
      },
      dialog: Drupal.media.popups.getDialogOptions()
    };
  };

  /**
 * Get an iframe to serve as the dialog's contents. Common to both plugins.
 */
Drupal.bean_wysiwyg.popups.getPopupIframe = function (src, id, options) {
  var defaults = {width: '100%', scrolling: 'auto'};
  var options = $.extend({}, defaults, options);

  return $('<iframe class="bean_wysiwyg-modal-frame"/>')
  .attr('src', src)
  .attr('width', options.width)
  .attr('id', id)
  .attr('scrolling', options.scrolling);
};

/**
 * Called after iframe of selecting the block's type is loaded.
 */
Drupal.bean_wysiwyg.popups.blockSelectDialog.onLoad = function() {
  $('#blockInsertBrowser').contents().find('#skip-link').remove();
  $('#blockInsertBrowser').contents().find('#branding').remove();
}

/**
 * Popup to update existing block.
 */
Drupal.bean_wysiwyg.popups.blockUpdateDialog = function (update, bean_bid, globalOptions, pluginOptions, widgetOptions) {

    var options = Drupal.bean_wysiwyg.popups.blockSelectDialog.getDefaults();
    options.global = $.extend({}, options.global, globalOptions);
    options.plugins = pluginOptions;
    options.widget = $.extend({}, options.widget, widgetOptions);

    // Create it as a modal window.
    var browserSrc = options.widget.updateSrc + bean_bid;
    var blockInsertIframe = Drupal.bean_wysiwyg.popups.getPopupIframe(browserSrc, 'blockInsertBrowser');
    Drupal.bean_wysiwyg.popups.blockSelectDialog.blockInsertIframe = blockInsertIframe;
    // Attach the onLoad event
    blockInsertIframe.bind('load', options, options.widget.onLoad);

    /**
     * Setting up the modal dialog
     */
    var ok = 'OK';
    var cancel = 'Cancel';
    var notSelected = 'You have not selected anything!';

    if (Drupal && Drupal.t) {
      ok = Drupal.t(ok);
      cancel = Drupal.t(cancel);
      notSelected = Drupal.t(notSelected);
    }

    // @todo: let some options come through here. Currently can't be changed.
    var dialogOptions = options.dialog;

    dialogOptions.buttons[ok] = function () {
      var selected = Drupal.bean_wysiwyg.popups.blockSelectDialog.selectedBlock;
      if (selected.length < 1) {
        alert(notSelected);
        return;
      }
      update(selected);
      $(this).dialog("destroy");
      $(this).remove();
    };

    dialogOptions.buttons[cancel] = function () {
      $(this).dialog("destroy");
      $(this).remove();
    };

    var dialog = blockInsertIframe.dialog(dialogOptions);

    // Remove the title bar.
    dialog.parents(".ui-dialog").find(".ui-dialog-titlebar").remove();

    Drupal.bean_wysiwyg.popups.sizeDialog(dialog);
    Drupal.bean_wysiwyg.popups.resizeDialog(dialog);
    Drupal.media.popups.scrollDialog(dialog);
    Drupal.media.popups.overlayDisplace(dialog.parents(".ui-dialog"));

    return blockInsertIframe;
  };

  /**
   * Size the dialog when it is first loaded and keep it centered when scrolling.
   */
  Drupal.bean_wysiwyg.popups.sizeDialog = function (dialogElement) {
    var windowWidth = $(window).width();
    var dialogWidth = windowWidth * 0.8;
    var windowHeight = $(window).height();
    var dialogHeight = windowHeight * 0.8;

    dialogElement.dialog("option", "width", dialogWidth);
    dialogElement.dialog("option", "height", dialogHeight);
    dialogElement.dialog("option", "position", 'center');

    $('.bean_wysiwyg-modal-frame').width('100%');
  }

  /**
   * Resize the dialog when the window changes.
   */
  Drupal.bean_wysiwyg.popups.resizeDialog = function (dialogElement) {
    $(window).resize(function() {
      Drupal.bean_wysiwyg.popups.sizeDialog(dialogElement);
    });
  }

})(jQuery);


