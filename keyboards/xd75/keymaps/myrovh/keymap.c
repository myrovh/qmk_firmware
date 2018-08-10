/* Copyright 2017 Wunder
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
#include "xd75.h"

// Layer shorthand
#define _QW 0
#define _GM 1
#define _FN 2
#define _LO 3
#define _RA 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | /      | *      | -      | `      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | DEL    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | P7     | P8     | P9     | TAB    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | BACK   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | P4     | P5     | P6     | ESC    | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | P1     | P2     | P3     | SHIFT  | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | RETURN |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | P0     | P0     | P.     | FN     | CTRL   | ALT    | SUPER  | LOWER  | SPACE  | SPACE  | RAISE  | LEFT   | DOWN   | UP     | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_QW] = { /* QWERTY */
  { KC_PSLS, KC_PAST, KC_PMNS, KC_GRAVE, KC_1,     KC_2,    KC_3,    KC_4,    KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_DELETE },
  { KC_P7,   KC_P8,   KC_P9,   KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPACE },
  { KC_P4,   KC_P5,   KC_P6,   KC_ESC,   KC_A,     KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOTE  },
  { KC_KP_1,   KC_P2,   KC_P3,   KC_LSFT,  KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENTER  },
  { KC_P0,   KC_P0,   KC_PDOT, MO(_FN),  KC_LCTRL, KC_LALT, KC_LGUI, MO(_LO), KC_SPC, KC_SPC, MO(_RA), KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT  },
 },

/* GAME
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | RGB RA | RGB TO |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | BL INC |        |        |        |        |        |        |        |        |        |        | PR SCR | SCR LK | PAUSE  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | BL DEC |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        | RESET  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_GM] = { /* FUNCTION */
  { TG(_GM), _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, KC_TAB,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, KC_LCTRL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 },

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | RGB RA | RGB TO |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | BL INC |        |        |        |        |        |        |        |        |        |        | PR SCR | SCR LK | PAUSE  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | BL DEC |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        | RESET  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_FN] = { /* FUNCTION */
  { RGB_M_R, RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TO(_GM) },
  { _______, BL_INC, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS  },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, BL_DEC , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET   },
 },

/* LOWER
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        | F12    | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        |        |        | ~      | !      | @      | #      | $      | %      | ^      | &      | *      | (      | )      | BACK   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |        |        |        | DEL    | F1     | F2     | F3     | F4     | F5     | F6     | _      | +      | {      | }      | |      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        | F7     | F8     | F9     | F10    | F11    | F12    | ISO ~  | ISO |  | HOME   | END    |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        | Next   | Vol-   | Vol+   | Play   |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_LO] = { /* LOWER */
  { _______, _______, _______, KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11  },
  { _______, _______, _______, KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC },
  { _______, _______, _______, KC_DEL , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE },
  { _______, _______, _______, _______, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12,S(KC_NUHS),S(KC_NUBS),KC_HOME,KC_END, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY },
 },

/* RAISE
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        | F12    | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        |        |        | `      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | BACK   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |        |        |        | DEL    | F1     | F2     | F3     | F4     | F5     | F6     | -      | =      | [      | ]      | \      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        | F7     | F8     | F9     | F10    | F11    | F12    | ISO #  | ISO /  | PG UP  | PG DN  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        | Next   | Vol-   | Vol+   | Play   |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_RA] = { /* RAISE */
  { _______, _______, _______, KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11  },
  { _______, _______, _______, KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC },
  { _______, _______, _______, KC_DEL , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS },
  { _______, _______, _______, _______, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY },
 }
};

const uint16_t PROGMEM fn_actions[] = {

};

uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {
    case _GM:
      gp100_led_on();
      break;
    case _FN:
      capslock_led_on();
      break;
    default:
      gp100_led_off();
      capslock_led_off();
      break;
  }
  return state;
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
