static tap x_cut_state = {
  .is_press_action = true,
  .state           = 0
};

void x_cut_finished(qk_tap_dance_state_t *state, void *user_data) {
  x_cut_state.state = current_dance(state);
  switch (x_cut_state.state) {
    case SINGLE_TAP:
      register_code(KC_X);
      break;

    case SINGLE_HOLD:
      SEND_STRING(SS_LCTL("x"));
      break;
  }
}

void x_cut_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (x_cut_state.state) {
    case SINGLE_TAP:
      unregister_code(KC_X);
      break;
  }
  x_cut_state.state = 0;
}
