      /* Copyright 2018 REPLACE_WITH_YOUR_NAME
   *
   * This program is free software: you can redistribute it and/or modify
   * it under the terms of the GNU General Public License as published by
   * the Free Software Foundation, either version 2 of the License, or
   * (at y our option) any later version.
   *
   * This program is distributed in the hope that it will be useful,
   * but WITHOUT ANY WARRANTY; without even the implied warranty of
   * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   * GNU General Public License for more details.
   *)
   * You should have received a copy of the GNU General Public License
   * along with this program.  If not, see <http://www.gnu.org/licenses/>.
   */
#include QMK_KEYBOARD_H
#include "config.h"

enum CustomLayers {
    _BASE = 0, 
    _FUNC
};

/*
led_config_t g_led_config = { { // Key Matrix to LED Index
   {  0,  1,  2}, 
   {  3,  4,  5}, 
   {  8,  7,  6},
   { 11, 10,  9}
}, {
  // LED Index to Physical Position
   { 134,   0 },  { 180,  0 },  { 224,  0 }, \
   { 134,  64 },  { 180, 64 },  { 224, 64 }, \
   {   0,   0 },  {  45,  0 },  {  90,  0 }, \
   {   0,  64 },  {  45, 64 },  {  90, 64 }
}, {
  // LED Index to Flag
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };
*/

uint8_t isDefaultLayer = _BASE;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT( 
         RGB_TOG,      KC_W,     KC_E,          KC_R,      KC_T,     RGB_MOD,   \
            KC_A,      KC_S,     KC_D,          KC_F,      KC_G,     KC_H    \
        ),
    [_FUNC] = LAYOUT( 
            KC_Q,      KC_W,     KC_E,          KC_R,      KC_T,     KC_Y,   \
            KC_A,      KC_S,     KC_D,          KC_F,      KC_G,     KC_H    \
        )
};

void matrix_init_user(void) {
    /* rgb_matrix_config.mode = RGB_MATRIX_TYPING_HEATMAP; */
 //   rgblight_mode(RGB_MATRIX_TYPING_HEATMAP);
}
