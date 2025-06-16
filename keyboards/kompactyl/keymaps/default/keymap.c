#include QMK_KEYBOARD_H

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, \
    L10, L11, L12, L13, L14, L15, \
    L20, L21, L22, L23, L24, L25, \
    L30, L31, L32, L33, L34, L35, L36, \
    L40, L41, L42, L43, L44, \
    R00, R01, R02, R03, R04, R05, \
    R10, R11, R12, R13, R14, R15, \
    R20, R21, R22, R23, R24, R25, \
    R30, R31, R32, R33, R34, R35, R36, \
    R40, R41, R42, R43, R44 \
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
    _GMS_NUMS,
    _SYS,
    _MNG,
    _SYM,
    _FS,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_DHM,
    KC_MAP_GMS,
    KC_QWERTY_GMS,
    KC_GMS_NUMS,
    KC_FS,
    KC_LT_SYS_CSG,
    KC_MT_LGUI_HYPR,
    KC_MT_CTRL_MEH,
    KC_MT_LSFT_CS,
};

enum tap_dance {
    TD_3_E,
    TD_X_b,
};
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
    [_DHM] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
    [_MAP_GMS] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
    [_QWERTY_GMS] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
    [_GMS_NUMS] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
    [_SYS] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
    [_MNG] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
    [_SYM] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
    [_FS] = LAYOUT(
        // Left half
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5},  

        // Right half
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6}, 
        {KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
        {KC_1, KC_2, KC_3, KC_4, KC_5} 
    ),
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
        case KC_FS:
            return handle_layer_on_off(_FS);
        case KC_GMS_NUMS:
            return handle_layer_on_off(_GMS_NUMS);
        case KC_LT_SYS_CSG:
            return handle_layer_tap_oneshot(_SYS, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LGUI) | MOD_BIT(KC_LSFT));
        case KC_MT_LGUI_HYPR:
            return handle_mod_tap_oneshot(KC_LGUI, MOD_BIT(KC_LGUI) | MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_MT_CTRL_MEH:
            return handle_mod_tap_oneshot(KC_LCTL, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_MT_LSFT_CS:
            return handle_mod_tap_oneshot(KC_LSFT, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT));
    }

    return true;
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_3_E]    = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRV),
    [TD_X_b]    = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
};