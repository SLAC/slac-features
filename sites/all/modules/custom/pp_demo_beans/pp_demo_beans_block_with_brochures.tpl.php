<?php foreach ($blocks as $block) { ?>
<div class="pp_demo-beans-block-with-brochures" style="padding-top: 26px;">
  <div style="
    border-bottom: 2px solid #881728;
    color: #7F6332;
    font-size: 13px;
    letter-spacing: 0.125em;
    padding: 6px 0 2px 7px;
    text-transform: uppercase; ">
    <?php print $block['title']; ?>
  </div>
  <div style="
    background: linear-gradient(to bottom, #F6F6F6 0%, #EBEBEB 100%) repeat scroll 0 0 rgba(0, 0, 0, 0);
    font-size: 13px;
    margin-top: 0;
    overflow: hidden;
    padding: 20px 3%;
    width: 94%; ">
    <?php foreach ($block['brochure_items'] as $brochure) { ?>
      <div style="
        float: left;
        margin: 0 1% 20px;
        width: 23%; ">
        <div>
          <a style="border: none;" href="<?php print $brochure['url']; ?>">
            <?php print $brochure['image']; ?>
          </a>
        </div>
        <div style="
          color: #333333;
          font-size: 12px;
          font-weight: bold;
          line-height: normal;
          margin-bottom: 3px; ">
          <?php print $brochure['title']; ?>
        </div>
        <div>
          <?php print $brochure['link']; ?>
        </div>
      </div>
    <?php } ?>
  </div>
</div>
<?php } ?>
