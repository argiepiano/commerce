<?php 

/**
 * Defines the CommerceProduct Entity.
 */
class CommerceProduct extends Entity {

  public $langcode = LANGUAGE_NONE;

  public function __construct($values = array()) {
    parent::__construct($values, 'commerce_product');
  }

  public function id() {
    return $this->product_id;
  }

  public function entityType() {
    return 'commerce_product';
  }

  public function label() {
    return $this->name;
  }

  public function uri() {
    if (empty($this->id)) {
      return NULL;
    }
    return [
      'path' => 'commerce_product/' . $this->id,
      'options' => [],
    ];
  }

}
