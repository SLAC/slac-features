<?php foreach ($connect_list as $key => $connect) { ?>
  <div class="connect-link">
    <div class="<?php print str_replace('_', '-', $key); ?>-icon"></div>
    <div class="connect-link-item"><?php print $connect; ?></div>
  </div>
<?php } ?>