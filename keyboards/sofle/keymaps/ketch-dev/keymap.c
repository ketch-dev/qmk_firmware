#include QMK_KEYBOARD_H
#define LT_SYM_ESC LT(KC_SYM, KC_ESC)
#define LT_GMS_NUMS_ESC LT(KC_GMS_NUMS, KC_ESC)

enum sofle_layers {
    _QWERTY,
    _DHM,
    _MAP_GMS,
    _QWERTY_GMS,
    _GMS_NUMS,
    _SYM,
    _ARROWS,
    _FS,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_DHM,
    KC_MAP_GMS,
    KC_QWERTY_GMS,
    KC_GMS_NUMS,
    KC_SYM,
    KC_ARROWS,
    KC_FS,
    KC_MT_LSFT_CS,
    KC_MT_CTRL_MEH,
    KC_MT_GUI_HYPR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        _______ ,_______ ,_______ ,_______       ,_______        ,_______        ,             /**/             _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,KC_Q    ,KC_W    ,KC_E          ,KC_R           ,KC_T           ,             /**/             KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,_______ ,
        KC_BSPC ,KC_A    ,KC_S    ,KC_D          ,KC_F           ,KC_G           ,             /**/             KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_ENT  ,
        KC_TAB  ,KC_Z    ,KC_X    ,KC_C          ,KC_V           ,KC_B           ,HYPR(KC_K) , /**/ HYPR(KC_H) ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_DEL  ,
                         _______  ,KC_MT_LSFT_CS ,KC_MT_GUI_HYPR ,KC_MT_CTRL_MEH ,LT_SYM_ESC , /**/ KC_ARROWS  ,KC_SPC  ,KC_LALT ,KC_FS   ,_______
    ),
    [_DHM] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,KC_Q    ,KC_W    ,KC_F    ,KC_P    ,KC_B    ,          /**/          KC_J    ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,_______ ,
        _______ ,KC_A    ,KC_R    ,KC_S    ,KC_T    ,KC_G    ,          /**/          KC_M    ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,_______ ,
        _______ ,KC_Z    ,KC_X    ,KC_C    ,KC_D    ,KC_V    ,_______ , /**/ _______ ,KC_K    ,KC_H    ,KC_COMM ,KC_DOT  ,KC_SLSH ,_______ ,
                          _______ ,_______ ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_MAP_GMS] = LAYOUT(
        _______   ,_______   ,_______   ,_______   ,_______   ,_______   ,                  /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______   ,KC_F/*T*/ ,KC_Q/*Q*/ ,KC_W/*W*/ ,KC_K/*E*/ ,KC_S/*R*/ ,                  /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        KC_TAB    ,KC_LSFT   ,KC_A/*A*/ ,KC_D/*S*/ ,KC_V/*D*/ ,KC_E/*F*/ ,                  /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        KC_G/*G*/ ,KC_LCTL   ,KC_Z/*Z*/ ,KC_X/*X*/ ,KC_C/*C*/ ,KC_B/*V*/ ,_______         , /**/ _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
                              KC_T/*B*/ ,KC_M/*H*/ ,KC_LALT   ,KC_SPC    ,LT_GMS_NUMS_ESC , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_QWERTY_GMS] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______  ,_______ ,                  /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,KC_T    ,KC_Q    ,KC_W    ,KC_E     ,KC_R    ,                  /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        KC_TAB  ,KC_LSFT ,KC_A    ,KC_S    ,KC_D     ,KC_F    ,                  /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        KC_G    ,KC_LCTL ,KC_Z    ,KC_X    ,KC_C     ,KC_V    ,_______         , /**/ _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
                          KC_B    ,KC_H    ,KC_LALT  ,KC_SPC  ,LT_GMS_NUMS_ESC , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_GMS_NUMS] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,KC_1    ,_______ ,KC_2    ,KC_6    ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,_______ ,_______ ,_______ ,KC_7    ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,KC_3    ,KC_4    ,KC_5    ,KC_8    ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
                          _______ ,_______ ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_SYM] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______    ,_______ ,_______ ,
        _______ ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,          /**/          KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_LABK    ,KC_RABK ,_______ ,
        _______ ,KC_QUES ,KC_EQL  ,KC_LCBR ,KC_RCBR ,_______ ,          /**/          KC_GRV  ,KC_QUOT ,KC_DQT  ,LSFT(KC_P) ,KC_P    ,_______ ,
        _______ ,KC_LBRC ,KC_RBRC ,KC_LPRN ,KC_RPRN ,KC_TILD ,_______ , /**/ _______ ,KC_PLUS ,KC_MINS ,KC_UNDS ,KC_PIPE    ,KC_BSLS ,_______ ,
                          _______ ,_______ ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_ARROWS] = LAYOUT(
        _______ ,_______ ,_______   ,_______    ,_______        ,_______           ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,KC_QWERTY ,DF(KC_DHM) ,DF(KC_MAP_GMS) ,DF(KC_QWERTY_GMS) ,          /**/          KC_PGUP ,KC_HOME ,KC_UP   ,KC_END  ,KC_PSCR ,_______ ,
        _______ ,_______ ,KC_LALT   ,KC_LSFT    ,KC_LCTL        ,_______           ,          /**/          KC_PGDN ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_CAPS ,KC_INS  ,
        _______ ,KC_1    ,KC_2      ,KC_3       ,KC_4           ,KC_5              ,_______ , /**/ _______ ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MENU ,
                          _______   ,_______    ,_______        ,_______           ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_FS] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,KC_F12  ,
        _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,_______ , /**/ _______ ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,
                          _______ ,_______ ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______
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

        case _GMS_NUMS:
            oled_write_P(PSTR("GmsNums"), false);
            break;

        case _SYM:
            oled_write_P(PSTR("Symb"), false);
            break;

        case _ARROWS:
            oled_write_P(PSTR("Arrows"), false);
            break;

        case _FS:
            oled_write_P(PSTR("Fs"), false);
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
bool handle_mod_tap_oneshot(bool allow_mods, uint16_t keycode, keyrecord_t *record, uint16_t hold_mod, uint16_t oneshot_mods) {
    static uint16_t timer;
    clear_oneshot_mods();

    if (record->event.pressed) {
        timer = timer_read(); 
        register_code(hold_mod); 
    } else {
        unregister_code(hold_mod);
        if (allow_mods && timer_elapsed(timer) < TAPPING_TERM) {
            add_oneshot_mods(oneshot_mods);
        }
    }
    return false; 
}


bool handle_layer_tap_oneshot(bool allow_mods, uint16_t keycode, keyrecord_t *record, uint8_t layer, uint16_t oneshot_mods) {
    static uint16_t timer;
    clear_oneshot_mods();

    if (record->event.pressed) {
        timer = timer_read(); 
        layer_on(layer); 
    } else {
        layer_off(layer);
        if (allow_mods && timer_elapsed(timer) < TAPPING_TERM) {
            add_oneshot_mods(oneshot_mods);
        }
    }
    return false; 
}
// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _SYM, _ARROWS, _ADJUST);
// }
bool prev_pressed = false;
bool curr_pressed = false;

uint16_t prev_keycode = KC_NO;
uint16_t curr_keycode = KC_NO;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    prev_pressed = curr_pressed;
    curr_pressed = record->event.pressed;

    prev_keycode = curr_keycode;
    curr_keycode = keycode;

    bool allow_mods = prev_keycode == curr_keycode && prev_pressed;

    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        
        case KC_GMS_NUMS:
            if (record->event.pressed) {
                layer_on(_GMS_NUMS);
            } else {
                layer_off(_GMS_NUMS);
            }
            return false;

        case KC_SYM:
            if (record->event.pressed) {
                layer_on(_SYM);
            } else {
                layer_off(_SYM);
            }
            return false;

        case KC_ARROWS:
            if (record->event.pressed) {
                layer_on(_ARROWS);
            } else {
                layer_off(_ARROWS);
            }
            return false;
        
        case KC_FS:
            if (record->event.pressed) {
                layer_on(_FS);
            } else {
                layer_off(_FS);
            }
            return false;

        case KC_MT_LSFT_CS:
            return handle_mod_tap_oneshot(allow_mods, keycode, record, KC_LSFT, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT));    

        case KC_MT_CTRL_MEH:
            return handle_mod_tap_oneshot(allow_mods, keycode, record, KC_LCTL, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        
        case KC_MT_GUI_HYPR:
            return handle_mod_tap_oneshot(allow_mods, keycode, record, KC_LGUI, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LGUI)); 
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
