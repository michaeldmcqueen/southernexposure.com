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
      <div class="col col-1st">
        <h3>Contact Us</h3>
        <p><a href="/contact-us">Email Us</a></p>
        <p>745 Jackson Court<br>
          Windsor, CO. 80550</p>
          <p>Office 970-674-3010<br> 
          Cell 970-566-0435</p>
          <div class="social">
          <a href="https://www.facebook.com/pages/Southern-Exposure-Landscape/208239452524582" target="_blank"><img src="/profiles/vs_base/themes/novel/assets/images/icons/facebook.png" alt="Facebook"></a>
          <a href="https://pinterest.com/NoColandscape/" target="_blank"><img src="/profiles/vs_base/themes/novel/assets/images/icons/pin.png" alt="Pinterest"></a></a>
        </div>
          <div class="createsend-button" style="height:27px;display:inline-block;" data-listid="r/25/059/125/FE09B1D4A48D7453">
          </div><script type="text/javascript">(function () { var e = document.createElement('script'); e.type = 'text/javascript'; e.async = true; e.src = ('https:' == document.location.protocol ? 'https' : 'http') + '://btn.createsend1.com/js/sb.min.js?v=3'; e.className = 'createsend-script'; var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(e, s); })();</script>
        
      </div>
      <div class="col col-3rd">
        <p>&copy; Copyright 2004 - <?php echo date("Y") ?>.  Southern Exposure Landscape & Sprinkler LLC</p>
        <p>Site By: <a href="https://www.variantstudios.com" target="_blank">Variant Studios</a></p>
      </div>
    </div>
</footer>