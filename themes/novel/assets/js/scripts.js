(function ($) {
  $(document).ready(function() {
    
  $('.js nav').prepend('<div class="hamburger-menu"><div class="bar"></div></div>');
  $('.js nav ul').addClass('hide');
  $(".hamburger-menu").click(function(){
        $(".js nav ul").toggleClass('hide');
        $(".hamburger-menu").toggleClass('close');
    });

  $('.hamburger-menu').on('click', function() {
    $('.bar').toggleClass('animate');
  })
  
  if(Modernizr.mq('only all')) {
    $('html').addClass('mq');
  } else {
    $('html').addClass('no-mq');
  };
  
  if ($(".header-image-light")[0]){
    $('body').addClass('header-image-is-light');
  } else if ($(".header-image-dark")[0]){
      $('body').addClass('header-image-is-dark');
  }


  
  // $('.slider').unslider({
  //   autoplay: true 
  // });

  $('.open-gallery-filter').click(function() {
    $('.gallery .view-filters').toggleClass('opened');
    $('body').toggleClass('dim');
    $('.close-gallery-filter').toggleClass('show');
  });
   $('.close-gallery-filter').click(function() {
    $('.gallery .view-filters').toggleClass('opened');
    $('body').toggleClass('dim');
    $('.close-gallery-filter').toggleClass('show');
  });

  });
})(jQuery);