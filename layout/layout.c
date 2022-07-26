const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * Keymap: Default Layer 0, QWERTY
   */
  [0] = LAYOUT_ergodox(
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    // `             | 1             | 2             | 3             | 4             | 5             | {            |
       KC_GRAVE      , KC_1          , KC_2          , KC_3          , KC_4          , KC_5          , KC_LCBR      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    // TAB           | Q             | W             | E             | R             | T             | [            |
       KC_TAB        , KC_Q          , KC_W          , KC_E          , KC_R          , KC_T          , KC_LBRC      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------|              |
    // ESC           | A             | S             | D             | F             | G             |______________|
       KC_ESC        , KC_A          , KC_S          , KC_D          , KC_F          , KC_G                         ,
    //               |               |               |               |               |               | => (ROCKET)  |
    //---------------.---------------.---------------.---------------.---------------.---------------|              |
    // SHIFT         | Z             | X             | C             | V             | B             |              |
       KC_LSFT       , KC_Z          , KC_X          , KC_C          , KC_V          , KC_B          , M_ROCKET     ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    // LAYER 1       |               | LEFT          | RIGHT         | CONTROL       |
       MO(1)         , KC_TRNS       , KC_LEFT       , KC_RGHT       , KC_LCTL       ,
    //               |               |               |               |               |
    //---------------.---------------.---------------.---------------.---------------.
    //                                                                               .---------------.--------------.
    //                                                                               | HOME          | END          |
                                                                                       KC_HOME       , KC_END       ,
    //                                                                               |               |              |
    //                                                               .---------------.---------------.--------------.
    //                                                               | BACKSPACE     | DELETE        | ALT          |
                                                                                                       KC_LALT      ,
    //                                                               |               |               |              |
    //                                                               |               |               |--------------.
    //                                                               |               |               | SUPER        |
                                                                       KC_BSPC       , KC_DEL        , LGUI_T(KC_NO),
    //                                                               |               |               |              |
    //                                                               .---------------.---------------.--------------.

    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    // -            | 6             | 7             | 8             | 9             | 0             | =             |
       KC_MINS      , KC_6          , KC_7          , KC_8          , KC_9          , KC_0         , TD(THREEQL)   ,
    //              |               |               |               |               |        D      | H:===   2:!== |
    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    // ]            | Y             | U             | I             | O             | P             | '             |
       KC_RBRC      , KC_Y          , KC_U          , KC_I          , KC_O          , KC_P          , KC_QUOT       ,
    //              |               |               |               |               |               |               |
    //              .---------------|---------------.---------------.---------------.---------------.---------------.
    //______________| H             | J             | K             | L             | ;             | \             |
                      KC_H          , KC_J          , KC_K          , KC_L          , KC_SCLN       , KC_BSLS       ,
    // :            |               |               |               |               |               |               |
    //              .---------------|---------------.---------------.---------------.---------------.---------------.
    //              | N             | M             | ,             | .             | /             | SHIFT         |
       KC_COLN      , KC_N          , KC_M          , KC_COMM       , KC_DOT        , KC_SLSH       , KC_RSFT       ,
    //              |               |               |               |               |               |               |
    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    //                              | CONTROL       | UP            | DOWN          |               | LAYER 1       |
                                      KC_RCTL       , KC_UP         , KC_DOWN       , KC_TRNS       , MO(1)         ,
    //                              |               |               |               |               |               |
    //                              .---------------.---------------.---------------.---------------.---------------.
    //--------------.---------------.
    // PAGE UP      | PAGE DOWN     |
       KC_PGUP      , KC_PGDN       ,
    //              |               |
    //--------------.---------------.---------------.
    // ALT          | ENTER         | SPACE         |
       KC_RALT                                      ,
    //              |               |               |
    //--------------|               |               |
    // SUPER        |               |               |
       RGUI_T(KC_NO), KC_ENT        , KC_SPC
    //              |               |               |
    //--------------.---------------.---------------.
  ),

  /*
   * Keymap: Layer 1, Arrows, Media Keys
   */
  [1] = LAYOUT_ergodox(
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    // GLOBAL MUTE   | F1            | F2            | F3            | F4            | F5            |              |
       M_GMUTE       , KC_F1         , KC_F2         , KC_F3         , KC_F4         , KC_F5         , KC_TRNS      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    // VOLUME UP     |               | UP            |               |               |               | PREV TRACK   |
       KC_VOLU       , KC_TRNS       , KC_UP         , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_MPRV      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------|              |
    // MUTE          | LEFT          | DOWN          | RIGHT         |               |               |______________|
       KC_MUTE       , KC_LEFT       , KC_DOWN       , KC_RIGHT      , KC_TRNS       , KC_TRNS                      ,
    //               |               |               |               |               |               | STOP         |
    //---------------.---------------.---------------.---------------.---------------.---------------|              |
    // VOLUME DOWN   |               |               |               |               |               |              |
       KC_VOLD       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_MSTP      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    //               |               |               |               |               |
       KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    //               |               |               |               |               |
    //---------------.---------------.---------------.---------------.---------------.
    //                                                                               .---------------.--------------.
    //                                                                               |               |              |
                                                                                       KC_TRNS       , KC_TRNS      ,
    //                                                                               |               |              |
    //                                                               .---------------.---------------.--------------.
    //                                                               |               |               |              |
                                                                                                       KC_TRNS      ,
    //                                                               |               |               |              |
    //                                                               |               |               |--------------.
    //                                                               |               |               |              |
                                                                       KC_TRNS       , KC_TRNS        , KC_TRNS     ,
    //                                                               |               |               |              |
    //                                                               .---------------.---------------.--------------.

    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    // DEV CC       | F6            | F7            | F8            | F9            | F10           | GH APPROVE    |
       M_DEVCC      , KC_F6         , KC_F7         , KC_F8         , KC_F9         , KC_F10        , M_GHAPPROVE   ,
    //              |               |               |               |               |               |               |
    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    // NEXT TRACK   | MOUSE WH UP   | MOUSE UP      | MOUSE WH DOWN |               |               |               |
       KC_MNXT      , KC_WH_U       , KC_MS_U       , KC_WH_D       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    //              |               |               |               |               |               |               |
    //              .---------------|---------------.---------------.---------------.---------------.---------------.
    //______________| MOUSE LEFT    | MOUSE DOWN    | MOUSE RIGHT   |               |               | LAYER 2       |
                      KC_MS_L       , KC_MS_D       , KC_MS_R       , KC_TRNS       , KC_TRNS       , MO(2)         ,
    // PLAY/PAUSE   |               |               |               |               |               |               |
    //              .---------------|---------------.---------------.---------------.---------------.---------------.
    //              | MOUSE CLK LEFT|MOUSE CLK MIDDL|MOUSE CLK RIGHT|               |               |               |
       KC_MPLY      , KC_BTN1       , KC_BTN3       , KC_BTN2       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    //              |               |               |               |               |               |               |
    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    //                              |               |               |               |               |               |
                                      KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    //                              |               |               |               |               |               |
    //                              .---------------.---------------.---------------.---------------.---------------.
    //--------------.---------------.
    //              |               |
       KC_TRNS      , KC_TRNS       ,
    //              |               |
    //--------------.---------------.---------------.
    //              |               |               |
       KC_TRNS                                      ,
    //              |               |               |
    //--------------|               |               |
    //              |               |               |
       KC_TRNS      , KC_TRNS       , KC_TRNS
    //              |               |               |
    //--------------.---------------.---------------.
  ),

  /*
   * Keymap: Layer 2, Macros
   */
  [2] = LAYOUT_ergodox(
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    //               |               |               |               |               |               |              |
       KC_TRNS       , QNTM_1        , QNTM_2        , QNTM_3        , QNTM_4       , KC_TRNS       , KC_TRNS      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    //               |               |               |               |               |               |              |
       KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------|              |
    //               |               |               |               |               |               |______________|
       KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS                      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------|              |
    //               |               |               |               |               |               |              |
       KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS      ,
    //               |               |               |               |               |               |              |
    //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
    //               |               |               |               |               |
       KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    //               |               |               |               |               |
    //---------------.---------------.---------------.---------------.---------------.
    //                                                                               .---------------.--------------.
    //                                                                               |               |              |
                                                                                       KC_TRNS       , KC_TRNS      ,
    //                                                                               |               |              |
    //                                                               .---------------.---------------.--------------.
    //                                                               |               |               |              |
                                                                                                       KC_TRNS      ,
    //                                                               |               |               |              |
    //                                                               |               |               |--------------.
    //                                                               |               |               |              |
                                                                       KC_TRNS       , KC_TRNS        , KC_TRNS     ,
    //                                                               |               |               |              |
    //                                                               .---------------.---------------.--------------.

    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    //              |               |               |               |               |               | RESET         |
       KC_TRNS      , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , RESET         ,
    //              |               |               |               |               |               |               |
    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    //              |               |               |               |               |               |               |
       KC_TRNS      , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    //              |               |               |               |               |               |               |
    //              .---------------|---------------.---------------.---------------.---------------.---------------.
    //______________|               |               |               |               |               |               |
                      KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    // :            |               |               |               |               |               |               |
    //              .---------------|---------------.---------------.---------------.---------------.---------------.
    //              |               |               |               |               |               |               |
       KC_TRNS      , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    //              |               |               |               |               |               |               |
    //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
    //                              |               |               |               |               |               |
                                      KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
    //                              |               |               |               |               |               |
    //                              .---------------.---------------.---------------.---------------.---------------.
    //--------------.---------------.
    //              |               |
       KC_TRNS      , KC_TRNS       ,
    //              |               |
    //--------------.---------------.---------------.
    //              |               |               |
       KC_TRNS                                      ,
    //              |               |               |
    //--------------|               |               |
    //              |               |               |
       KC_TRNS      , KC_TRNS       , KC_TRNS
    //              |               |               |
    //--------------.---------------.---------------.
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

/* Blank layout
[] = LAYOUT_ergodox(
  //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
  //               |               |               |               |               |               |              |
     KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS      ,
  //               |               |               |               |               |               |              |
  //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
  //               |               |               |               |               |               |              |
     KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS      ,
  //               |               |               |               |               |               |              |
  //---------------.---------------.---------------.---------------.---------------.---------------|              |
  //               |               |               |               |               |               |______________|
     KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS                      ,
  //               |               |               |               |               |               |              |
  //---------------.---------------.---------------.---------------.---------------.---------------|              |
  //               |               |               |               |               |               |              |
     KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS      ,
  //               |               |               |               |               |               |              |
  //---------------.---------------.---------------.---------------.---------------.---------------.--------------.
  //               |               |               |               |               |
     KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
  //               |               |               |               |               |
  //---------------.---------------.---------------.---------------.---------------.
  //                                                                               .---------------.--------------.
  //                                                                               |               |              |
                                                                                     KC_TRNS       , KC_TRNS      ,
  //                                                                               |               |              |
  //                                                               .---------------.---------------.--------------.
  //                                                               |               |               |              |
                                                                                                     KC_TRNS      ,
  //                                                               |               |               |              |
  //                                                               |               |               |--------------.
  //                                                               |               |               |              |
                                                                     KC_TRNS       , KC_TRNS        , KC_TRNS     ,
  //                                                               |               |               |              |
  //                                                               .---------------.---------------.--------------.

  //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
  //              |               |               |               |               |               |               |
     KC_TRNS      , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
  //              |               |               |               |               |               |               |
  //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
  //              |               |               |               |               |               |               |
     KC_TRNS      , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
  //              |               |               |               |               |               |               |
  //              .---------------|---------------.---------------.---------------.---------------.---------------.
  //______________|               |               |               |               |               |               |
                    KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
  // :            |               |               |               |               |               |               |
  //              .---------------|---------------.---------------.---------------.---------------.---------------.
  //              |               |               |               |               |               |               |
     KC_TRNS      , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
  //              |               |               |               |               |               |               |
  //--------------.---------------.---------------.---------------.---------------.---------------.---------------.
  //                              |               |               |               |               |               |
                                    KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       , KC_TRNS       ,
  //                              |               |               |               |               |               |
  //                              .---------------.---------------.---------------.---------------.---------------.
  //--------------.---------------.
  //              |               |
     KC_TRNS      , KC_TRNS       ,
  //              |               |
  //--------------.---------------.---------------.
  //              |               |               |
     KC_TRNS                                      ,
  //              |               |               |
  //--------------|               |               |
  //              |               |               |
     KC_TRNS      , KC_TRNS       , KC_TRNS
  //              |               |               |
  //--------------.---------------.---------------.
),
*/
