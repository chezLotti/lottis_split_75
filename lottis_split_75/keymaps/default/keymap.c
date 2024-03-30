// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "../../config.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {    
    [0] = LAYOUT(
        // left
        KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,
        KC_LALT,    DE_1,       DE_2,       DE_3,       DE_4,       DE_5,       KC_PRINT_SCREEN,
        KC_TAB,     DE_Q,       DE_W,       DE_E,       DE_R,       DE_T,       KC_HOME,
        KC_CAPS,    DE_A,       DE_S,       DE_D,       DE_F,       DE_G,       KC_PGUP,
        KC_LSFT,    DE_Y,       DE_X,       DE_C,       DE_V,       DE_B,       KC_DEL,
        KC_NO,      KC_NO,      KC_NO,      KC_SPACE,   KC_LCTL,    KC_ALGR,    MO(6),

        //right
        KC_PAUSE,   KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
        KC_END,     DE_6,       DE_7,       DE_8,       DE_9,       DE_0,       DE_SS,
        KC_BSPC,    DE_Z,       DE_U,       DE_I,       DE_O,       DE_P,       DE_UDIA,
        KC_PGDN,    DE_H,       DE_J,       DE_K,       DE_L,       DE_ODIA,    DE_ADIA,
        KC_INS,     DE_N,       DE_M,       DE_COMM,    DE_DOT,     DE_MINS,    DE_CIRC,
        KC_ALGR,    KC_RCTL,    KC_ENT,     KC_NO,      KC_NO,      KC_NO,      KC_NO
        ),

    [6] = LAYOUT(
        //left
        KC_LWIN,    KC_SLEP,    _______,    _______,    _______,    KC_BRID,    KC_BRIU, 
        _______,    _______,    _______,    _______,    _______,    _______,    _______, 
        _______,    _______,    _______,    KC_UP,      _______,    _______,    _______,
        _______,    _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    _______,    _______, 
        _______,    _______,    _______,    _______,    _______,    _______,    _______, 
        KC_NO,      KC_NO,      KC_NO,      _______,    _______,    _______,    MO(6), 

        //right
        _______,    _______,    KC_VOLD,    KC_VOLU,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______, 
        _______,    _______,    _______,    _______,    _______,    _______,    _______, 
        _______,    _______,    _______,    _______,    _______,    _______,    _______, 
        _______,    _______,    _______,    _______,    _______,    _______,    _______, 
        _______,    _______,    _______,    KC_NO,      KC_NO,      KC_NO,      KC_NO
        ),
};
