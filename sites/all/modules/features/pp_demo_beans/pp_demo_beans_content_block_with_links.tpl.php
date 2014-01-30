<div class="pp_demo-beans-image-text-link" style="padding-top: 26px; width: 98%; margin-left: 1%">
  <?php if ($title): ?>
  <div style="
    /*border-bottom: 2px solid #881728;*/
    padding: 6px 0 2px 7px;">
    <?php print $title; ?>
  </div>
  <? endif; ?>

  <div style="
    <?php if ($shaded): ?>
      background: #f6f6f6;
      background: -moz-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #f6f6f6), color-stop(100%, #ebebeb));
      background: -webkit-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -o-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: -ms-linear-gradient(top, #f6f6f6 0%, #ebebeb 100%);
      background: linear-gradient(to bottom, #f6f6f6 0%, #ebebeb 100%);
      filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#f6f6f6', endColorstr='#ebebeb',GradientType=0 );
    <?php endif; ?>
      width: 100%;
      padding: 20px 3%;
      font-size: 13px;
      overflow: hidden;
      margin-top: 0;
       ">

    <div>

      <?php if ($subtitle): ?>
        <div style="
          color: #474747;
          font-size: 12px;
          font-weight: bold;
          margin-bottom: 10px;
        ">
          <p>
            <?php print $subtitle; ?>
          </p>
        </div>
      <?php endif; ?>

      <?php if (!empty($links_list)): ?>
        <div style="
          background: #DBDADB;
          width: 100%;
          padding: 1px 3%;
          font-size: 13px;
          overflow: hidden;
          margin-top: 0;
          float: right;
          width: 135px;
        ">
        <ul>
          <?php foreach($links_list as $link_from_list): ?>
            <li style="list-style-type: disc;">
              <?php print $link_from_list; ?>
            </li>
          <? endforeach; ?>
        </ul>
        </div>
      <?php endif; // if ($links_list) ?>

      <p>
        <?php print $body; ?>
      </p>

      <?php if ($link): ?>
        <p><?php print $link; ?></p>
      <?php endif; ?>

    </div>
  </div>
</div>
