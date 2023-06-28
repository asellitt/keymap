/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define DANCING_TAP_DELAY 150
#define DANCING_HOLD_DELAY 100

#undef TAPPING_TERM
#define TAPPING_TERM DANCING_TAP_DELAY
