#include QMK_KEYBOARD_H
#include "wait.h"

// clang-format off
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
// clang-format on

enum sofle_layers {
    _RU_JCUKEN,
    _EN_GRAPHITE,
    _NAV,
    _SYM,
    _FS,
};

enum custom_keycodes {
    KC_MT_LGUI_HYPR = SAFE_RANGE,
    KC_MT_CTRL_MEH,
    KC_MT_LSFT_CS,
    KC_MT_LALT_CGA,

    KC_LM_LGUI_HYPR,
    KC_LM_CTRL_MEH,
    KC_LM_LSFT_CS,
    KC_LM_LALT_CGA,

    U_DOT,
    U_COMM,
    U_SCLN,
    U_CLN,
    U_DQT,
    U_QUES,
    U_SLSH,

    URU_NUM,

    UEN_LBRC,
    UEN_RBRC,
    UEN_LCBR,
    UEN_RCBR,
    UEN_LT,
    UEN_GT,
    UEN_GRV,
    UEN_TILD,
    UEN_AT,
    UEN_HASH,
    UEN_DLR,
    UEN_CIRC,
    UEN_AMPR,
    UEN_PIPE,
    UEN_QUOT,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_RU_JCUKEN] = LAYOUT(
        KC_PSLS ,KC_F1   ,KC_F2   ,KC_F3   ,KC_QUOT        ,KC_GRV          ,                /**/                 KC_LBRC ,KC_RBRC  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
        KC_PAST ,KC_Q    ,KC_W    ,KC_E    ,KC_R           ,KC_T            ,                /**/                 KC_Y    ,KC_U     ,KC_I    ,KC_O    ,KC_P    ,XXXXXXX ,
        KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F           ,KC_G            ,                /**/                 KC_H    ,KC_J     ,KC_K    ,KC_L    ,KC_SCLN ,KC_ENT  ,
        KC_PPLS ,KC_Z    ,KC_X    ,KC_C    ,KC_V           ,KC_B            ,KC_PCMM       , /**/ KC_LM_LALT_CGA ,KC_N    ,KC_M     ,KC_COMM ,KC_DOT  ,U_DOT   ,XXXXXXX ,
                          KC_TAB  ,KC_BSPC ,KC_LM_LGUI_HYPR ,KC_LM_CTRL_MEH ,KC_LM_LSFT_CS , /**/ MO(_NAV)       ,KC_SPC  ,MO(_SYM) ,KC_DEL  ,XXXXXXX
    ),
    [_EN_GRAPHITE] = LAYOUT(
        KC_PSLS  ,KC_F1   ,KC_F2  ,KC_F3   ,KC_F4           ,KC_F5          ,                /**/                 KC_F6   ,KC_F7    ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,
        KC_PAST  ,KC_PMNS ,KC_X   ,KC_M    ,KC_W            ,KC_V           ,                /**/                 KC_K    ,KC_P     ,KC_J    ,KC_PEQL ,XXXXXXX ,KC_F12  ,
        KC_ESC   ,KC_N    ,KC_L   ,KC_T    ,KC_S            ,KC_G           ,                /**/                 KC_Y    ,KC_H     ,KC_A    ,KC_E    ,KC_I    ,KC_ENT  ,
        KC_PPLS  ,KC_B    ,KC_R   ,KC_D    ,KC_C            ,KC_Z           ,KC_PCMM       , /**/ KC_MT_LALT_CGA ,KC_Q    ,KC_F     ,KC_O    ,KC_U    ,U_DOT   ,XXXXXXX ,
                           KC_TAB ,KC_BSPC ,KC_MT_LGUI_HYPR ,KC_MT_CTRL_MEH ,KC_MT_LSFT_CS , /**/ MO(_NAV)       ,KC_SPC  ,MO(_SYM) ,KC_DEL  ,XXXXXXX
    ),
    [_NAV] = LAYOUT(
        XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX       ,          /**/          XXXXXXX ,XXXXXXX ,XXXXXXX  ,XXXXXXX       ,XXXXXXX ,XXXXXXX ,
        XXXXXXX ,XXXXXXX ,KC_1    ,KC_2    ,KC_3    ,HYPR(KC_PAST) ,          /**/          KC_HOME ,KC_PGDN ,KC_PGUP  ,KC_END        ,XXXXXXX ,XXXXXXX ,
        XXXXXXX ,KC_PSCR ,KC_4    ,KC_5    ,KC_6    ,HYPR(KC_PMNS) ,          /**/          KC_LEFT ,KC_DOWN ,KC_UP    ,KC_RIGHT      ,XXXXXXX ,XXXXXXX ,
        XXXXXXX ,KC_CAPS ,KC_7    ,KC_8    ,KC_9    ,HYPR(KC_PPLS) ,_______ , /**/ _______ ,XXXXXXX ,XXXXXXX ,KC_MPLY  ,HYPR(KC_PSLS) ,XXXXXXX ,XXXXXXX ,
                          KC_MPRV ,KC_VOLD ,_______ ,KC_0          ,_______ , /**/ _______ ,_______ ,_______ ,KC_VOLU  ,KC_MNXT
    ),
    [_SYM] = LAYOUT(
        XXXXXXX ,XXXXXXX ,XXXXXXX  ,URU_NUM  ,XXXXXXX ,XXXXXXX ,          /**/          XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX ,
        XXXXXXX ,XXXXXXX ,UEN_AT   ,UEN_HASH ,UEN_DLR ,KC_PERC ,          /**/          UEN_CIRC ,UEN_AMPR ,KC_ASTR  ,KC_UNDS  ,XXXXXXX  ,XXXXXXX ,
        XXXXXXX ,U_QUES  ,UEN_LBRC ,UEN_LCBR ,KC_LPRN ,UEN_LT  ,          /**/          UEN_GT   ,KC_RPRN  ,UEN_RCBR ,UEN_RBRC ,UEN_TILD ,XXXXXXX ,
        XXXXXXX ,XXXXXXX ,KC_MINS  ,KC_PLUS  ,KC_EQL  ,KC_EXLM ,XXXXXXX , /**/ _______ ,UEN_GRV  ,UEN_QUOT ,U_DQT    ,UEN_PIPE ,U_COMM   ,XXXXXXX ,
                          U_CLN    ,U_SCLN   ,_______ ,_______ ,_______ , /**/ _______ ,_______  ,_______  ,U_SLSH   ,KC_BSLS
    ),
};

// clang-format on
bool prev_prev_pressed = false;
bool prev_pressed      = false;
bool curr_pressed      = false;

uint16_t prev_prev_keycode = KC_NO;
uint16_t prev_keycode      = KC_NO;
uint16_t curr_keycode      = KC_NO;

uint16_t en_table[] = {
    KC_LBRC, // UEN_LBRC
    KC_RBRC, // UEN_RBRC
    KC_LCBR, // UEN_LCBR
    KC_RCBR, // UEN_RCBR
    KC_LT,   // UEN_LT
    KC_GT,   // UEN_GT
    KC_GRV,  // UEN_GRV
    KC_TILD, // UEN_TILD
    KC_AT,   // UEN_AT
    KC_HASH, // UEN_HASH
    KC_DLR,  // UEN_DLR
    KC_CIRC, // UEN_CIRC
    KC_AMPR, // UEN_AMPR
    KC_PIPE, // UEN_PIPE
    KC_QUOT, // UEN_QUOT
};

bool handle_mod_tap_oneshot(int16_t target_layer, uint16_t mt_key, uint16_t oneshot_mods) {
    static uint16_t timer;
    bool            allow_mods = prev_keycode == curr_keycode && prev_pressed;
    clear_oneshot_mods();

    if (curr_pressed) {
        timer = timer_read();
        if (target_layer >= 0) layer_on(target_layer);
        register_code(mt_key);
    } else {
        unregister_code(mt_key);
        if (target_layer >= 0) layer_off(target_layer);

        if (allow_mods && timer_elapsed(timer) < TAPPING_TERM) {
            add_oneshot_mods(oneshot_mods);
        }
    }
    return false;
}

bool handle_mod_tap_oneshot_set_layer_on_release(int16_t oneshot_layer, uint16_t mt_key, uint16_t oneshot_mods) {
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
            if (oneshot_layer >= 0) {
                set_oneshot_layer(oneshot_layer, ONESHOT_START);
                clear_oneshot_layer_state(ONESHOT_PRESSED);
            }
        }
    }
    return false;
}

bool is_ru(void) {
    return (default_layer_state & (1UL << _RU_JCUKEN)) != 0;
}

bool is_en(void) {
    return (default_layer_state & (1UL << _EN_GRAPHITE)) != 0;
}

void to_ru(void) {
    set_single_default_layer(_RU_JCUKEN);
}

void to_en(void) {
    set_single_default_layer(_EN_GRAPHITE);
}

void toggle_lang(void) {
    register_code(KC_LGUI);
    tap_code(KC_SPACE);
    wait_ms(50);
    unregister_code(KC_LGUI);
    wait_ms(50);
}

static bool handle_repeatable_key(uint16_t kc, bool pressed) {
    if (pressed) {
        register_code16(kc);
    } else {
        unregister_code16(kc);
    }
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

    static uint16_t u_dot_kc  = KC_NO;
    static uint16_t u_comm_kc = KC_NO;
    static uint16_t u_scln_kc = KC_NO;
    static uint16_t u_cln_kc  = KC_NO;
    static uint16_t u_dqt_kc  = KC_NO;
    static uint16_t u_ques_kc = KC_NO;
    static uint16_t u_slsh_kc = KC_NO;
    static uint16_t uru_num_kc = KC_NO;
    static bool     uru_num_switched = false;
    static uint16_t uen_kc = KC_NO;
    static bool     uen_switched = false;

    switch (keycode) {
        case KC_MT_LGUI_HYPR:
            return handle_mod_tap_oneshot(-1, KC_LGUI, MOD_BIT(KC_LGUI) | MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_MT_CTRL_MEH:
            return handle_mod_tap_oneshot(-1, KC_LCTL, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_MT_LSFT_CS:
            return handle_mod_tap_oneshot(-1, KC_LSFT, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT));
        case KC_MT_LALT_CGA:
            return handle_mod_tap_oneshot(-1, KC_LALT, MOD_BIT(KC_LGUI) | MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT));

        case KC_LM_LGUI_HYPR:
            return handle_mod_tap_oneshot(_EN_GRAPHITE, KC_LGUI, MOD_BIT(KC_LGUI) | MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_LM_CTRL_MEH:
            return handle_mod_tap_oneshot(_EN_GRAPHITE, KC_LCTL, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT));
        case KC_LM_LSFT_CS:
            return handle_mod_tap_oneshot_set_layer_on_release(_EN_GRAPHITE, KC_LSFT, MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT));
        case KC_LM_LALT_CGA:
            return handle_mod_tap_oneshot(_EN_GRAPHITE, KC_LALT, MOD_BIT(KC_LGUI) | MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT));

        case U_DOT:
            if (curr_pressed) {
                u_dot_kc = is_en() ? KC_DOT : KC_SLASH;
            }
            return handle_repeatable_key(u_dot_kc, curr_pressed);

        case U_COMM:
            if (curr_pressed) {
                u_comm_kc = is_en() ? KC_COMMA : S(KC_SLASH);
            }
            return handle_repeatable_key(u_comm_kc, curr_pressed);

        case U_SCLN:
            if (curr_pressed) {
                u_scln_kc = is_en() ? KC_SCLN : S(KC_4);
            }
            return handle_repeatable_key(u_scln_kc, curr_pressed);

        case U_CLN:
            if (curr_pressed) {
                u_cln_kc = is_en() ? KC_COLON : S(KC_6);
            }
            return handle_repeatable_key(u_cln_kc, curr_pressed);

        case U_DQT:
            if (curr_pressed) {
                u_dqt_kc = is_en() ? KC_DQT : S(KC_2);
            }
            return handle_repeatable_key(u_dqt_kc, curr_pressed);

        case U_QUES:
            if (curr_pressed) {
                u_ques_kc = is_en() ? KC_QUES : S(KC_7);
            }
            return handle_repeatable_key(u_ques_kc, curr_pressed);

        case U_SLSH:
            if (curr_pressed) {
                u_slsh_kc = is_en() ? KC_SLASH : S(KC_BSLS);
            }
            return handle_repeatable_key(u_slsh_kc, curr_pressed);

        /* Russian # key - switches to RU only while held */
        case URU_NUM:
            if (curr_pressed) {
                bool en_before = is_en();
                uru_num_switched = en_before;
                if (en_before) {
                    toggle_lang();
                }
                uru_num_kc = S(KC_3);
                register_code16(uru_num_kc);
            } else {
                unregister_code16(uru_num_kc);
                if (uru_num_switched) {
                    toggle_lang();
                }
                uru_num_switched = false;
                uru_num_kc = KC_NO;
            }
            return false;

        /* English symbols that are on Russian layer - switch to EN only while held */
        case UEN_LBRC ... UEN_QUOT:
            if (curr_pressed) {
                bool ru_before = is_ru();
                uen_switched = ru_before;
                if (ru_before) {
                    toggle_lang();
                }
                uen_kc = en_table[keycode - UEN_LBRC];
                register_code16(uen_kc);
            } else {
                unregister_code16(uen_kc);
                if (uen_switched) {
                    toggle_lang();
                }
                uen_switched = false;
                uen_kc = KC_NO;
            }
            return false;
    }

    if ((get_mods() & MOD_MASK_GUI) && curr_pressed) {
        if (keycode == KC_SPC) {
            if (is_en()) {
                to_ru();
            } else {
                to_en();
            }
        }
    }

    return true;
}

void keyboard_post_init_user(void) {
    wait_ms(200);
    to_en();
}
