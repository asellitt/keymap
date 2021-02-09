#include "tap_dance_setup.c"
#include "actions/triple_equal.c"
#include "actions/triple_grave.c"
#include "actions/x_cut.c"
#include "actions/c_copy.c"
#include "actions/v_paste.c"

                  //-----------------------------------------------------//
                  // Single | Single | Double | Double | Triple | Triple //
                  //  tap   |  hold  |  tap   |  hold  |  tap   |  hold  //
enum tap_dances { //-----------------------------------------------------//
  THREEQL,        //   =    |  ===   |  !==   |        |        |        //
                  //-----------------------------------------------------//
  THREGRV,        //   `    |  ```   |        |        |        |        //
                  //-----------------------------------------------------//
  XCUT,           //   x    | CMD+x  |        |        |        |        //
                  //-----------------------------------------------------//
  CCPY,           //   c    | CMD+c  |        |        |        |        //
                  //-----------------------------------------------------//
  VPST,           //   v    | CMD+v  |        |        |        |        //
                  //-----------------------------------------------------//
  F1_1,           //   1    |        |   F1   |        |        |        //
                  //-----------------------------------------------------//
  F2_2,           //   2    |        |   F2   |        |        |        //
                  //-----------------------------------------------------//
  F3_3,           //   3    |        |   F3   |        |        |        //
                  //-----------------------------------------------------//
  F4_4,           //   4    |        |   F4   |        |        |        //
                  //-----------------------------------------------------//
  F5_5,           //   5    |        |   F5   |        |        |        //
                  //-----------------------------------------------------//
  F6_6,           //   6    |        |   F6   |        |        |        //
                  //-----------------------------------------------------//
  F7_7,           //   7    |        |   F7   |        |        |        //
                  //-----------------------------------------------------//
  F8_8,           //   8    |        |   F8   |        |        |        //
                  //-----------------------------------------------------//
  F9_9,           //   9    |        |   F9   |        |        |        //
                  //-----------------------------------------------------//
  F10_0,          //   0    |        |  F10   |        |        |        //
                  //-----------------------------------------------------//
};

// Register the double tap dances:
qk_tap_dance_action_t tap_dance_actions[] = {
  [THREEQL] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, triple_equal_finished, triple_equal_reset, DANCING_TAP_DELAY),
  [THREGRV] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, triple_grave_finished, triple_grave_reset, DANCING_HOLD_DELAY),
  [XCUT] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, x_cut_finished, x_cut_reset, DANCING_HOLD_DELAY),
  [CCPY] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, c_copy_finished, c_copy_reset, DANCING_HOLD_DELAY),
  [VPST] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, v_paste_finished, v_paste_reset, DANCING_HOLD_DELAY),
  [F1_1] = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_F1),
  [F2_2] = ACTION_TAP_DANCE_DOUBLE(KC_2, KC_F2),
  [F3_3] = ACTION_TAP_DANCE_DOUBLE(KC_3, KC_F3),
  [F4_4] = ACTION_TAP_DANCE_DOUBLE(KC_4, KC_F4),
  [F5_5] = ACTION_TAP_DANCE_DOUBLE(KC_5, KC_F5),
  [F6_6] = ACTION_TAP_DANCE_DOUBLE(KC_6, KC_F6),
  [F7_7] = ACTION_TAP_DANCE_DOUBLE(KC_7, KC_F7),
  [F8_8] = ACTION_TAP_DANCE_DOUBLE(KC_8, KC_F8),
  [F9_9] = ACTION_TAP_DANCE_DOUBLE(KC_9, KC_F9),
  [F10_0] = ACTION_TAP_DANCE_DOUBLE(KC_0, KC_F10),
};
