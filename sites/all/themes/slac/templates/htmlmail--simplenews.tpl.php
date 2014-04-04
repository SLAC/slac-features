<?php

/**
 * @file
 * Sample template for sending Simplenews messages with HTML Mail.
 *
 * The following variables are available in this template:
 *
 *  - $message_id: The email message id, or "simplenews_$key"
 *  - $module: The sending module, which is 'simplenews'.
 *  - $key: The simplenews action, which may be any of the following:
 *    - node: Send a newsletter to its subscribers.
 *    - subscribe: New subscriber confirmation message.
 *    - test: Send a test newsletter to the test address.
 *    - unsubscribe: Unsubscribe confirmation message.
 *  - $headers: An array of email (name => value) pairs.
 *  - $from: The configured sender address.
 *  - $to: The recipient subscriber email address.
 *  - $subject: The message subject line.
 *  - $body: The formatted message body.
 *  - $language: The language object for this message.
 *  - $params: An array containing the following keys:
 *    - context:  An array containing the following keys:
 *      - account: The recipient subscriber account object, which contains
 *        the following useful properties:
 *        - snid: The simplenews subscriber id, or NULL for test messages.
 *        - name: The subscriber username, or NULL.
 *        - activated: The date this subscription became active, or NULL.
 *        - uid: The subscriber user id, or NULL.
 *        - mail: The subscriber email address; same as $message['to'].
 *        - language: The subscriber language code.
 *        - tids: An array of taxonomy term ids.
 *        - newsletter_subscription: An array of subscription ids.
 *      - node: The simplenews newsletter node object, which contains the
 *        following useful properties:
 *        - changed: The node last-modified date, as a unix timestamp.
 *        - created: The node creation date, as a unix timestamp.
 *        - name: The username of the node publisher.
 *        - nid: The node id.
 *        - title: The node title.
 *        - uid: The user ID of the node publisher.
 *      - newsletter: The simplenews newsletter object, which contains the
 *        following useful properties:
 *        - nid: The node ID of the newsletter node.
 *        - name: The short name of the newsletter.
 *        - description: The long name or description of the newsletter.
 *  - $template_path: The relative path to the template directory.
 *  - $template_url: The absolute url to the template directory.
 *  - $theme: The name of the selected Email theme.
 *  - $theme_path: The relative path to the Email theme directory.
 *  - $theme_url: The absolute url to the Email theme directory.
 */
$template_name = basename(__FILE__);
$current_path = realpath(NULL);
$current_len = strlen($current_path);
$template_path = realpath(dirname(__FILE__));
if (!strncmp($template_path, $current_path, $current_len)) {
  $template_path = substr($template_path, $current_len + 1);
}
$template_url = url($template_path, array('absolute' => TRUE));
?>
<?php //if ($key == 'node' || $key == 'test'): ?>
<!--  <div class="htmlmail-simplenews-link">-->
<!--    <a href="--><?php //echo url('node/' . $params['simplenews_source']->getNode()->nid, array('absolute' => TRUE)); ?><!--">-->
<!--      Click here to view this message on the web.-->
<!--    </a>-->
<!--  </div>-->
<?php //endif; ?>
<div class="htmlmail-simplenews-body htmlmail-body">
  <div class="right-content">
    <?php echo $body; ?>
  </div>
  <?php if (isset($right_sidebar_content)): ?>
    <div class="left-content">
      <?php echo $right_sidebar_content;
      ?>
    </div>
  <?php endif; ?>
</div>

