(function($) {
  Drupal.behaviors.cfTheme = {
    attach: function(context) {
      $(".site-name").fitText();
    }
  }
})(jQuery);
