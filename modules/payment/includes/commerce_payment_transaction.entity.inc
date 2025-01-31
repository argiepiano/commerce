<?php 

/**
 * Defines the CommercePaymentTransaction Entity
 */
class CommercePaymentTransaction extends Entity {

  public $langcode = LANGUAGE_NONE;

  public function __construct($values = array()) {
    parent::__construct($values, 'commerce_payment_transaction');
  }

  public function id() {
    return $this->transaction_id;
  }

  public function entityType() {
    return 'commerce_payment_transaction';
  }

  public function label() {
    return $this->name;
  }

  public function uri() {
    if (empty($this->id)) {
      return NULL;
    }
    return [
      'path' => 'commerce_payment_transaction/' . $this->id,
      'options' => [],
    ];
  }

}
