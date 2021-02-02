#include "actions/triple_equal.c"

// Register the double tap dances:
qk_tap_dance_action_t tap_dance_actions[] = {
  [THREEQL] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, triple_equal_finished, triple_equal_reset, DANCING_TERM),
};
