<?php
// $Id$

/**
 * Implement hook_rules_event_info().
 * @ingroup rules
 */

function anon_nodecreate_rules_event_info() {
  return array(
    'anon_nodecreate_rules_newuser' => array(
      'label' => t("When node is created by a new user."),
      'module' => 'Anon Node Create',
      'arguments' => array(
        'account' => array(
          'type' => 'user', 
          'label' => t("New user account of the created node."),
        ),
      ),
    ),
    'anon_nodecreate_rules_existinguser' => array(
      'label' => t("When node is created by an existing user anonymously."),
      'module' => 'Anon Node Create',
      'arguments' => array(
        'account' => array(
          'type' => 'user', 
          'label' => t("Existing user account of the created node."),
        ),
      ),
    ),
    'anon_nodecreate_rules_anonuser' => array(
      'label' => t("When node is created by an anonymous user without valid user details."),
      'module' => 'Anon Node Create',
      'arguments' => array(
        'account' => array(
          'type' => 'user', 
          'label' => t("Anon User"),
        ),
      ),
    ),
  );
}
 
