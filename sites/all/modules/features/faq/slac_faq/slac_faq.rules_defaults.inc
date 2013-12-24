<?php
/**
 * @file
 * slac_faq.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function slac_faq_default_rules_configuration() {
  $items = array();
  $items['rules_slac_faq_close'] = entity_import('rules_config', '{ "rules_slac_faq_close" : {
      "LABEL" : "FAQ Closed",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "FAQ", "SLAC FAQ" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "slac_faq" : "slac_faq" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-slac-faq-status" ], "value" : "closed" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "Your FAQ question on [site:url] has been answered.",
            "message" : "Dear [node:author:mail]\\r\\n\\r\\nYour FAQ question on [site:url] has been answered: below are the details:\\r\\n\\r\\nYour question:\\r\\n[node:title]\\r\\n\\r\\nDetailed question:\\r\\n[node:body]\\r\\n\\r\\nAnswer to your question:\\r\\n[node:field-answer]\\r\\n\\r\\n\\r\\nIf your no answer has been provided or if you\\u0027d like to follow up, please feel free to send an email to [site:mail]\\r\\n\\r\\n\\r\\nThank you",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_slac_faq_new'] = entity_import('rules_config', '{ "rules_slac_faq_new" : {
      "LABEL" : "FAQ New",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "FAQ", "SLAC", "SLAC FAQ" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "slac_faq" : "slac_faq" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "Thank you for submitting your question, you will receive an email notification once it has been answered.",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
