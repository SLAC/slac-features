<?php
?>

<div class="<?php print $classes; ?>">
  <?php if (isset($label) && !$label_hidden): ?>
    <div class="field-label"><strong><?php print $label . ':'; ?></strong></div>
  <?php endif; ?>

  <div class="item-list">
    <ul class="profile-textformatter-list">
      <?php foreach ($field_info as $item): ?>
        <li><?php print $item['link']; ?>
          <?php if (isset($item['doc_type']) && $item['url'] != ''): ?>
            <span class="document-type-<?php print $item['doc_type']; ?>"></span>
          <?php endif; ?>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
</div>