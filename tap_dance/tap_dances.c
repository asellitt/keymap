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
};

// Register the double tap dances:
qk_tap_dance_action_t tap_dance_actions[] = {
  [THREEQL] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, triple_equal_finished, triple_equal_reset, DANCING_TAP_DELAY),
  [THREGRV] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, triple_grave_finished, triple_grave_reset, DANCING_HOLD_DELAY),
  [XCUT] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, x_cut_finished, x_cut_reset, DANCING_HOLD_DELAY),
  [CCPY] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, c_copy_finished, c_copy_reset, DANCING_HOLD_DELAY),
  [VPST] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, v_paste_finished, v_paste_reset, DANCING_HOLD_DELAY),
};
