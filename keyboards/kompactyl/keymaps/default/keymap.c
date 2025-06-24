#include QMK_KEYBOARD_H

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35, L36, R30, R31, R32, R33, R34, R35, R36, \
    L40, L41, L42, L43, L44, R40, R41, R42, R43, R44 \
) { \
    /* Automatically pads missing positions */ \
    /* Left half */ \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { L30, L31, L32, L33, L34, L35, L36 }, \
    { KC_NO, KC_NO, L40, L41, L42, L43, L44 }, \
    /* Right half */ \
    { KC_NO, R00, R01, R02, R03, R04, R05 }, \
    { KC_NO, R10, R11, R12, R13, R14, R15 }, \
    { KC_NO, R20, R21, R22, R23, R24, R25 }, \
    { R30, R31, R32, R33, R34, R35, R36 }, \
    { R40, R41, R42, R43, R44 } \
}

enum sofle_layers {
    _QWERTY,
    _DHM,
    _MAP_GMS,
    _QWERTY_GMS,
    _NAV,
    _SYM,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_DHM,
    KC_MAP_GMS,
    KC_QWERTY_GMS,
    KC_NAV,
    KC_MT_LGUI_HYPR,
    KC_MT_CTRL_MEH,
    KC_MT_LSFT_CS,
    KC_MT_LALT_CGA
};

enum tap_dance {
    TD_3_E,
    TD_X_b,
};
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        _______    ,KC_1    ,KC_2    ,KC_3    ,KC_4           ,KC_5            ,                /**/                 KC_6    ,KC_7             ,KC_8    ,KC_9    ,KC_0    ,_______    ,
        TD(TD_3_E) ,KC_Q    ,KC_W    ,KC_E    ,KC_R           ,KC_T            ,                /**/                 KC_Y    ,KC_U             ,KC_I    ,KC_O    ,KC_P    ,TD(TD_X_b) ,
        KC_ESC     ,KC_A    ,KC_S    ,KC_D    ,KC_F           ,KC_G            ,                /**/                 KC_H    ,KC_J             ,KC_K    ,KC_L    ,KC_SCLN ,KC_ENT     ,
        _______    ,KC_Z    ,KC_X    ,KC_C    ,KC_V           ,KC_B            ,_______       , /**/ KC_MT_LALT_CGA ,KC_N    ,KC_M             ,KC_COMM ,KC_DOT  ,KC_SLSH ,_______    ,
                             KC_TAB  ,KC_BSPC ,KC_MT_CTRL_MEH ,KC_MT_LGUI_HYPR ,KC_MT_LSFT_CS , /**/ KC_NAV         ,KC_SPC  ,LT(_SYM, KC_TAB) ,KC_DEL  ,_______
    ),
    [_DHM] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,          /**/          _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
        _______ ,KC_Q    ,KC_W    ,KC_F    ,KC_P    ,KC_B    ,          /**/          KC_J    ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,_______ ,
        _______ ,KC_A    ,KC_R    ,KC_S    ,KC_T    ,KC_G    ,          /**/          KC_M    ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,_______ ,
        _______ ,KC_Z    ,KC_X    ,KC_C    ,KC_D    ,KC_V    ,_______ , /**/ _______ ,KC_K    ,KC_H    ,_______ ,_______ ,_______ ,_______ ,
                          _______ ,_______ ,_______ ,_______ ,_______ , /**/ _______ ,_______ ,_______ ,_______ ,_______
    ),
    [_MAP_GMS] = LAYOUT(
        _______   ,_______ ,_______   ,_______   ,_______   ,_______   ,           /**/          _______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
        KC_F/*T*/ ,KC_TAB  ,KC_Q/*Q*/ ,KC_W/*W*/ ,KC_K/*E*/ ,KC_S/*R*/ ,           /**/          _______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
        KC_ESC    ,KC_LSFT ,KC_A/*A*/ ,KC_D/*S*/ ,KC_V/*D*/ ,KC_E/*F*/ ,           /**/          _______ ,A(KC_TAB) ,G(KC_TAB) ,_______ ,_______ ,_______ ,
        KC_T/*B*/ ,KC_LALT ,KC_Z/*Z*/ ,KC_X/*X*/ ,KC_C/*C*/ ,KC_B/*V*/ , _______ , /**/ _______ ,_______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
                            KC_O/*Y*/ ,KC_J/*N*/ ,KC_LCTL   ,KC_SPC    , _______ , /**/ _______ ,_______ ,_______   ,_______   ,_______
    ),
    [_QWERTY_GMS] = LAYOUT(
        _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,           /**/          _______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
        KC_T    ,KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,           /**/          _______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
        KC_ESC  ,KC_LSFT ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,           /**/          _______ ,A(KC_TAB) ,G(KC_TAB) ,_______ ,_______ ,_______ ,
        KC_B    ,KC_LALT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    , _______ , /**/ _______ ,_______ ,_______   ,_______   ,_______ ,_______ ,_______ ,
                          KC_Y    ,KC_N    ,KC_LCTL ,KC_SPC  , _______ , /**/ _______ ,_______ ,_______   ,_______   ,_______
    ),
    [_NAV] = LAYOUT(
        _______ ,_______       ,_______ ,_______      ,_______ ,_______ ,          /**/          DF(KC_QWERTY_GMS) ,DF(KC_MAP_GMS) ,KC_QWERTY ,DF(KC_DHM) ,_______ ,_______ ,
        _______ ,HYPR(KC_QUOT) ,_______ ,_______      ,_______ ,_______ ,          /**/          KC_PGUP           ,KC_HOME        ,KC_UP     ,KC_END     ,_______ ,_______ ,
        _______ ,KC_PSCR       ,KC_VOLD ,KC_MPLY      ,KC_VOLU ,_______ ,          /**/          KC_PGDN           ,KC_LEFT        ,KC_DOWN   ,KC_RIGHT   ,_______ ,_______ ,
        _______ ,KC_CAPS       ,KC_MPRV ,HYPR(KC_GRV) ,KC_MNXT ,_______ ,_______ , /**/ _______ ,_______           ,_______        ,_______   ,_______    ,_______ ,_______ ,
                                _______ ,_______      ,_______ ,_______ ,_______ , /**/ _______ ,_______           ,_______        ,_______   ,_______
    ),
    [_SYM] = LAYOUT(
        _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,          /**/          KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10     ,KC_F11  ,
        KC_GRV  ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,          /**/          KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_UNDS ,LSFT(KC_P) ,KC_F12 ,
        KC_QUOT ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,          /**/          KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0       ,KC_DQT  ,
        KC_TILD ,KC_QUES ,KC_LBRC ,KC_LCBR ,KC_LPRN ,KC_LABK ,_______ , /**/ _______ ,KC_RABK ,KC_RPRN ,KC_RCBR ,KC_RBRC ,KC_BSLS    ,KC_PIPE ,
                          _______ ,_______ ,KC_MINS ,KC_EQL  ,KC_PLUS , /**/ _______ ,_______ ,_______ ,_______ ,_______
    )
};
// clang-format on
bool prev_prev_pressed = false;
bool prev_pressed      = false;
bool curr_pressed      = false;

uint16_t prev_prev_keycode = KC_NO;
uint16_t prev_keycode      = KC_NO;
uint16_t curr_keycode      = KC_NO;

bool handle_mod_tap_oneshot(uint16_t mt_key, uint16_t oneshot_mods) {
    static uint16_t timer;
    bool            allow_mods = prev_keycode == curr_keycode && prev_pressed;
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

bool handle_layer_tap_oneshot(enum sofle_layers layer, uint16_t oneshot_mods) {
    static uint16_t timer;
    bool            allow_mods = prev_keycode == curr_keycode && prev_pressed;
    clear_oneshot_mods();

    if (curr_pressed) {
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

bool handle_layer_on_off(enum sofle_layers layer) {
    curr_pressed ? layer_on(layer) : layer_off(layer);
    return false;
}

bool handle_persist_layer(enum sofle_layers layer) {
    if (curr_pressed) set_single_persistent_default_layer(layer);
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    clear_oneshot_layer_state(ONESHOT_PRESSED);

    prev_prev_pressed = prev_pressed;
    prev_pressed      = curr_pressed;
    curr_pressed      = record->event.pressed;

    prev_prev_keycode = prev_keycode;
    prev_keycode      = curr_keycode;
    curr_keycode      = keycode;

    switch (keycode) {
        case KC_QWERTY:
            return handle_persist_layer(_QWERTY);
        case KC_NAV:
            return handle_layer_on_off(_NAV);
        case KC_MT_LGUI_HYPR:
            return handle_mod_tap_oneshot(KC_LGUI, MOD_BIT(KC_LGUI) | MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_MT_CTRL_MEH:
            return handle_mod_tap_oneshot(KC_LCTL, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_MT_LSFT_CS:
            return handle_mod_tap_oneshot(KC_LSFT, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT));
        case KC_MT_LALT_CGA:
            return handle_mod_tap_oneshot(KC_LALT, MOD_BIT(KC_LGUI) | MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT));
    }

    return true;
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_3_E]    = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRV),
    [TD_X_b]    = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
};