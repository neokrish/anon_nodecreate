<?php
// $Id: logintoboggan_rules.rules.inc,v 1.1.2.1 2010/03/25 20:03:15 thehunmonkgroup Exp $

/**
 * Implement hook_rules_event_info().
 * @ingroup rules
 */

function anoncreate_rules_rules_event_info() {
  return array(
    'anoncreate_rules_newuser' => array(
      'label' => t("When node is created by a new user."),
      'module' => 'Anon Node Create',
      'arguments' => array(
        'account' => array(
          'type' => 'user', 
          'label' => t("New user account of the created node."),
        ),
      ),
    ),
    'anoncreate_rules_existinguser' => array(
      'label' => t("When node is created by an existing user anonymously."),
      'module' => 'Anon Node Create',
      'arguments' => array(
        'account' => array(
          'type' => 'user', 
          'label' => t("Existing user account of the created node."),
        ),
      ),
    ),
  );
}
