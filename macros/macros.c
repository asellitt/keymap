#include "macros.h"

enum {
  M_ROCKET = EZ_SAFE_RANGE,
  M_DEVCC,
  M_GMUTE,
  QNTM_1,
  QNTM_2,
  QNTM_3,
  QNTM_4,
};

void blink_board_led(keyrecord_t *record) {
  if(record->event.pressed) {
    ergodox_board_led_on();
  } else {
    ergodox_board_led_off();
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  blink_board_led(record);

  switch (keycode) {
    case QNTM_1:
      if (record->event.pressed) QUANTUM_1;
      break;
    case QNTM_2:
      if (record->event.pressed) QUANTUM_2;
      break;
    case QNTM_3:
      if (record->event.pressed) QUANTUM_3;
      break;
    case QNTM_4:
      if (record->event.pressed) QUANTUM_4;
      break;
    case M_ROCKET:
      if (record->event.pressed) MACRO_ROCKET;
      break;
    case M_DEVCC:
      if (record->event.pressed) MACRO_DEV_CREDIT_CARD;
      break;
    case M_GMUTE:
      if (record->event.pressed) MACRO_GLOBAL_MUTE;
      break;
  }
  return true;
}
