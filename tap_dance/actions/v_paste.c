static tap v_paste_state = {
  .is_press_action = true,
  .state           = 0
};

void v_paste_finished(qk_tap_dance_state_t *state, void *user_data) {
  v_paste_state.state = current_dance(state);
  switch (v_paste_state.state) {
    case SINGLE_TAP:
      register_code(KC_V);
      break;

    case SINGLE_HOLD:
      SEND_STRING(SS_LGUI(SS_TAP(X_V)));
      break;
  }
}

void v_paste_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (v_paste_state.state) {
    case SINGLE_TAP:
      unregister_code(KC_V);
      break;
  }
  v_paste_state.state = 0;
}
