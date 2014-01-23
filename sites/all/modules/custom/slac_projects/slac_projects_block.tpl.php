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
        <?php if (isset($project['description'])): ?>
          <div class="project-description">
            <a href="<?php print $project['link']; ?>"><?php print $project['description']; ?></a>
          </div>
        <?php endif; ?>
      <?php else: ?>
        <div class="project-title">
          <?php print $project['title']; ?>
        </div>
        <div class="project-image">
          <?php print $project['image']; ?>
        </div>
        <?php if (isset($project['description'])): ?>
          <div class="project-description">
            <?php print $project['description']; ?>
          </div>
        <?php endif; ?>
      <?php endif; ?>
    </div>
  <?php } ?>
</div>