#include QMK_KEYBOARD_H

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,---------------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|DEL|HOM|END|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|\    |Fn0|
     * |---------------------------------------------------------------|
     * |Esc|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter      |PgU|
     * |---------------------------------------------------------------|
     * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Ctrl|Fn0 |GUI |         Space             |ALT|Ctrl|Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [0] = LAYOUT( \
                 KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,KC_HOME, KC_END, \
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,     KC_FN0, \
      KC_ESC,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_NUHS,KC_ENT,      KC_PGUP,\
     KC_LSFT,KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,  KC_PGDN,\
                 KC_LCTL,KC_FN0,KC_LGUI,               KC_SPC,           KC_RALT,KC_RCTL,KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT \
    ),
    /* Layer 1: Second Layer
     * ,---------------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|DEL|HOM|END|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|PgU |  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|\   |Fn0|
     * |---------------------------------------------------------------|
     * |Esc|VlD|PgD|VlU|  F|  G|Lef|Dow|Up |Rig|  ;|  '|Enter      |VlU|
     * |---------------------------------------------------------------|
     * |CAPS|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |VlD|
     * |---------------------------------------------------------------|
     * |Ctrl|Fn0 |GUI |         Space             |ALT|Ctrl|Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [1] = LAYOUT( \
        KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_PGUP  ,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_SLCK,KC_PAUS,KC_TRNS,     KC_TRNS,\
        KC_TRNS,KC__VOLUP,KC_PGDOWN,KC__VOLDOWN,KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_UP  ,KC_RIGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_VOLU,\
        KC_CAPS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,KC_VOLD,\
        KC_TRNS,KC_TRNS,KC_TRNS,               KC_TRNS,          KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,KC_TRNS,KC_TRNS  \
    ),
};

const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};
