#include QMK_KEYBOARD_H
#include "quantum/keymap_extras/keymap_jp.h"

#define _BASE 0

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT( \
    JP_ZHTG, KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_6,     XXXXXXX, XXXXXXX,  KC_6,     KC_7,     KC_8,    KC_9,     KC_0,    KC_MINS, JP_CIRC, JP_YEN,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,     XXXXXXX, XXXXXXX,  KC_T,     KC_Y,     KC_U,    KC_I,     KC_O,    KC_P,    JP_AT,   JP_LBRC,  KC_ENT, \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_RCTL,  XXXXXXX, XXXXXXX,  KC_PGUP,  KC_H,     KC_J,    KC_K,     KC_L,    KC_SCLN, JP_COLN, JP_RBRC,  KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_RCTL,  XXXXXXX, XXXXXXX,  KC_BSPC,  KC_N,     KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, JP_BSLS, KC_UP,   KC_RSFT, \
    KC_ESC,  KC_LGUI, KC_LALT, KC_LCTL, KC_DEL,   KC_SPC,  XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_SPC,  KC_RCTL,  KC_PGDN, KC_LALT, KC_LEFT, KC_DOWN, KC_RGHT \
	)
};
