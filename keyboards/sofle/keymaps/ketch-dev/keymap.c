#include QMK_KEYBOARD_H
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

enum tap_dance {
    TD_ARROWS_SYM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        _______    ,_______ ,_______ ,_______ ,_______        ,_______        ,                /**/                    _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        KC_TAB     ,KC_Q    ,KC_W    ,KC_E    ,KC_R           ,KC_T           ,                /**/                    KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,_______ ,
        KC_ESC     ,KC_A    ,KC_S    ,KC_D    ,KC_F           ,KC_G           ,                /**/                    KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_ENT  ,
        KC_BSPC    ,KC_Z    ,KC_X    ,KC_C    ,KC_V           ,KC_B           ,HYPR(KC_K)    , /**/ HYPR(KC_H)        ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_DEL  ,
                            _______  ,_______ ,KC_MT_GUI_HYPR ,KC_MT_CTRL_MEH ,KC_MT_LSFT_CS , /**/ TD(TD_ARROWS_SYM) ,KC_SPC  ,_______ ,_______ ,_______
    ),
    [_DHM] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,KC_Q    ,KC_W    ,KC_F    ,KC_P    ,KC_B    ,          /**/          KC_J    ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,_______ ,
        _______ ,KC_A    ,KC_R    ,KC_S    ,KC_T    ,KC_G    ,          /**/          KC_M    ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,_______ ,
        _______ ,KC_Z    ,KC_X    ,KC_C    ,KC_D    ,KC_V    ,_______ , /**/ _______ ,KC_K    ,KC_H    ,_______ ,_______ ,_______ ,_______ ,
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
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______    ,_______ ,
        _______ ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,          /**/          KC_CIRC ,KC_AMPR ,KC_ASTR ,_______ ,LSFT(KC_P) ,_______ ,
        _______ ,KC_QUES ,KC_LBRC ,KC_LCBR ,KC_LPRN ,KC_LABK ,          /**/          KC_RABK ,KC_RPRN ,KC_RCBR ,KC_RBRC ,KC_UNDS    ,_______ ,
        _______ ,KC_TILD ,_______ ,KC_QUOT  ,KC_DQT ,KC_GRV  ,_______ , /**/ _______ ,KC_PLUS ,KC_MINS ,KC_EQL  ,KC_PIPE ,KC_BSLS    ,_______ ,
                          _______ ,_______ ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_ARROWS] = LAYOUT(
        _______ ,_______   ,_______ ,_______ ,_______ ,_______           ,          /**/          _______    ,_______  ,_______ ,_______ ,_______ ,_______ ,
        _______ ,KC_1      ,KC_2    ,KC_3    ,KC_4    ,KC_5              ,          /**/          KC_6       ,KC_7     ,KC_8    ,KC_9    ,KC_0    ,_______ ,
        _______ ,_______   ,_______ ,_______ ,_______ ,DF(KC_MAP_GMS)    ,          /**/          KC_QWERTY  ,KC_LEFT  ,KC_DOWN ,KC_UP   ,KC_RGHT ,_______ ,
        _______ ,KC_CAPS   ,KC_PSCR ,KC_INS  ,_______ ,DF(KC_QWERTY_GMS) ,_______ , /**/ _______ ,DF(KC_DHM) ,KC_HOME  ,KC_PGDN ,KC_PGUP ,KC_END  ,_______ ,
                                     _______ ,_______ ,_______ ,_______  ,KC_FS   , /**/ _______ ,_______    ,_______  ,_______ ,_______
    ),
    [_FS] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,          /**/          KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,_______ ,
        _______ ,KC_LGUI ,KC_LALT ,KC_LSFT ,KC_LCTL ,_______ ,          /**/          _______ ,KC_LCTL ,KC_LSFT ,KC_LALT ,KC_LGUI ,_______ ,
        _______ ,KC_F11  ,KC_F12  ,_______ ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
                          _______ ,_______ ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
};

bool prev_prev_pressed = false;
bool prev_pressed = false;
bool curr_pressed = false;

uint16_t prev_prev_keycode = KC_NO;
uint16_t prev_keycode = KC_NO;
uint16_t curr_keycode = KC_NO;

bool handle_mod_tap_oneshot(uint16_t mt_key, uint16_t oneshot_mods) {
    static uint16_t timer;
    bool allow_mods = prev_keycode == curr_keycode && prev_pressed;
    clear_oneshot_mods();

    if (curr_pressed) {
        timer = timer_read();
        register_code(mt_key); 
    } else {
        unregister_code(mt_key);

        if (allow_mods && timer_elapsed(timer) < TAPPING_TERM) {
            add_oneshot_mods(oneshot_mods);
        }
    }
    return false; 
}

bool handle_layer_tap_oneshot(uint16_t lt_key, uint16_t oneshot_layer) {
    static uint16_t timer;

    bool allow_layer = prev_keycode == curr_keycode && prev_pressed;


        if (curr_pressed) {
            timer = timer_read();
            layer_on(lt_key);
        } else {
            layer_off(lt_key);

            if (allow_layer && timer_elapsed(timer) < TAPPING_TERM) {
                set_oneshot_layer(oneshot_layer, ONESHOT_START);
            }
        }

    return false;

}

bool handle_layer_on_off(enum sofle_layers layer) {
    curr_pressed ? layer_on(layer) : layer_off(layer);
    return false;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    clear_oneshot_layer_state(ONESHOT_PRESSED);

    prev_prev_pressed = prev_pressed;
    prev_pressed = curr_pressed;
    curr_pressed = record->event.pressed;

    prev_prev_keycode = prev_keycode;
    prev_keycode = curr_keycode;
    curr_keycode = keycode;

    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        
        case KC_GMS_NUMS:
            return handle_layer_on_off(_GMS_NUMS);

        case KC_SYM:
            return handle_layer_on_off(_SYM);

        case KC_ARROWS:
            return handle_layer_on_off(_ARROWS);
        
        case KC_FS:
            return handle_layer_on_off(_FS);

        case KC_MT_LSFT_CS:
            return handle_mod_tap_oneshot(KC_LSFT, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT));    

        case KC_MT_CTRL_MEH:
            return handle_mod_tap_oneshot(KC_LCTL, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        
        case KC_MT_GUI_HYPR:
            return handle_mod_tap_oneshot(KC_LGUI, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LGUI));
    }

    return true;
}

typedef enum {
    TD_HOLD,
    TD_SINGLE_TAP,
    TD_TAP_AND_HOLD,
    TD_NONE,
} td_state_t;

static td_state_t td_state = TD_NONE;

void td_arrows_sym_finished(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        if (state->pressed) {
            td_state = TD_HOLD;
            layer_on(_ARROWS);
        } else {
            td_state = TD_SINGLE_TAP;
        }
    } else if (state->count == 2) {
        if (state->pressed) {
            td_state = TD_TAP_AND_HOLD;
            layer_on(_SYM);
        } else {
            td_state = TD_NONE;
        }
    }
}

void td_arrows_sym_reset(tap_dance_state_t *state, void *user_data) {
    switch (td_state) {
        case TD_HOLD:
            layer_off(_ARROWS);
            break;

        case TD_SINGLE_TAP:
            set_oneshot_layer(_SYM, ONESHOT_START);
            break;

        case TD_TAP_AND_HOLD:
            layer_off(_SYM);
            break;

        case TD_NONE:
            break;
    }

    // Reset the state
    td_state = TD_NONE;
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_ARROWS_SYM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_arrows_sym_finished, td_arrows_sym_reset),
};

const key_override_t meta_w_override = ko_make_basic(MOD_MASK_GUI, KC_W, KC_MS_BTN1);
const key_override_t meta_e_override = ko_make_basic(MOD_MASK_GUI, KC_E, KC_MS_BTN3);
const key_override_t meta_r_override = ko_make_basic(MOD_MASK_GUI, KC_R, KC_MS_BTN2);

const key_override_t *key_overrides[] = {
	&meta_w_override,
	&meta_e_override,
	&meta_r_override,
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    tap_code(clockwise ? KC_VOLD : KC_VOLU);
    return false;
}
#endif
