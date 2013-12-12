(function($) {
  Drupal.behaviors.bean_wysiwygSettings = {
    attach: function(context, settings) {
      CKEDITOR.config.allowedContent = true;
    }
  }

  Drupal.behaviors.bean_wysiwyg = {
    attach: function(context, settings) {

    // Using setTimeout is dirty bugfix for Firefox as it doesn't react on .load() event so existing blocks
    // do not get click behavior.
    setTimeout(
      function() {
          $('iframe').each(function(){
            // We need to attach behavior twice as when page is loaded we need to react on load() event,
            // as iframe might not loaded yet, but when the page has been loaded already (inserting new block)
            // we need not to use load() event.
            bean_wysiwyg_attach_behavior(this);

            $(this).load(function(){
              bean_wysiwyg_attach_behavior(this);
            });
          });
      }, 1000);

      /**
       * Attach click events to iframe and inserted block.
       */
      function bean_wysiwyg_attach_behavior(iframe) {
        $(iframe).contents().find('body').once('block-insert').click(function() {
          $(this).find('.block-insert-active').removeClass('block-insert-active');
          updateBlockInsertButtonState();
        });

        $(iframe).contents().find('.block-insert').each(function() {

          // Disable any actions clicking on links inside blocks.
          $(this).find('a').once('block-insert').click(function(event) {
            return false;
          })

          $(this).once('block-insert').click(function(event){
            event.stopPropagation();

            // If block is placeholder do not make it active nor highlight toolbar button.
            if ($(this).find('img.block-insert-placeholder').length == 0) {

              $(this).parents('html').find('.block-insert-active').removeClass('block-insert-active');
              $(this).addClass('block-insert-active');

              updateBlockInsertButtonState();
            }
          });
        });
      }

      $('iframe.cke_wysiwyg_frame').contents().find('html').click(function(){
        $(this).find('.cke_button__bean_wysiwyg').addClass('cke_button_off').removeClass('cke_button_on');
      });

    }
  };

  function updateBlockInsertButtonState() {
    $('iframe').each(function(){
      var insertBlockIsActive = $(this).contents().find('.block-insert-active').length;

      if (insertBlockIsActive) {
        $(this).parents('.cke_inner').find('.cke_button__bean_wysiwyg').addClass('cke_button_on').removeClass('cke_button_off');
      }
      else {
        $(this).parents('.cke_inner').find('.cke_button__bean_wysiwyg').addClass('cke_button_off').removeClass('cke_button_on');
      }
    });
  };

  Drupal.wysiwyg.plugins.bean_wysiwyg = {

    /**
     * Get the active block from the iframe.
     */
    getActiveBlockInsert: function(instanceId) {
      return $('#cke_' + instanceId).find('iframe').contents().find('.block-insert-active');
    },

    /**
     * Method called when wysiwyg button clicked.
     **/
    invoke: function (data, settings, instanceId) {
      if (data.format == 'html') {
        var insert = new InsertBlock(instanceId);
        var $activeBlock = this.getActiveBlockInsert(instanceId);

        if ($activeBlock.length > 0) {
          var bean_bid = $activeBlock.data('block_insert');
          // Update existing block.
          insert.onSelect(bean_bid, settings.global);
        }
        else {
          // Insert new block.
          insert.prompt(settings.global);
        }
      }
    },

    /**
   * Attach function, called when a rich text editor loads.
   * This finds all [[tags]] and replaces them with the html
   * that needs to show in the editor.
   *
   * This finds all JSON macros and replaces them with the HTML placeholder
   * that will show in the editor.
   */
    attach: function (content, settings, instanceId) {
      bean_wysiwyg_ensure_tagmap();

      var bean_wysiwyg_tagmap = Drupal.settings.bean_wysiwyg_tagmap,
      matches = content.match(/\[block_insert\]\d*\[\/block_insert\]/g);

      if (matches) {
        for (var index in matches) {
          var macro = matches[index];

          if (bean_wysiwyg_tagmap[macro]) {
            content = content.replace(macro, bean_wysiwyg_tagmap[macro]);
          }
          else {
            debug.debug("Could not find content for " + macro);
          }
        }
      }

      Drupal.attachBehaviors();
      return content;
    },

    /**
    * Detach function, called when a rich text editor detaches.
    */
    detach: function (content, settings, instanceId) {
      bean_wysiwyg_ensure_tagmap();
      var bean_wysiwyg_tagmap = Drupal.settings.bean_wysiwyg_tagmap,
      i = 0,
      markup,
      macro;

      var matches = content.match(/<div class="block-insert((?!<!-- block-insert)(.|[\r\n]))*<!-- block-insert --><\/div>/gi);
      if (matches) {
        for (i = 0; i < matches.length; i++) {
          markup = matches[i];
          macro = bean_wysiwyg_create_macro(markup);
          bean_wysiwyg_tagmap[macro] = markup;
          content = content.replace(markup, macro);
        }
      }

      return content;
    }
  };

  var InsertBlock = function (instance_id) {
    this.instanceId = instance_id;
    return this;
  };

  InsertBlock.prototype = {
    /**
     * Display popup to insert new block.
     */
    prompt: function (settings) {
      Drupal.bean_wysiwyg.popups.blockSelectDialog($.proxy(this, 'insert'), settings);
    },

    /**
   * On selection of a block, display block edit form.
   */
    onSelect: function (bean_bid, settings) {
      Drupal.bean_wysiwyg.popups.blockUpdateDialog($.proxy(this, 'update'), bean_bid, settings);
    },

    /**
   * Insert HTML to the WYSIWYG when block has been created. Set the macro.
   */
    insert: function (block) {
      var markup = '<p>&nbsp;</p>' + bean_wysiwyg_create_markup(block) + '<p>&nbsp;</p>';
      macro = bean_wysiwyg_create_macro(markup);

      // Insert placeholder markup into wysiwyg.
      Drupal.wysiwyg.instances[this.instanceId].insert(markup);
      Drupal.attachBehaviors();

      // Store macro/markup pair in the bean_wysiwyg_tagmap.
      bean_wysiwyg_ensure_tagmap();
      Drupal.settings.bean_wysiwyg_tagmap[macro] = markup;
    },

    /**
     * Update already inserted block.
     */
    update: function (block) {
      var markup = bean_wysiwyg_create_markup(block);
      var macro = bean_wysiwyg_create_macro(markup);

      // Replace block old markup with new one.
      $('#cke_' + this.instanceId).find('iframe').contents().find('.block-insert-active').html($(markup).html()).removeClass('block-insert-active');
      updateBlockInsertButtonState();

      // Run attach behaviors as we might have replaced html of the block.
      Drupal.attachBehaviors();

      // Store macro/markup pair in the bean_wysiwyg_tagmap.
      bean_wysiwyg_ensure_tagmap();
      Drupal.settings.bean_wysiwyg_tagmap[macro] = markup;
    }
  };

  /**
   * Ensure that block insert tagmap initialized.
   */
  function bean_wysiwyg_ensure_tagmap () {
    Drupal.settings.bean_wysiwyg_tagmap = Drupal.settings.bean_wysiwyg_tagmap || {};
  }

  /**
   * Create a macro token from the block.
   */
  function bean_wysiwyg_create_macro(html) {
    return '[block_insert]' + $(html).data('block_insert') + '[/block_insert]';
  }

  /**
   * Create a markup from block object.
   */
  function bean_wysiwyg_create_markup(block) {
    return '<div class="block-insert" data-block_insert="' + block.bid + '" contenteditable="false">' + block.html + '<!-- block-insert --></div>';
  }

})(jQuery);
