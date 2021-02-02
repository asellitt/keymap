const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * Keymap: Default Layer 0, QWERTY
   *
   * ,--------------------------------------------------.      ,--------------------------------------------------.
   * |    `   |   1  |   2  |   3  |   4  |   5  |  {   |      |   -  |   6  |   7  |   8  |   9  |   0  |   =    |
   * |--------+------+------+------+------+-------------|      |------+------+------+------+------+------+--------|
   * |   TAB  |   Q  |   W  |   E  |   R  |   T  |  [   |      |  ]   |   Y  |   U  |   I  |   O  |   P  |   '    |
   * |--------+------+------+------+------+------|      |      |      |------+------+------+------+------+--------|
   * |   ESC  |   A  |   S  |   D  |   F  |   G  |------|      |------|   H  |   J  |   K  |   L  |   ;  |   \    |
   * |--------+------+------+------+------+------|  =>  |      |  :   |------+------+------+------+------+--------|
   * |  LSFT  |   Z  |   X  |   C  |   V  |   B  |      |      |      |   N  |   M  |   ,  |   .  |   /  |  RSFT  |
   * `--------+------+------+------+------+-------------'      `-------------+------+------+------+------+--------'
   *   |  ~L1 |      | LEFT | RGHT | LCTL |                                  | RCTL |  UP  | DOWN |      | ~L1  |
   *   `----------------------------------'                                  `----------------------------------'
   *                                        ,-------------.  ,-------------.
   *                                        | HOME |  END |  | PGUP | PGDN |
   *                                 ,------|------|------|  |------+------+------.
   *                                 |      |      | LAlt |  | RAlt |      |      |
   *                                 | BSPC | DEL  |------|  |------| ENT  | SPC  |
   *                                 |      |      | LGUI |  | RGUI |      |      |
   *                                 `--------------------'  `--------------------'
   */
  [0] = LAYOUT_ergodox_pretty(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LCBR,      /**/KC_MINS,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    TD(THREEQL),
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,      /**/KC_RBRC,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                  /**/               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_BSLS,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    M_ROCKET,     /**/KC_COLN,       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    MO(1),   KC_TRNS, KC_LEFT, KC_RGHT, KC_LCTL,                        /**/                        KC_RCTL, KC_UP,   KC_DOWN, KC_TRNS, MO(1),
                                                 KC_HOME, KC_END,       /**/KC_PGUP,       KC_PGDN,
                                                          KC_LALT,      /**/KC_RALT,
                                        KC_BSPC, KC_DEL,  LGUI_T(KC_NO),/**/RGUI_T(KC_NO), KC_ENT,  KC_SPC
  ),
  /*
   * Keymap: Layer 1, Arrows, Media Keys
   *
   * ,--------------------------------------------------.      ,--------------------------------------------------.
   * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |      | DevCC|  F6  |  F7  |  F8  |  F9  |  F10 |        |
   * |--------+------+------+------+------+-------------|      |------+------+------+------+------+------+--------|
   * |  Vol+  |      |  Up  |      |      |      | Next |      | Prev | MWUP | MUP  | MWDN |      |      |        |
   * |--------+------+------+------+------+------| Trck |      | Trck |------+------+------+------+------+--------|
   * |  Mute  | Left | Down | Rght |      |      |------|      |------| MLFT | MDWN | MRGT |      |      |  ~L2   |
   * |--------+------+------+------+------+------| Stop |      | Play |------+------+------+------+------+--------|
   * |  Vol-  |      |      |      |      |      |      |      | Paus | LCLK | MCLK | RCLK |      |      |        |
   * `--------+------+------+------+------+-------------'      `-------------+------+------+------+------+--------'
   *   | #### |      |      |      |      |                                  |      |      |      |      | #### |
   *   `----------------------------------'                                  `----------------------------------'
   *                                        ,-------------.  ,-------------.
   *                                        |      |      |  |      |      |
   *                                 ,------|------|------|  |------+------+------.
   *                                 |      |      |      |  |      |      |      |
   *                                 |      |      |------|  |------|      |      |
   *                                 |      |      |      |  |      |      |      |
   *                                 `--------------------'  `--------------------'
   */
  [1] = LAYOUT_ergodox_pretty(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS,/**/M_DEVCC, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
    KC_VOLU, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT,/**/KC_MPRV, KC_WH_U, KC_MS_U, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_MUTE, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,         /**/         KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, MO(2),
    KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MSTP,/**/KC_MPLY, KC_BTN1, KC_BTN3, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  /**/                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                 KC_TRNS, KC_TRNS,/**/KC_TRNS, KC_TRNS,
                                                          KC_TRNS,/**/KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,/**/KC_TRNS, KC_TRNS, KC_TRNS
  ),
  /*
   * Keymap: Layer 2, Macros
   *
   * ,--------------------------------------------------.      ,--------------------------------------------------.
   * |        |QNTM_1|QNTM_2|QNTM_3|      |      |      |      |      |      |      |      |      |      | Reset  |
   * |--------+------+------+------+------+-------------|      |------+------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |      |      |      |      |      |      |      |        |
   * |--------+------+------+------+------+------|      |      |      |------+------+------+------+------+--------|
   * |        |      |      |      |      |      |------|      |------|      |      |      |      |      | ###### |
   * |--------+------+------+------+------+------|      |      |      |------+------+------+------+------+--------|
   * |        |      |      |      |      |      |      |      |      |      |      |      |      |      |        |
   * `--------+------+------+------+------+-------------'      `-------------+------+------+------+------+--------'
   *   | #### |      |      |      |      |                                  |      |      |      |      | #### |
   *   `----------------------------------'                                  `----------------------------------'
   *                                        ,-------------.  ,-------------.
   *                                        |      |      |  |      |      |
   *                                 ,------|------|------|  |------+------+------.
   *                                 |      |      |      |  |      |      |      |
   *                                 |      |      |------|  |------|      |      |
   *                                 |      |      |      |  |      |      |      |
   *                                 `--------------------'  `--------------------'
   */
  [2] = LAYOUT_ergodox_pretty(
    KC_TRNS, QNTM_1,  QNTM_2,  QNTM_3,  KC_TRNS, KC_TRNS, KC_TRNS,/**/KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         /**/         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  /**/                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                 KC_TRNS, KC_TRNS,/**/KC_TRNS, KC_TRNS,
                                                          KC_TRNS,/**/KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS,/**/KC_TRNS, KC_TRNS, KC_TRNS
  ),
};

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
