<table border="0" cellspacing="0" cellpadding="0" width="100%" style="margin-bottom: 25px;">
  <tr>
    <td>
      <table border="0" cellspacing="0" cellpadding="0" width="100%">
        <tr>
          <td valign="top" style="padding-right: 10px;">
            <?php if (isset($content['field_slac_news_media'])): ?>
                <?php
                  if (isset($content['field_slac_news_media']['0']['#contextual_links'])):
                    unset($content['field_slac_news_media']['0']['#contextual_links']);
                  endif;
                  print render($content['field_slac_news_media']);
                ?>
            <?php endif; ?>            
          </td>
          <td valign="top">
            <?php if (!$page && $title): ?>
              <h2 style="margin: -3px 0 0 0; font-size: 14px;  color: #8a1227"><?php print $title; ?></h2>
            <?php endif; ?>              

           <div style="font-size: 11px;  font-style: italic; padding-bottom: 3px;">
            <?php if (isset($content['field_slac_news_date'])): ?>
              <?php print render($content['field_slac_news_date']); ?>
            <?php endif; ?>      
          </div>
          <div style="font-size: 12px; line-height: 20px;">  
          <?php
          if (isset($content['field_slac_news_media'])):
            hide($content['field_slac_news_media']);
          endif;
          hide($content['comments']);
          hide($content['links']);
        
          if (isset($content['field_slac_news_source'])):
            hide($content['field_slac_news_source']);
          endif;
          print render($content);
          ?>    
          </div>        
          </td>
        </tr>
      </table>
    </td>
  </tr>
</table>