//(function ($) {
//  /**
//   * Override InsertMedia.insert method to add triggering custom event so contrib 
//   * modules can alter element variable (data that is encoded in json).
//   */
//  InsertMedia.insert = function (formatted_media) {
//    var element = Drupal.media.filter.create_element(formatted_media.html, {
//          fid: this.mediaFile.fid,
//          view_mode: formatted_media.type,
//          attributes: formatted_media.options,
//          fields: formatted_media.options
//        });
//    
//       
//    // Get the markup and register it for the macro / placeholder handling.
//    var markup = Drupal.media.filter.getWysiwygHTML(element);
//
//    // Insert placeholder markup into wysiwyg.
//    Drupal.wysiwyg.instances[this.instanceId].insert(markup);
//  };
//
//})(jQuery);
