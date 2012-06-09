(function($) {
  Drupal.behaviors.cfTheme = {
    attach: function(context) {
      $(".site-name").fitText();

      // Fix for the Code formatting Horizontal tabs width issue, I would prefer
      // not to have to do this, but it's working for the moment.
      if ($('.group-formatter-group').length > 0) {
        $(window).bind('resize', function() {
          $('.group-formatter-group .fieldset-wrapper').css('width', $('.group-formatter-group').css('width'));
        }).trigger('resize');
      }

      // Replace checkboxes with custom, themable div element.
      $('.form-checkboxes .form-item input:not(.processed)').each(function() {
        $(this).siblings('label').bind('click', function() {
          $(this).siblings('.checkbox-wrapper').trigger('click');
        });
        $(this).addClass('processed').wrap('<div class="checkbox-wrapper"><div class="inside">')
          .parents('.checkbox-wrapper').bind('click', function() {
            $(this).find('input').attr('checked')
              ? $(this).parent().removeClass('checked')
              : $(this).parent().addClass('checked');
            $(this).find('input').attr('checked', !$(this).find('input').attr('checked')).trigger('change');
          });
        $(this).attr('checked')
          ? $(this).parents('.checkbox-wrapper').parent().addClass('checked')
          : $(this).parents('.checkbox-wrapper').parent().removeClass('checked');
      });

      // Replace file inputs with custom, themeable element.
      $('input[type="file"]:not(.processed)').each(function() {
        $(this).addClass('processed').customFileInput();
      });
    }
  }
})(jQuery);

