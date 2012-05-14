(function($) {
  Drupal.behaviors.cfTheme = {
    attach: function(context) {
      $(".site-name").fitText();

      // Fix for the Code formatting Horizontal tabs width issue, I would prefer
      // not to have to do this, but it's working for the moment.
      if ($('.group-formatter-group').length > 0) {
        $(window).bind('resize', function() {
          $('.group-formatter-group fieldset').css('width', $('.group-formatter-group').css('width'));
        }).trigger('resize');
      }
    }
  }
})(jQuery);
