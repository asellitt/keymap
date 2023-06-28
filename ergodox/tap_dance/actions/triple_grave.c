static tap triple_grave_state = {
  .is_press_action = true,
  .state           = 0
};

void triple_grave_finished(qk_tap_dance_state_t *state, void *user_data) {
  triple_grave_state.state = current_dance(state);
  switch (triple_grave_state.state) {
    case SINGLE_TAP:
      register_code(KC_GRV);
      break;

    case SINGLE_HOLD:
      SEND_STRING("```");
      break;
  }
}

void triple_grave_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (triple_grave_state.state) {
    case SINGLE_TAP:
      unregister_code(KC_GRV);
      break;
  }
  triple_grave_state.state = 0;
}
