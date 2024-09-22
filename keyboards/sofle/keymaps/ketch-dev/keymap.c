#include QMK_KEYBOARD_H

enum sofle_layers {
    _QWERTY,
    _DHM,
    _MAP_GMS,
    _QWERTY_GMS,
    _DHM_GMS,
    _SYM,
    _EXTEND,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_DHM,
    KC_MAP_GMS,
    KC_QWERTY_GMS,
    KC_DHM_GMS,
    KC_SYM,
    KC_EXTEND,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC  ,KC_1 ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,              /**/               KC_6   ,KC_7    ,KC_8    ,KC_9   ,KC_0    ,KC_GRV  ,
        KC_TAB  ,KC_Q ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,              /**/               KC_Y   ,KC_U    ,KC_I    ,KC_O   ,KC_P    ,KC_DEL  ,
        KC_BSPC ,KC_A ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,              /**/               KC_H   ,KC_J    ,KC_K    ,KC_L   ,KC_SCLN ,KC_ENT  ,
        KC_LSFT ,KC_Z ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,HYPR(KC_K),   /**/   HYPR(KC_H) ,KC_N   ,KC_M    ,KC_COMM ,KC_DOT ,KC_SLSH ,KC_RSFT ,
                       KC_LALT ,KC_LSFT ,KC_LGUI ,KC_LCTL ,KC_SYM    ,   /**/   KC_EXTEND  ,KC_SPC ,KC_LSFT ,KC_LALT ,KC_RGUI
    ),
    [_DHM] = LAYOUT(
        KC_ESC  ,KC_1 ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,              /**/               KC_6   ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_GRV  ,
        KC_TAB  ,KC_Q ,KC_W    ,KC_F    ,KC_P    ,KC_B    ,              /**/               KC_J   ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,KC_DEL  ,
        KC_BSPC ,KC_A ,KC_R    ,KC_S    ,KC_T    ,KC_G    ,              /**/               KC_M   ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,KC_ENT  ,
        KC_LSFT ,KC_Z ,KC_X    ,KC_C    ,KC_D    ,KC_V    ,HYPR(KC_K),   /**/   HYPR(KC_H) ,KC_K   ,KC_H    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
                       KC_LALT ,KC_LSFT ,KC_LGUI ,KC_LCTL ,KC_SYM    ,   /**/   KC_EXTEND  ,KC_SPC ,KC_LSFT ,KC_LALT ,KC_LGUI
    ),
    [_MAP_GMS] = LAYOUT(
        KC_ESC    ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,              /**/               KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_GRV  ,
        KC_TAB    ,KC_F/*T*/ ,KC_Q/*Q*/ ,KC_W/*W*/ ,KC_K/*E*/ ,KC_S/*R*/ ,              /**/               KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_DEL  ,
        KC_G/*G*/ ,KC_LSFT   ,KC_A/*A*/ ,KC_D/*S*/ ,KC_V/*D*/ ,KC_E/*F*/ ,              /**/               KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_ENT  ,
        KC_T/*B*/ ,KC_LCTL   ,KC_Z/*Z*/ ,KC_X/*X*/ ,KC_C/*C*/ ,KC_B/*V*/ ,HYPR(KC_K),   /**/   HYPR(KC_H) ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
                              KC_O/*Y*/ ,KC_M/*H*/ ,KC_LALT   ,KC_SPC    ,KC_J/*N*/ ,   /**/   KC_EXTEND  ,KC_SPC  ,KC_LSFT ,KC_LALT ,KC_RGUI
    ),
    [_QWERTY_GMS] = LAYOUT(
        KC_ESC   ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5   ,              /**/               KC_6   ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_GRV  ,
        KC_TAB   ,KC_J    ,KC_Q    ,KC_W    ,KC_E    ,KC_R   ,              /**/               KC_Y   ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_DEL  ,
        KC_L     ,KC_LSFT ,KC_A    ,KC_S    ,KC_D    ,KC_F   ,              /**/               KC_H   ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_ENT  ,
        KC_U     ,KC_LCTL ,KC_Z    ,KC_X    ,KC_C    ,KC_V   ,HYPR(KC_K),   /**/   HYPR(KC_H) ,KC_N   ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
                           KC_Y    ,KC_M    ,KC_N    ,KC_SPC ,      KC_I,   /**/   KC_EXTEND  ,KC_SPC ,KC_LSFT ,KC_LALT ,KC_RGUI
    ),
    [_DHM_GMS] = LAYOUT(
        KC_ESC ,KC_1    ,KC_2 ,KC_3 ,KC_4 ,KC_5   ,              /**/               KC_6   ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_GRV  ,
        KC_TAB ,KC_J    ,KC_Q ,KC_W ,KC_E ,KC_R   ,              /**/               KC_J   ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,KC_DEL  ,
        KC_L   ,KC_LSFT ,KC_A ,KC_S ,KC_D ,KC_F   ,              /**/               KC_M   ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,KC_ENT  ,
        KC_U   ,KC_LCTL ,KC_Z ,KC_X ,KC_C ,KC_V   ,HYPR(KC_K),   /**/   HYPR(KC_H) ,KC_K   ,KC_H    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
                         KC_Y ,KC_M ,KC_N ,KC_SPC ,     KC_I ,   /**/   KC_EXTEND  ,KC_SPC ,KC_LSFT ,KC_LALT ,KC_RGUI
    ),
    [_SYM] = LAYOUT(
        _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,              /**/            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9      ,KC_F10  ,KC_F11  ,
        _______ ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,              /**/            KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_LABK    ,KC_RABK ,KC_F12  ,
        _______ ,KC_QUES ,KC_EQL  ,KC_LCBR ,KC_RCBR ,_______ ,              /**/            KC_GRV  ,KC_QUOT ,KC_DQT  ,LSFT(KC_P) ,KC_P    ,_______ ,
        _______ ,KC_LBRC ,KC_RBRC ,KC_LPRN ,KC_RPRN ,KC_TILD ,_______ ,     /**/   _______ ,KC_PLUS ,KC_MINS ,KC_UNDS ,KC_PIPE    ,KC_BSLS ,_______ ,
                            _______ ,_______ ,_______ ,_______ ,_______ ,   /**/   _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_EXTEND] = LAYOUT(
        _______ ,_______ ,KC_QWERTY ,DF(KC_DHM) ,DF(KC_MAP_GMS) ,DF(KC_DHM_GMS) ,               /**/            _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,KC_ESC    ,A(KC_LEFT) ,A(KC_RGHT)     ,_______        ,               /**/            KC_PGUP ,KC_HOME ,KC_UP   ,KC_END  ,KC_DEL  ,KC_BSPC ,
        _______ ,_______ ,KC_LALT   ,KC_LSFT    ,KC_LCTL        ,DF(KC_MAP_GMS) ,               /**/            KC_PGDN ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_ESC  ,KC_MENU ,
        _______ ,_______ ,_______   ,_______    ,_______        ,_______        ,_______    ,   /**/   _______ ,KC_CAPS ,KC_PSCR ,_______ ,_______ ,KC_INS  ,_______ ,
                          _______   ,_______    ,_______        ,KC_QWERTY      ,DF(KC_DHM) ,   /**/   _______ ,_______ ,_______ ,_______ ,_______
    ),
};

#ifdef OLED_ENABLE

bool should_process_keypress(void) { return true; }

static void print_status_narrow(void) {
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("LAYER"), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Qwrt"), false);
            break;

        case _DHM:
            oled_write_P(PSTR("DHm"), false);
            break;

        case _MAP_GMS:
            oled_write_P(PSTR("MapGms"), false);
            break;

        case _QWERTY_GMS:
            oled_write_P(PSTR("QwertyGms"), false);
            break;

        case _DHM_GMS:
            oled_write_P(PSTR("DHmGms"), false);
            break;

        case _SYM:
            oled_write_P(PSTR("Symb"), false);
            break;

        case _EXTEND:
            oled_write_P(PSTR("Ext"), false);
            break;

        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_270;
    }

    return rotation;
}

bool oled_task_user(void) {
    if (!is_keyboard_master()) {
      print_status_narrow();
    }

    return false;
}

#endif

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _SYM, _EXTEND, _ADJUST);
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }

            return false;
        case KC_SYM:
            if (record->event.pressed) {
                layer_on(_SYM);
            } else {
                layer_off(_SYM);
            }

            return false;
        case KC_EXTEND:
          if (record->event.pressed) {
              layer_on(_EXTEND);
          } else {
            layer_off(_EXTEND);
          }

          return false;

    }

    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }

    return false;
}

#endif
