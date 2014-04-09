<table border="0" cellspacing="0" cellpadding="0" width="100%" style="margin-bottom: 19px;">
  <tr>
    <td style="padding-bottom: 4px;">
      <?php if (!$page && $title): ?>
        <h2 style="margin: 0;font-size: 17px; color: #8a1227"><?php print $title; ?></h2>
      <?php endif; ?>      
    </td>
  </tr>
  <tr>
    <td style="font-size: 11px; font-weight: bold; font-style: italic; padding-bottom: 10px;">
      <?php if (isset($content['field_slac_news_date'])): ?>
        <?php print render($content['field_slac_news_date']); ?>
      <?php endif; ?>      
    </td>
  </tr>
  <tr>
    <td>  
      <div style=" float: left; padding: 0 15px 15px 0;">
  <?php if (isset($content['field_slac_news_media'])): ?>
      <?php
        if (isset($content['field_slac_news_media']['0']['#contextual_links'])):
          unset($content['field_slac_news_media']['0']['#contextual_links']);
        endif;
        print render($content['field_slac_news_media']);
      ?>
  <?php endif; ?>    
  </div>
  <div style="font-size: 12px; line-height: 18px;">
  <?php if (isset($content['field_slac_news_media'])):
    hide($content['field_slac_news_media']);
  endif;
  
  hide($content['comments']);
  hide($content['links']);

  if (isset($content['field_slac_news_source'])):
    hide($content['field_slac_news_source']);
  endif;
  print render($content); ?>  
  </div>
    </td>
  </tr>    
</table>
