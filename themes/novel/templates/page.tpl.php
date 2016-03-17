<header class="site-header <?php if(empty ($page['preface']) ): ?>no-preface<?php endif; ?> " role="banner">
  
  <div class="wrap">
    <!-- Logo -->
    <picture class="logo">
      <a href="/" title="Home">
        <source type="image/svg+xml" srcset="/profiles/vs_base/themes/novel/assets/images/logos/logo.svg">
        <img src="/profiles/vs_base/themes/novel/assets/images/logos/logo.png" alt="Southern Exposure Landscaping">
      </a>
    </picture>

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
      <div class="col col-3rd">
        <p>© Copyright 2004 - 2016.  Southern Exposure Landscape & Sprinkler LLC</p>
      </div>
    </div>
</footer>