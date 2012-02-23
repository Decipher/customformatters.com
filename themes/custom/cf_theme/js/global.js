(function($) {
  Drupal.behaviors.cfTheme = {
    attach: function(context) {
      $(".responsive-layout-mobile .site-name").fitText();
    }
  }
})(jQuery);
