$(document).ready(function() {
  const slider = $('.slider');
  const slides = $('.slide');

  let currentIndex = 0;

  function updateSlider() {
    const newPosition = -currentIndex * 100 + '%';
    slider.css('transform', 'translateX(' + newPosition + ')');
  }

  function nextSlide() {
    if (currentIndex < slides.length - 1) {
      currentIndex++;
    } else {
      currentIndex = 0;
    }
    updateSlider();
  }

  function prevSlide() {
    if (currentIndex > 0) {
      currentIndex--;
    } else {
      currentIndex = slides.length - 1;
    }
    updateSlider();
  }

  // Handle arrow keys for navigation
  $(document).keydown(function(e) {
    if (e.keyCode === 37) {
      prevSlide();
    } else if (e.keyCode === 39) {
      nextSlide();
    }
  });

  // Handle swipe gestures for touch devices
  let touchstartX = 0;
  let touchendX = 0;

  slider.on('touchstart', function(e) {
    touchstartX = e.originalEvent.touches[0].screenX;
  });

  slider.on('touchend', function(e) {
    touchendX = e.originalEvent.changedTouches[0].screenX;
    handleSwipe();
  });

  function handleSwipe() {
    if (touchstartX - touchendX > 50) {
      nextSlide();
    } else if (touchendX - touchstartX > 50) {
      prevSlide();
    }
  }

  // Automatic slide change (optional)
  setInterval(nextSlide, 5000);
});
