#include "macros.h"

enum {
  MODE_TOGGLE = EZ_SAFE_RANGE,
  MODE_REPORT,
  MODE_CTRL,
  MODE_GUI,
  M_ROCKET,
  M_DEVCC,
  M_GMUTE,
  M_HIDE,
  M_GHAPPROVE,
  M_JAVAPROC,
  M_ZORRO,
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

bool is_osx_mode = true;
void toggle_mode(void);
void toggle_mode() {
  is_osx_mode = !is_osx_mode;
}

void report_mode(void);
void report_mode() {
  if(is_osx_mode) {
    SEND_STRING("Mode: OSX");
  }
  else {
    SEND_STRING("Mode: WIN");
  }
}

void mode_aware_control(keyrecord_t *record);
void mode_aware_control(keyrecord_t *record) {
  if(is_osx_mode) {
    if(record->event.pressed) {
      SEND_STRING(SS_DOWN(X_LCTL));
    }
    else {
      SEND_STRING(SS_UP(X_LCTL));
    }
  }
  else {
    if(record->event.pressed) {
      SEND_STRING(SS_DOWN(X_LGUI));
    }
    else {
      SEND_STRING(SS_UP(X_LGUI));
    }
  }
}

void mode_aware_gui(keyrecord_t *record);
void mode_aware_gui(keyrecord_t *record) {
  if(is_osx_mode) {
    if(record->event.pressed) {
      SEND_STRING(SS_DOWN(X_LGUI));
    }
    else {
      SEND_STRING(SS_UP(X_LGUI));
    }
  }
  else {
    if(record->event.pressed) {
      SEND_STRING(SS_DOWN(X_LCTL));
    }
    else {
      SEND_STRING(SS_UP(X_LCTL));
    }
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  blink_board_led(record);

  switch (keycode) {
    case MODE_TOGGLE:
      if (record->event.pressed) toggle_mode();
      break;
    case MODE_REPORT:
      if (record->event.pressed) report_mode();
      break;
    case MODE_CTRL:
      mode_aware_control(record);
      break;
    case MODE_GUI:
      mode_aware_gui(record);
      break;
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
    case M_HIDE:
      if (record->event.pressed) MACRO_IDE_HIDE;
      break;
    case M_GHAPPROVE:
      if (record->event.pressed) MACRO_GITHUB_APPROVE;
      break;
    case M_JAVAPROC:
      if (record->event.pressed) MACRO_JAVA_PROC;
      break;
    case M_ZORRO:
      if (record->event.pressed) MACRO_ZORRO;
      break;
  }
  return true;
}
