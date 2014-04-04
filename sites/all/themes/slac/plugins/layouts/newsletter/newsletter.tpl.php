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
  <table class="panel-display">
    <tr>
      <td>
        <table>
          <tr>
            <td>
              <table>
                <tr>
                  <td>
                    <table>
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
                <tr><!--Header-->
                  <td>
                    <table>
                      <tr>
                        <?php if ($content['header_h1'] || $content['header_h2'] ): ?><!--Logo-->
                          <td class="panel-panel"><?php print $content['header_h1']; ?><?php print $content['header_h2']; ?></td>
                        <?php endif ?>
                        <?php if ($content['date']): ?><!--Date-->
                          <td class="panel-panel"><?php print $content['date']; ?></td>
                        <?php endif ?>
                      </tr>
                    </table>
                  </td>
                </tr>
                <tr><!--Body-->
                  <table>
                    <tr>
                      <td><!--Left column-->
                        <table>
                          <tr>
                            <?php if ($content['main_article']): ?><!--Logo-->
                              <td class="panel-panel"><?php print $content['main_article']; ?></td>
                            <?php endif ?>
                          </tr>
                           <tr>
                            <?php if ($content['secondary_article']): ?><!--Logo-->
                              <td class="panel-panel"><?php print $content['secondary_article']; ?></td>
                            <?php endif ?>
                          </tr>                         
                        </table>
                      </td>
                      <td><!--Right column-->
                        <table>
                          <tr>
                            <td>
                             <?php if ($content['right']): ?><!--Logo-->
                              <td class="panel-panel"><?php print $content['right']; ?></td>
                            <?php endif ?>                             
                            </td>
                          </tr>
                        </table>
                      </td>
                    </tr>
                  </table>
                </tr>
                 <tr><!--Footer-->
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
                </tr>                               
              </table>
            </td>
          </tr>          
        </table>
      </td>
    </tr>
  </table>
