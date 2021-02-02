static tap c_copy_state = {
  .is_press_action = true,
  .state           = 0
};

void c_copy_finished(qk_tap_dance_state_t *state, void *user_data) {
  c_copy_state.state = current_dance(state);
  switch (c_copy_state.state) {
    case SINGLE_TAP:
      register_code(KC_C);
      break;

    case SINGLE_HOLD:
      SEND_STRING(SS_LGUI(SS_TAP(X_C)));
      break;
  }
}

void c_copy_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (c_copy_state.state) {
    case SINGLE_TAP:
      unregister_code(KC_C);
      break;
  }
  c_copy_state.state = 0;
}
