<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="panel-display page-basic page-basic-io" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>


  <div class="top-wrapper">
    <div class="panel-panel basic top-menu">
      <?php if ($content['top-menu']): ?>
        <div class="inside"><?php print $content['top-menu']; ?></div>
      <?php endif ?>
    </div>
    <div class="panel-panel basic header <?php if ($content['user-search']) {print 'with_user_search';} ?>">
      <div class="inside">
        <div class="clearfix header-wrapper">
          <div class="logo-container">
            <div class="panel-pane pane-page-logo">
              <?php if ($logo_path): ?>
                <a href="https://intranet.slac.stanford.edu" rel="home" id="logo" title="Home"><img src="<?php print $logo_path; ?>" alt="SLAC"/></a>
              <?php endif; ?>
            </div>
            <?php if ($content['header-date']): ?>
              <div class="header-date"><?php print $content['header-date']; ?></div>
            <?php endif ?>

          </div>
          <?php if ($content['user-search']): ?>
            <div class="user-search"><?php print $content['user-search']; ?></div>
          <?php endif ?>
        </div>
      </div>
    </div>
  </div>
  <div class="panel-panel basic header-menu">
     <?php if ($content['header-menu']): ?>
        <div class="inside"><?php print $content['header-menu']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel basic site-title">
     <?php if ($content['site-title']): ?>
        <div class="inside"><?php print $content['site-title']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel basic main-menu">
     <?php if ($content['main-menu']): ?>
        <div class="inside"><?php print $content['main-menu']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel basic content">
     <?php if ($content['content']): ?>
        <div class="inside"><?php print $content['content']; ?></div>
      <?php endif ?>
  </div>
  <div class="panel-panel basic footer-seccond">
     <?php if ($content['footer']): ?>
        <div class="inside"><?php print $content['footer']; ?></div>
      <?php endif ?>
  </div>
</div>