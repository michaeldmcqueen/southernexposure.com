<header class="site-header <?php if(empty ($page['preface']) ): ?>no-preface<?php endif; ?> " role="banner">
  
  <div class="wrap">
    <!-- Logo -->
    <div class="logo">
      <a href="/" title="Home">
        <h1 class="site-name">Southern Exposure Landscaping</h1>
      </a>
    </div>

    <!-- Main Navigation -->
    <?php if ($page['main_nav']): ?>
      <nav class="main-nav" role="navigation">
        <?php print render($page['main_nav']); ?>
      </nav>
    <?php endif; ?>

    </div>
</header>
<!-- Close Header -->

<?php if ($page['preface']): ?>
  <div class="preface cleafix">
      <?php print render($page['preface']); ?>
    </div>
<?php endif; ?>

<!-- Close Preface -->
<main id="content" class="<?php if(empty ($page['preface']) ): ?>no-preface<?php endif; ?> ">
  <div class="trim"></div>
  <div class="wrap">
    <?php if ($page['help']): ?>
        <?php print render($page['help']); ?>
    <?php endif; ?>

    <?php if ($page['sidebar_first']): ?>
      <aside class="sidebar-first" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>
    
    <div class="main-content-wrap">
    <?php if ($page['content']): ?>
        <?php print render($page['content']); ?>
    <?php endif; ?>
    </div>

    <?php if ($page['sidebar_second']): ?>
      <aside class="sidebar-second" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>

    <?php if ($page['frontquote']): ?>
      <div class="front-quote">
        <?php print render($page['frontquote']); ?>
      </div>
    <?php endif; ?>

    <?php if ($page['postscript']): ?>
      <div class="postscript">
        <?php print render($page['postscript']); ?>
      </div>
    <?php endif; ?>
    
  </div>
</main>

<footer>
    <div class="wrap">
      <?php print render($page['footer']); ?>
      <!-- <div class="col newsletter-signup col-1st">
        <h3>Join Our Newsletter</h3>
        <h6>Sign up to get updates and tips from our team.</h6>
        <form action="/portfolio/overall-landscapes%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20" accept-charset="UTF-8" method="post" id="campaignmonitor-general-form">
          <div><div class="form-item" id="edit-name-wrapper">
           <label for="edit-name">Name: <span class="form-required" title="This field is required.">*</span></label>
           <input type="text" maxlength="50" name="name" id="edit-name" size="20" placeholder="Your Name" value="" class="form-text required">
          </div>
          <div class="form-item" id="edit-email-wrapper">
           <label for="edit-email">Email: <span class="form-required" title="This field is required.">*</span></label>
           <input type="text" maxlength="100" name="email" id="edit-email" size="20" value="" placeholder="Your Email" class="form-text required">
          </div>
          <div class="form-item" id="edit-unsubscribe-newsletter-wrapper">
           <label class="option" for="edit-unsubscribe-newsletter"><input type="checkbox" name="unsubscribe_newsletter" id="edit-unsubscribe-newsletter" value="1" class="form-checkbox"> Unsubscribe</label>
          </div>
          <input type="submit" name="op" id="edit-submit" value="Submit" class="form-submit">
          <input type="hidden" name="form_build_id" id="form-ce1826ca20fef857066172577398627d" value="form-ce1826ca20fef857066172577398627d">
          <input type="hidden" name="form_id" id="edit-campaignmonitor-general-form" value="campaignmonitor_general_form">

        </div>
      </form>
      </div> -->
      
      <div class="col col-1st">
        <h3>Contact Us</h3>
        <p><a href="/contact-us">Email Us</a></p>
        <p>745 Jackson Court<br>
          Windsor, CO. 80550</p>
          <p>Office 970-674-3010<br> 
          Cell 970-566-0435</p>
          <div class="createsend-button" style="height:27px;display:inline-block;" data-listid="r/25/059/125/FE09B1D4A48D7453">
</div><script type="text/javascript">(function () { var e = document.createElement('script'); e.type = 'text/javascript'; e.async = true; e.src = ('https:' == document.location.protocol ? 'https' : 'http') + '://btn.createsend1.com/js/sb.min.js?v=3'; e.className = 'createsend-script'; var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(e, s); })();</script>
      </div>
      <div class="col col-3rd">
        <p>&copy; Copyright 2004 - <?php echo date("Y") ?>.  Southern Exposure Landscape & Sprinkler LLC</p>
        <p>Site By: <a href="https://www.variantstudios.com" target="_blank">Variant Studios</a></p>
      </div>
    </div>
</footer>