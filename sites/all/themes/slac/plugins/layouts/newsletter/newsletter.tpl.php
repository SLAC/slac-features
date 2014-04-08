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
  <table class="panel-display" style="width: 100%; border-spacing: 35px; border-collapse: separate; ">
    <tr>
      <td>
        <table style="width: 846px; margin: 0 auto">
          <tr>
            <td>
              <table >
                <tr>
                  <td>
                    <table style="background-color: #fafafa; ">
                      <tr>
                        <?php if ($content['intro_text_left']): ?>
                          <td class="panel-panel"><?php print $content['intro_text_left']; ?></td>
                        <?php endif ?>
                        <?php if ($content['intro_text_right']): ?>
                          <td class="panel-panel"><?php print $content['intro_text_right']; ?></td>
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
              <table>
                <tr>
                  <td>
                    <table style="width: 100%">
                      <tr>
                        <td>
                          <table style="background-color: #7d1427; width: 100%">
                            <tr>
                              <?php if ($content['header_h1'] || $content['header_h2'] ): ?>
                                <td class="panel-panel"><?php print $content['header_h1']; ?><?php print $content['header_h2']; ?></td>
                              <?php endif ?>
                              <?php if ($content['date']): ?><!--Date-->
                                <td class="panel-panel"><?php print $content['date']; ?></td>
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
                  <td>
                    <table>
                      <tr>
                        <?php if ($content['articles']): ?>
                        <td>
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
                        <td>
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
                    <table>
                      <tr>
                        <?php if ($content['footer_left']): ?>
                          <td class="panel-panel"><?php print $content['footer_left']; ?></td>
                        <?php endif ?>
                        <?php if ($content['footer_right']): ?>
                          <td class="panel-panel"><?php print $content['footer_right']; ?></td>
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
