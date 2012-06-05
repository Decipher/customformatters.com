(function($) {
  Drupal.behaviors.cfCore = {
    attach: function(context) {
      if ($('#share-dialog').length > 0) {
        share_dialog = $('#share-dialog').dialog({
          'autoOpen': false,
          'draggable': false,
          'modal': true,
          'resizable': false,
          'title': Drupal.t('Share')
        });
        $('#share-handle').bind('click', function() {
          share_dialog.dialog('open');
        });
        $('#share-dialog').delegate('a', 'click', function() {
          window.open(this.href, '', 'menubar=no,toolbar=no,height=300,width=600');
          return false;
        });
      }
    }
  }
})(jQuery);
