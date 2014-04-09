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
 *     'intro_text_left' => t('Intro text left'),
    'intro_text_right' => t('Intro text right'),
    'header_h1' => t('Header H1'),
    'header_h2' => t('Header H2'),
    'date' => t('Date'),
    'main_article' => t('Main article'),
    'secondary_article' => t('Other articles'),
    'right' => t('Right blocks'),
    'footer_left' => t('Footer left'),
    'footer_right' => t('Footer right'),
 */
?>

<style type="text/css">
#outlook a {padding:0;} /* Force Outlook to provide a "view in browser" menu link. */
  body{width:100% !important; -webkit-text-size-adjust:100%; -ms-text-size-adjust:100%; margin:0; padding:0; font-family: Arial, Helvetica, sans-serif;}
  table td {border-collapse:collapse; }
  img {outline:none; text-decoration:none; -ms-interpolation-mode: bicubic;}
  a img {border:0 none;}
  a {color:#8a1227; text-decoration: none} 
  p {margin: 0}
  #header a {color: #fff}
  
</style>

  <table class="panel-display" border="0" cellspacing="0" cellpadding="35" width="100%">
    <tr>
      <td>
        <table style="margin: 0 auto; " width="846" border="0" cellspacing="0" cellpadding="0">
          <tr>
            <td style="padding: 0 120px 0 140px">
              <table border="0" cellspacing="0" cellpadding="0">
                <tr>
                  <td>
                    <table style="background-color: #fafafa; font-size: 10px" border="0" cellspacing="0" cellpadding="0">
                      <tr>
                        <?php if ($content['intro_text_left']): ?>
                          <td class="panel-panel" valign="top" style="padding: 5px 15px; width: 63%"><?php print $content['intro_text_left']; ?></td>
                        <?php endif ?>
                        <?php if ($content['intro_text_right']): ?>
                          <td class="panel-panel" valign="top" style="padding: 5px 15px"><?php print $content['intro_text_right']; ?></td>
                        <?php endif ?>
                      </tr>
                    </table>
                  </td>
                </tr>
              </table>
            </td>
          </tr>
          <tr>
            <td>
              <table style="border: 1px solid #dddddd;"  cellspacing="0" cellpadding="0">
                <tr>
                  <td >
                    <table width="100%" border="0" cellspacing="0" cellpadding="0">
                      <tr>
                        <td>
                          <table style="background-color: #7d1427; padding: 10px 22px 6px 22px;" width="100%" border="0" cellspacing="0" cellpadding="0">
                            <tr>
                              <?php if ($content['header_h1'] || $content['header_h2'] ): ?>
                                <td class="panel-panel" style="vertical-align: baseline" width="50%" id="header">
                                  <table  border="0" cellspacing="0" cellpadding="0" style="color: #fff">
                                    <tr>
                                      <td style="vertical-align: baseline; font-size: 35px; text-transform: uppercase; color: #fff; padding-right: 20px"><?php print $content['header_h1']; ?></td>
                                      <td style="vertical-align: baseline; font-size: 14px; text-transform: uppercase"><?php print $content['header_h2']; ?></td>
                                    </tr>
                                  </table>
                                  
                                  
                                  
                                </td>
                              <?php endif ?>
                              <?php if ($content['date']): ?><!--Date-->
                                <td class="panel-panel" style="vertical-align: baseline; color: #fff;font-weight: bold; font-size: 14px;" width="50%" align="right"><?php print $content['date']; ?></td>
                              <?php endif ?>                              
                            </tr>
                          </table>
                        </td>
                      </tr>
                      <tr>
                        <td  style="height: 4px; background-color: #878787"></td>
                      </tr>
                    </table>
                  </td>
                </tr>
                <tr>
                  <td style="padding: 10px">
                    <table style="border: 0 none">
                      <tr>
                        <?php if ($content['articles']): ?>
                        <td style="padding: 0 10px 0 0; vertical-align: top">
                          <table>
                            <tr>
                              <td class="panel-panel">
                                <?php print $content['articles']; ?>
                              </td>
                            </tr>                         
                          </table>
                        </td>
                        <?php endif ?>
                        <?php if ($content['right']): ?>
                        <td style="width: 240px; padding: 0 0 0 10px; vertical-align: top">
                          <table>
                            <tr>
                                <td class="panel-panel"><?php print $content['right']; ?></td>
                            </tr>
                          </table>
                        </td>
                        <?php endif ?>  
                      </tr>
                    </table>
                  </td>
                </tr>
                <?php if ($content['footer_left'] || $content['footer_right']): ?>
                 <tr>
                   <td style="background-color: #878787">
                    <table cellspacing="0" cellpadding="0" style="padding: 12px 20px;" width="100%">
                      <tr>
                        <?php if ($content['footer_left']): ?>
                          <td valign="middle" class="panel-panel" style="color: #fff; font-size: 10px; "><?php print $content['footer_left']; ?></td>
                        <?php endif ?>
                        <?php if ($content['footer_right']): ?>
                          <td align="right" valign="middle" class="panel-panel" style="padding-right: 16px; width: 214px;"><?php print $content['footer_right']; ?></td>
                        <?php endif ?>
                      </tr>
                    </table>
                  </td>
                </tr>   
                <?php endif ?>                          
              </table>
            </td>
          </tr>          
        </table>
      </td>
    </tr>
  </table>
