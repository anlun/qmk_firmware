/* Copyright 2019 DmNosachev
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * ,---------------------------------------------------------------------------------------------------------------------------------------.
 * | Caps|     | F1  | F2  | F3  | F4  |  | F5  | F6  | F7  | F8  |  | F9  | F10 | F11 | F12 | |PrnSc|ScrLk|Pause|                         |
 * |---------------------------------------------------------------------------------------------------------------------------------------|
 * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \  | ~ ` | |Insrt|Home |PgUp | |NumLk|  /  |  *  |  -  |
 * |---------------------------------------------------------------------------------------------------------------------------------------|
 * |  Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  | Backsp  | | Del | End |PgDn | |  7  |  8  |  9  |  +  |
 * |---------------------------------------------------------------------------------------------------------------------------------|     |
 * |  Ctrl  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;: |  '" |     Enter    |                     |  4  |  5  |  6  |     |
 * |---------------------------------------------------------------------------------------------------------------------------------------|
 * |   Shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /? |    Shift        |       | Up  |       |  1  |  2  |  3  |Enter|
 * |-----------------------------------------------------------------------------------------|---------------------------------------|     |
 * | Super  |     | Alt |                  Space                          | Alt  |    | Ctr  | |Left |Down |Right| |  0        |  .  |     |
 * `---------------------------------------------------------------------------------------------------------------------------------------'
*/
    [_BASE] = LAYOUT_ALL(
    KC_CAPS,          KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR, KC_SLCK, KC_PAUS,
    KC_ESC,  KC_1,    KC_2,   KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,   KC_GRV,  KC_INS,  KC_HOME, KC_PGUP,   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,            KC_DEL,  KC_END,  KC_PGDN,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_LCTL, KC_A,    KC_S,   KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NO,   KC_ENT,                                          KC_P4,   KC_P5,   KC_P6,   KC_NO,
    KC_LSFT, KC_NO,   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,                     KC_UP,              KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LGUI,          KC_LALT,                           KC_SPC,                                      KC_RALT,          KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT,   KC_NO,   KC_P0,   KC_PDOT, KC_NO
    )
};

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
