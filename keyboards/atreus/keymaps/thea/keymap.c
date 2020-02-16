// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _RS 1
#define _LW 2


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT( /* Qwerty */
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P    ,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN ,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH ,
    KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_ESC, MO(_RS),  MO(_RS), KC_SPC,  KC_RSFT, KC_RALT, KC_LGUI, KC_RCTL
  ),

  /*
   *  1       2        3         4        5             ||          6        7        8       9        0
   *  tab     `        (         )        '             ||          left     down     up      right    :
   *  -       +        [         ]        =             ||          #        ~        @       *         \
   *  ctrl    gui      alt       shift   bksp   L3      || L3       enter    shift    alt     gui      ctrl
   */
  [_RS] = LAYOUT( /* [> RAISE <] */
    KC_1,    KC_2,     KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,   KC_9,     KC_0,
    KC_TAB,  KC_GRV,   KC_LPRN, KC_RPRN, KC_QUOT,                   KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_COLN,
    KC_MINS, KC_PLUS,  KC_LBRC, KC_RBRC, KC_EQL,                    KC_HASH, KC_TILD, KC_AT,  KC_ASTR,  KC_BSLS ,
    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_BSPC, MO(_LW), MO(_LW), KC_ENT,  KC_TRNS, KC_TRNS,KC_TRNS,  KC_TRNS
  ),

  /*
   * F1      F2        F3       F4       F5             ||          F6       F7       F8      F9        F10
   * volup   voldown   __       __       __             ||          home     pgdown   pgup    end       __
   * __      __        __       __       RESET          ||          __       __       __      __        __
   *  ctrl    gui      alt      CAPS     __     NA      || NA       __       CAPS     alt     gui       ctrl
   */
  [_LW] = LAYOUT( /* [> LOWER <] */
    KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,  KC_F9,    KC_F10,
    KC_VOLD, KC_VOLU,  KC_NO,   KC_NO,   KC_NO,                     KC_HOME, KC_PGDN, KC_PGUP,KC_END,   KC_NO,
    KC_NO,   KC_VOLU,  KC_NO,   KC_NO,   RESET,                     KC_NO,   KC_NO,   KC_NO,  KC_NO,    KC_NO,
    KC_TRNS, KC_TRNS,  KC_TRNS, KC_CAPS, KC_NO, KC_TRNS, KC_TRNS,   KC_NO,   KC_CAPS, KC_TRNS,KC_TRNS,  KC_TRNS
    )
};
