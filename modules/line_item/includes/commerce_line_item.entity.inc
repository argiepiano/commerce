<?php 

/**
 * Defines the CommerceLineItem Entity
 */
class CommerceLineItem extends Entity {

  public $langcode = LANGUAGE_NONE;

  public function __construct($values = array()) {
    parent::__construct($values, 'commerce_line_item');
  }

  public function id() {
    return $this->line_item_id;
  }

  public function entityType() {
    return 'commerce_line_item';
  }

  public function label() {
    return $this->name;
  }

  public function uri() {
    if (empty($this->id)) {
      return NULL;
    }
    return [
      'path' => 'commerce_line_item/' . $this->id,
      'options' => [],
    ];
  }

}
