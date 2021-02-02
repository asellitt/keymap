//instanalize an instance of 'tap' for the Dot - Comma tap dance.
static tap triple_equal_state = {
  .is_press_action = true,
  .state           = 0
};

void triple_equal_finished(qk_tap_dance_state_t *state, void *user_data) {
  triple_equal_state.state = current_dance(state);
  switch (triple_equal_state.state) {
    case SINGLE_TAP:
      register_code(KC_EQL);
      break;

    case SINGLE_HOLD:
      SEND_STRING("===");
      break;

    case DOUBLE_TAP:
      SEND_STRING("!==");
      break;
  }
}

void triple_equal_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (triple_equal_state.state) {
    case SINGLE_TAP:
      unregister_code(KC_EQL);
      break;
  }
  triple_equal_state.state = 0;
}
