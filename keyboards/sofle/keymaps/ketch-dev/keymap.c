#include QMK_KEYBOARD_H
#define LT_GMS_NUMS_ESC LT(KC_GMS_NUMS, KC_ESC)
#define MT_LSFT_ESC MT(KC_LSFT, KC_ESC)

enum sofle_layers {
    _QWERTY,
    _DHM,
    _MAP_GMS,
    _QWERTY_GMS,
    _GMS_NUMS,
    _FS,
    _SYM,
    _ARROWS,
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
    KC_MT_CTRL_MEH,
    KC_MT_GUI_HYPR,
    KC_MT_SYM_CGA,
    KC_TOGGLE_OVERRIDE,
};

enum tap_dance {
    TD_Э_Ё,
    TD_Х_Ъ,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        XXXXXXX      ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX        ,XXXXXXX        ,                 /**/            XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX    ,
        TD(TD_Э_Ё)   ,KC_Q    ,KC_W    ,KC_E    ,KC_R           ,KC_T           ,                 /**/            KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,TD(TD_Х_Ъ) ,
        MT_LSFT_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F           ,KC_G           ,                 /**/            KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_ENT     ,
        KC_LALT      ,KC_Z    ,KC_X    ,KC_C    ,KC_V           ,KC_B           ,XXXXXXX ,        /**/ XXXXXXX   ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_TAB     ,
                               XXXXXXX ,XXXXXXX ,KC_MT_CTRL_MEH ,KC_MT_GUI_HYPR ,KC_MT_SYM_CGA ,  /**/ KC_ARROWS ,KC_SPC  ,XXXXXXX ,XXXXXXX ,XXXXXXX
    ),
    [_DHM] = LAYOUT(
        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,          /**/          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        _______ ,KC_Q    ,KC_W    ,KC_F    ,KC_P    ,KC_B    ,          /**/          KC_J    ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,_______ ,
        _______ ,KC_A    ,KC_R    ,KC_S    ,KC_T    ,KC_G    ,          /**/          KC_M    ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,_______ ,
        _______ ,KC_Z    ,KC_X    ,KC_C    ,KC_D    ,KC_V    ,XXXXXXX , /**/ XXXXXXX ,KC_K    ,KC_H    ,_______ ,_______ ,_______ ,_______ ,
                          XXXXXXX ,XXXXXXX ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX
    ),
    [_MAP_GMS] = LAYOUT(
        XXXXXXX   ,XXXXXXX ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                  /**/          XXXXXXX ,XXXXXXX   ,XXXXXXX   ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        KC_F/*T*/ ,KC_TAB  ,KC_Q/*Q*/ ,KC_W/*W*/ ,KC_K/*E*/ ,KC_S/*R*/ ,                  /**/          _______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
        KC_G/*G*/ ,KC_LSFT ,KC_A/*A*/ ,KC_D/*S*/ ,KC_V/*D*/ ,KC_E/*F*/ ,                  /**/          _______ ,A(KC_TAB) ,G(KC_TAB) ,_______ ,_______ ,_______ ,
        KC_T/*B*/ ,KC_LCTL ,KC_Z/*Z*/ ,KC_X/*X*/ ,KC_C/*C*/ ,KC_B/*V*/ ,XXXXXXX         , /**/ XXXXXXX ,_______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
                            XXXXXXX   ,XXXXXXX   ,KC_LALT   ,KC_SPC    ,LT_GMS_NUMS_ESC , /**/ _______ ,_______ ,XXXXXXX   ,XXXXXXX   ,XXXXXXX
    ),
    [_QWERTY_GMS] = LAYOUT(
        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX  ,XXXXXXX ,                  /**/          XXXXXXX ,XXXXXXX   ,XXXXXXX   ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        KC_T    ,KC_TAB  ,KC_Q    ,KC_W    ,KC_E     ,KC_R    ,                  /**/          _______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
        KC_G    ,KC_LSFT ,KC_A    ,KC_S    ,KC_D     ,KC_F    ,                  /**/          _______ ,A(KC_TAB) ,G(KC_TAB) ,_______ ,_______ ,_______ ,
        KC_B    ,KC_LCTL ,KC_Z    ,KC_X    ,KC_C     ,KC_V    ,XXXXXXX         , /**/ XXXXXXX ,_______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
                          XXXXXXX ,XXXXXXX ,KC_LALT  ,KC_SPC  ,LT_GMS_NUMS_ESC , /**/ _______ ,_______ ,XXXXXXX   ,XXXXXXX   ,XXXXXXX
    ),
    [_GMS_NUMS] = LAYOUT(
        XXXXXXX ,XXXXXXX       ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,          /**/          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        KC_Y    ,HYPR(KC_QUOT) ,KC_1    ,_______ ,KC_2    ,KC_6    ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        KC_H    ,_______       ,_______ ,_______ ,_______ ,KC_7    ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        KC_N    ,_______       ,KC_3    ,KC_4    ,KC_5    ,KC_8    ,XXXXXXX , /**/ XXXXXXX ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
                                XXXXXXX ,XXXXXXX ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX
    ),
    [_SYM] = LAYOUT(
        XXXXXXX    ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,          /**/          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX    ,XXXXXXX   ,
        _______    ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,          /**/          KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_UNDS ,LSFT(KC_P) ,_______   ,
        S(KC_BSPC) ,KC_BSPC ,KC_LBRC ,KC_LCBR ,KC_LPRN ,KC_LABK ,          /**/          KC_RABK ,KC_RPRN ,KC_RCBR ,KC_RBRC ,KC_DEL     ,S(KC_DEL) ,
        _______    ,KC_TILD ,KC_QUES ,KC_QUOT ,KC_DQT  ,KC_GRV  ,XXXXXXX , /**/ XXXXXXX ,KC_PLUS ,KC_MINS ,KC_EQL  ,KC_PIPE ,KC_BSLS    ,_______   ,
                             XXXXXXX ,XXXXXXX ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX
    ),
    [_ARROWS] = LAYOUT(
        XXXXXXX            ,XXXXXXX ,XXXXXXX ,XXXXXXX    ,XXXXXXX   ,XXXXXXX           ,          /**/          XXXXXXX    ,XXXXXXX  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        KC_TOGGLE_OVERRIDE ,KC_1    ,KC_2    ,KC_3       ,KC_4      ,KC_5              ,          /**/          KC_6       ,KC_7     ,KC_8    ,KC_9    ,KC_0    ,KC_INS  ,
        KC_MPLY            ,KC_VOLD ,KC_VOLU ,_______    ,_______   ,DF(KC_MAP_GMS)    ,          /**/          KC_QWERTY  ,KC_LEFT  ,KC_DOWN ,KC_UP   ,KC_RGHT ,KC_CAPS ,
        _______            ,KC_MPRV ,KC_MNXT ,_______    ,_______   ,DF(KC_QWERTY_GMS) ,XXXXXXX , /**/ XXXXXXX ,DF(KC_DHM) ,KC_HOME  ,KC_PGDN ,KC_PGUP ,KC_END  ,KC_PSCR ,
                                     XXXXXXX ,XXXXXXX    ,_______   ,_______           ,_______ , /**/ _______ ,_______    ,XXXXXXX  ,XXXXXXX ,XXXXXXX
    ),
    [_FS] = LAYOUT(
        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,          /**/          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,          /**/          KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,_______ ,
        _______ ,KC_LGUI ,KC_LALT ,KC_LSFT ,KC_LCTL ,_______ ,          /**/          _______ ,KC_LCTL ,KC_LSFT ,KC_LALT ,KC_LGUI ,_______ ,
        _______ ,KC_F11  ,KC_F12  ,_______ ,_______ ,_______ ,XXXXXXX , /**/ XXXXXXX ,_______ ,KC_DEL  ,_______ ,_______ ,_______ ,_______ ,
                          XXXXXXX ,XXXXXXX ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX
    ),
};

bool override_enabled = true;
#define CREATE_LGUI_OVERRIDE(trigger_, replacement_) \
    { \
        .trigger_mods = MOD_BIT(KC_LGUI), \
        .trigger = trigger_, \
        .replacement = replacement_, \
        .suppressed_mods = MOD_BIT(KC_LGUI), \
        .layers = ~0, \
        .options = ko_options_default, \
        .negative_mod_mask = (uint8_t) ~(MOD_BIT(KC_LGUI)), \
        .enabled = &override_enabled, \
    }

const key_override_t lgui_a_override = CREATE_LGUI_OVERRIDE(KC_A, MS_BTN4);
const key_override_t lgui_s_override = CREATE_LGUI_OVERRIDE(KC_S, MS_BTN2);
const key_override_t lgui_d_override = CREATE_LGUI_OVERRIDE(KC_D, MS_BTN3);
const key_override_t lgui_f_override = CREATE_LGUI_OVERRIDE(KC_F, MS_BTN1);
const key_override_t lgui_g_override = CREATE_LGUI_OVERRIDE(KC_G, MS_BTN5);
const key_override_t *key_overrides[] = {
	&lgui_a_override,
	&lgui_s_override,
	&lgui_d_override,
	&lgui_f_override,
	&lgui_g_override,
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

bool lgui_held = false;
bool handle_mod_tap_lgui(void) {
    static uint16_t timer;
    bool allow_mods = prev_keycode == curr_keycode && prev_pressed;
    clear_oneshot_mods();

    if (curr_pressed) {
        lgui_held = true;
        timer = timer_read();
    } else {
        lgui_held = false;
        unregister_mods(MOD_BIT(KC_LGUI)); 

        if (allow_mods && timer_elapsed(timer) < TAPPING_TERM) {
            add_oneshot_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LGUI));
        }
    }
    return false; 
}

bool handle_layer_on_off(enum sofle_layers layer) {
    curr_pressed ? layer_on(layer) : layer_off(layer);
    return false;
}

bool handle_tri_layer_on_off(enum sofle_layers layer, enum sofle_layers second_layer, enum sofle_layers third_layer) {
    handle_layer_on_off(layer);
    update_tri_layer(layer, second_layer, third_layer);
    return false;
}

bool handle_persist_layer(enum sofle_layers layer) {
    if (curr_pressed) set_single_persistent_default_layer(layer);
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
        case KC_TOGGLE_OVERRIDE: if (curr_pressed) override_enabled = !override_enabled;
        case KC_QWERTY: return handle_persist_layer(_QWERTY); 
        case KC_GMS_NUMS: return handle_layer_on_off(_GMS_NUMS);
        case KC_SYM: return handle_tri_layer_on_off(_SYM, _ARROWS, _FS);
        case KC_ARROWS: return handle_tri_layer_on_off(_ARROWS, _SYM, _FS);
        case KC_FS: return handle_layer_on_off(_FS);
        case KC_MT_CTRL_MEH: return handle_mod_tap_oneshot(KC_LCTL, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_MT_SYM_CGA: return handle_mod_tap_oneshot(KC_SYM, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LGUI) | MOD_BIT(KC_LALT));
        case KC_MT_GUI_HYPR: return handle_mod_tap_lgui();
        default: if (lgui_held && curr_pressed) register_mods(MOD_BIT(KC_LGUI)); break;
    }

    if (!curr_pressed && lgui_held) {
        unregister_mods(MOD_BIT(KC_LGUI));
    }

    return true;
}

typedef enum {
    TD_HOLD,
    TD_TAP,
    TD_TAP_HOLD,
    TD_TAP_TAP,
    TD_TAP_TAP_TAP,
    TD_NONE,
} td_state_t;

static td_state_t td_state = TD_NONE;

tap_dance_action_t tap_dance_actions[] = {
    [TD_Э_Ё] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRV),
    [TD_Х_Ъ] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    tap_code(clockwise ? KC_VOLD : KC_VOLU);
    return false;
}
#endif
