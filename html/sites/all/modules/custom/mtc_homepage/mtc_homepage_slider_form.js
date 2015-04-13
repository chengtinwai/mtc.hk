(function ($) {
  Drupal.behaviors.contact_slider =  {
    attach: function(context, settings) {

      //Begin my code
        $(".trigger").click(function(){
        	$("#block-block-5").toggle("fast");
	        $(this).toggleClass("active");
	        return false;
	    });
     //I'm done with my code

    }
  };
})(jQuery);