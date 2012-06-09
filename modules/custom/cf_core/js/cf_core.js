(function($) {
  Drupal.behaviors.cfCore = {
    attach: function(context) {
      // Social sharing integration.
      if ($('#share-dialog').length > 0) {
        share_dialog = $('#share-dialog').dialog({
          'autoOpen': false,
          'draggable': false,
          'modal': true,
          'position': ['left', 'center'],
          'resizable': false,
          'title': Drupal.t('Share'),
          'width': '100%'
        });
        $('#share-handle').bind('click', function() {
          share_dialog.dialog('open');
        });
        $('#share-dialog').delegate('a', 'click', function() {
          window.open(this.href, '', 'menubar=no,toolbar=no,height=300,width=600');
          return false;
        })
        .parent().attr('id', 'share-dialog-wrapper');

        // Google Analytics - Social Analytics.
        $('#share-dialog a').bind('click', function() {
          _gaq.push(['_trackSocial', $(this).text(), 'Share']);
        });
      }
    }
  }
})(jQuery);
