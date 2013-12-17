<div class="projects-blocks-wrapper">
  <?php foreach ($projects_list as $key => $project) { ?>
    <div class="project-block-wrapper">
      <?php if ($project['link']): ?>
        <div class="project-title">
          <a href="<?php print $project['link']; ?>"><?php print $project['title']; ?></a>
        </div>
        <div class="project-image">
          <a href="<?php print $project['link']; ?>"><?php print $project['image']; ?></a>
        </div>
      <?php else: ?>
        <div class="project-title">
          <?php print $project['title']; ?>
        </div>
        <div class="project-image">
          <?php print $project['image']; ?>
        </div>
      <?php endif; ?>
    </div>
  <?php } ?>
</div>